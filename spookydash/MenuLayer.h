#pragma once
#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

class MenuLayer : public CCLayer {
public:
	bool init() {
		return reinterpret_cast<bool(__thiscall*)(MenuLayer * self)>(base + 0x1907B0)(this);
	}; hook(_init);
};

hookdef(MenuLayer, _init, 0x1907B0);