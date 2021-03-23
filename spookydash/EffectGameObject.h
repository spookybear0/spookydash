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
	}; hook(_customSetup);

	void __thiscall triggerObject(GJBaseGameLayer* gamelayer) {
		return reinterpret_cast<void(__thiscall*)(EffectGameObject* self, GJBaseGameLayer* gamelayer)>(base + 0x253D60)(this, gamelayer);
	}; hook(_triggerObject);

	EffectGameObject* __thiscall getSaveString() {
		return reinterpret_cast<EffectGameObject * (__thiscall*)(EffectGameObject * self)>(base + 0x257560)(this);
	}; hook(_getSaveString);

	void __thiscall triggerActivated(float dt) {
		return reinterpret_cast<void(__thiscall*)(EffectGameObject * self, float dt)>(base + 0x254A30)(this, dt);
	}; hook(_triggerActivated);

	void __thiscall spawnXPosition() {
		return reinterpret_cast<void(__thiscall*)(EffectGameObject * self)>(base + 0x254A00)(this);
	}; hook(_spawnXPosition);
};
// inherits from GameObject
hookdef(EffectGameObject, _customSetup, 0x254A50);
hookdef(EffectGameObject, _triggerObject, 0x253D60);
hookdef(EffectGameObject, _getSaveString, 0x257560);
hookdef(EffectGameObject, _triggerActivated, 0x254A30);
hookdef(EffectGameObject, _spawnXPosition, 0x254A00);