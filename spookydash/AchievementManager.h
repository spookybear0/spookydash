#pragma once

#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

// needs testing, do not expect to work
class AchievementManager : public CCNode {
public:
	AchievementManager* __fastcall sharedState() {
		return reinterpret_cast<AchievementManager* (__fastcall*)()>(base + 0x7B10)();
	}
	static PVOID _sharedState;
};

PVOID AchievementManager::_sharedState = PVOID(base + 0x7B10);