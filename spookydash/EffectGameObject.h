#pragma once

#include <cocos2d.h>
#include "macros.h"
#include "GJBaseGameLayer.h"

USING_NS_CC;

// needs testing, do not expect to work
class EffectGameObject {
public:
	bool __fastcall customSetup() {
		return reinterpret_cast<bool(__fastcall*)(EffectGameObject * self)>(base + 0x254A50)(this);
	}
	static PVOID _customSetup;

	void __thiscall triggerObject(GJBaseGameLayer* gamelayer) {
		return reinterpret_cast<void(__thiscall*)(EffectGameObject* self, GJBaseGameLayer* gamelayer)>(base + 0x253D60)(this, gamelayer);
	}
	static PVOID _triggerObject;

	EffectGameObject* __thiscall getSaveString() {
		return reinterpret_cast<EffectGameObject * (__thiscall*)(EffectGameObject * self)>(base + 0x257560)(this);
	}
	static PVOID _getSaveString;

	void __thiscall triggerActivated(float dt) {
		return reinterpret_cast<void(__thiscall*)(EffectGameObject * self, float dt)>(base + 0x254A30)(this, dt);
	}
	static PVOID _triggerActivated;

	void __thiscall spawnXPosition() {
		return reinterpret_cast<void(__thiscall*)(EffectGameObject * self)>(base + 0x254A00)(this);
	}
	static PVOID _spawnXPosition;
};
// inherits from GameObject
PVOID EffectGameObject::_customSetup = PVOID(base + 0x254A50);
PVOID EffectGameObject::_triggerObject = PVOID(base + 0x253D60);
PVOID EffectGameObject::_getSaveString = PVOID(base + 0x257560);
PVOID EffectGameObject::_triggerActivated = PVOID(base + 0x254A30);
PVOID EffectGameObject::_spawnXPosition = PVOID(base + 0x254A00);