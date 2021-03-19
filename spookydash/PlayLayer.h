#pragma once
#include "cocos2d.h"
#include "GJGameLevel.h"

USING_NS_CC;

size_t base = reinterpret_cast<size_t>(GetModuleHandle(0));

class PlayLayer : CCLayer {
public:
	bool __thiscall init(PlayLayer* self, GJGameLevel* level) {
		return reinterpret_cast<bool(__thiscall*)(PlayLayer * self, GJGameLevel * level)>(base + 0x01FB780)(self, level);
	}

	static PVOID _init;
};

PVOID PlayLayer::_init = PVOID(base + 0x01FB780);