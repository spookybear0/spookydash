#pragma once

#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

class AchievementBar : public CCNodeRGBA {
public:
	static AchievementBar* __fastcall create(const char* title, const char* text, const char* icon, bool use_defaults) {
		return reinterpret_cast<AchievementBar * (__fastcall*)(const char* title, const char* text, const char* icon, bool use_defaults)>(base + 0x3B120)(title, text, icon, use_defaults);
	}
	static PVOID _create;

	CCAction* __fastcall show() {
		return reinterpret_cast<CCAction * (__fastcall*)()>(base + 0x3BE50)();
	}
	static PVOID _show;
};

PVOID AchievementBar::_create = PVOID(base + 0x3B120);
PVOID AchievementBar::_show = PVOID(base + 0x3BE50);