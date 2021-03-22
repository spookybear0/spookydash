#pragma once
#include "macros.h"
#include <cocos2d.h>

USING_NS_CC;

class GameLevelManager : public CCNode {
public:
	static GameLevelManager* __stdcall sharedState() {
		return reinterpret_cast<GameLevelManager * (__stdcall*)()>(base + 0x9F860)();
	}

	static PVOID _sharedState;
};

PVOID GameLevelManager::_sharedState = PVOID(base + 0x9F860);