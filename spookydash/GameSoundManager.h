#pragma once
#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

class GameSoundManager : public CCNode {
	static GameSoundManager* __stdcall sharedState() {
		return reinterpret_cast<GameSoundManager*(__stdcall*)()>(base + 0x24800)();
	}; hook(_sharedState);
};

hookdef(GameSoundManager, _sharedState, 0x24800);