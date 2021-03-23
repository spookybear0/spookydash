#pragma once

#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

// needs testing, do not expect to work
class AchievementBar : public CCNodeRGBA {
public:
	static AchievementBar* __fastcall create(const char* title, const char* text, const char* icon, int type) {
		AchievementBar* toReturn = reinterpret_cast<AchievementBar * (__fastcall*)(const char* title, const char* text, const char* icon, int type)>(base + 0x3B120)(title, text, icon, type);

		__asm add esp, 0x8

		return toReturn;
	}; hook(_create);

	CCAction* __thiscall show() {
		return reinterpret_cast<CCAction * (__thiscall*)(AchievementBar* self)>(base + 0x3BE50)(this);
	}; hook(_show);
};

hookdef(AchievementBar, _create, 0x3B120);
hookdef(AchievementBar, _show, 0x3BE50);