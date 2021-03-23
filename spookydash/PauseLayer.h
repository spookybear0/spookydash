#pragma once
#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

class PauseLayer : public CCLayerColor {
	bool init() {
		return reinterpret_cast<bool(__thiscall*)(PauseLayer * self)>(base + 0x1E4620)(this);
	}; hook(_init);
};

hookdef(PauseLayer, _init, 0x1DE8F0);