#pragma once

#include <cocos2d.h>
#include "macros.h"
#include "AchievementBar.h"

USING_NS_CC;

#define __STR_CAT___(str1, str2) str1##str2
#define __STR_CAT__(str1, str2) __STR_CAT___(str1, str2)
#define PAD(size) char __STR_CAT__(pad, __LINE__)[size] = {};

// needs testing, do not expect to work
class AchievementNotifier : public CCNode {
PAD(0x4)
CCArray* m_aScheduled;
CCNode* m_obShownNode;
PAD(0x4)
public:
	static AchievementNotifier* __stdcall sharedState() {
		return reinterpret_cast<AchievementNotifier* (__stdcall*)()>(base + 0xFC90)();
	}
	static PVOID _sharedState;

	void __fastcall showNextAchievement() {
		return reinterpret_cast<void(__fastcall*)(AchievementNotifier*)>(base + 0xFD60)(this);
	}
	static PVOID _showNextAchievement;

	AchievementBar* notifyAchievement(const char* title, const char* text, const char* icon, int type) {
		AchievementBar* ach = AchievementBar::create(title, text, icon, type);
		this->m_aScheduled->addObject(ach);
		return ach;
	}
};

PVOID AchievementNotifier::_sharedState = PVOID(base + 0xFC90);
PVOID AchievementNotifier::_showNextAchievement = PVOID(base + 0xFD60);