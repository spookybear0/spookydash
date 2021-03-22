#pragma once
#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

class MenuLayer : public CCLayer {
public:
	static bool __fastcall init(MenuLayer* self) {
		return reinterpret_cast<bool(__thiscall*)(MenuLayer * self)>(base + 0x1907B0)(self);
	}
	static PVOID _init;
};

PVOID MenuLayer::_init = PVOID(base + 0x1907B0);