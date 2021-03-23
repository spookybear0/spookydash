#pragma once

#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

class AchievementManager : public CCNode {
public:
	AchievementManager* __stdcall sharedState() {
		return reinterpret_cast<AchievementManager* (__stdcall*)()>(base + 0x7B10)();
	}; hook(_sharedState);
};

hookdef(AchievementManager, _sharedState, 0x7B10);