#pragma once
#include "cocos2d.h"
#include "GJGameLevel.h"
#include "macros.h"

USING_NS_CC;

class PlayLayer : public CCLayer {
public:
	static bool __fastcall init(PlayLayer* self, GJGameLevel* level) {
		return reinterpret_cast<bool(__thiscall*)(PlayLayer * self, GJGameLevel * level)>(base + 0x01FB780)(self, level);
	}

	static PVOID _init;

	static bool(__thiscall* __init)(PlayLayer* self, GJGameLevel* level);
};

PVOID PlayLayer::_init = PVOID(base + 0x01FB780);