#pragma once

#pragma once
#include <cocos2d.h>
#include "macros.h"
#include "GJBaseGameLayer.h"

USING_NS_CC;

// needs testing, do not expect to work
class EffectGameObject {
public:
	static signed int __fastcall customSetup() {
		return reinterpret_cast<signed int(__fastcall*)()>(base + 0x254A50)();
	}
	static PVOID _customSetup;

	int __fastcall triggerObject(GJBaseGameLayer* gamelayer) {
		return reinterpret_cast<signed int(__fastcall*)()>(base + 0x253D60)();
	}
	static PVOID _triggerObject;

	EffectGameObject* __fastcall getSaveString() {
		return reinterpret_cast<EffectGameObject * (__fastcall*)()>(base + 0x257560)();
	}
	static PVOID _getSaveString;

	int __fastcall triggerActivated(float unknown) {
		return reinterpret_cast<int(__fastcall*)(float unknown)>(base + 0x254A30)(unknown);
	}
	static PVOID _triggerActivated;

	int __fastcall spawnXPosition() {
		return reinterpret_cast<int(__fastcall*)()>(base + 0x254A00)();
	}
	static PVOID _spawnXPosition;
};
// inherits from GameObject
PVOID EffectGameObject::_customSetup = PVOID(base + 0x254A50);
PVOID EffectGameObject::_triggerObject = PVOID(base + 0x253D60);
PVOID EffectGameObject::_getSaveString = PVOID(base + 0x257560);
PVOID EffectGameObject::_triggerActivated = PVOID(base + 0x254A30);
PVOID EffectGameObject::_spawnXPosition = PVOID(base + 0x254A00);