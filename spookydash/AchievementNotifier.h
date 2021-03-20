#pragma once

#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

class AchievementNotifier : public CCNodeRGBA {
public:
	AchievementNotifier* __fastcall sharedState() {
		return reinterpret_cast<AchievementNotifier * (__fastcall*)()>(base + 0xFC90)();
	}
	static PVOID _sharedState;

	void __fastcall showNextAchievement(const char* title, const char* text, const char* icon) {
		return reinterpret_cast<void(__fastcall*)(const char* title, const char* text, const char* icon)>(base + 0xFD60)(title, text, icon);
	}
	static PVOID _showNextAchievement;
};

PVOID AchievementNotifier::_sharedState = PVOID(base + 0xFC90);
PVOID AchievementNotifier::_showNextAchievement = PVOID(base + 0xFD60);