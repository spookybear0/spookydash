#pragma once
#include "cocos2d.h"
#include "macros.h"
#include "GhostType.h"

class PlayerObject : public GameObject {
	void __fastcall pushButton(void* PlayerButton) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject* self, void* PlayerButton)>(base + 0x1F4E40)(this, PlayerButton);
	}
	static PVOID _pushButton;

	void __fastcall releaseButton(void* PlayerButton) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, void* PlayerButton)>(base + 0x1F4F70)(this, PlayerButton);
	}
	static PVOID _releaseButton;

	void __fastcall playDeathEffect() {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self)>(base + 0x2EFBE0)(this);
	}
	static PVOID _playDeathEffect;

	void __fastcall playerDestroyed(bool destroyed) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool destroyed)>(base + 0x1EFAA0)(this, destroyed);
	}
	static PVOID _playerDestroyed;

	void __fastcall flipGravity(bool unknown, bool unknown2) { // LevelSettingsObject
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool unknown, bool unknown2)>(base + 0x1F59D0)(this, unknown, unknown2);
	}
	static PVOID _flipGravity;

	void __fastcall toggleFlyMode(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool toggle)>(base + 0x1F5E40)(this, toggle);
	}
	static PVOID _toggleFlyMode;

	void __fastcall toggleBirdMode(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool toggle)>(base + 0x1F6050)(this, toggle);
	}
	static PVOID _toggleBirdMode;

	void __fastcall toggleRollMode(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool toggle)>(base + 0x1F68E0)(this, toggle);
	}
	static PVOID _toggleRollMode;

	void __fastcall toggleDartMode(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool toggle)>(base + 0x1F62C0)(this, toggle);
	}
	static PVOID _toggleDartMode;

	void __fastcall toggleRobotMode(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool toggle)>(base + 0x1F6A10)(this, toggle);
	}
	static PVOID _toggleRobotMode;

	void __fastcall toggleSpiderMode(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool toggle)>(base + 0x1F94D1)(this, toggle);
	}
	static PVOID _toggleSpiderMode;

	void __fastcall updateTimeMod(float time) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, float time)>(base + 0x1F94E0)(this, time);
	}
	static PVOID _updateTimeMod;

	void __fastcall togglePlayerScale(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool toggle)>(base + 0x1F9640)(this, toggle);
	}
	static PVOID _togglePlayerScale;

	void __fastcall setFlipX(bool flip) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool flip)>(base + 0x1FA690)(this, flip);
	}
	static PVOID _setFlipX;

	void __fastcall setFlipY(bool flip) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool flip)>(base + 0x1FA740)(this, flip);
	}
	static PVOID _setFlipY;

	void __fastcall resetObject() {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self)>(base + 0x1EECD0)(this);
	}
	static PVOID _resetObject;

	CCPoint __fastcall getRealPosition() {
		return reinterpret_cast<CCPoint(__thiscall*)(PlayerObject * self)>(base + 0x1F7E20)(this);
	}
	static PVOID _getRealPosition;

	void __fastcall toggleGhostEffect(GhostType type) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, GhostType type)>(base + 0x1F8930)(this, type);
	}
	static PVOID _toggleGhostEffect;

	// add members
};

PVOID PlayerObject::_pushButton = PVOID(base + 0x1F4E40);
PVOID PlayerObject::_releaseButton = PVOID(base + 0x1F4F70);
PVOID PlayerObject::_playDeathEffect = PVOID(base + 0x2EFBE0);
PVOID PlayerObject::_playerDestroyed = PVOID(base + 0x1EFAA0);
PVOID PlayerObject::_flipGravity = PVOID(base + 0x1F59D0);
PVOID PlayerObject::_toggleFlyMode = PVOID(base + 0x1F5E40);
PVOID PlayerObject::_toggleBirdMode = PVOID(base + 0x1F6050);
PVOID PlayerObject::_toggleRollMode = PVOID(base + 0x1F68E0);
PVOID PlayerObject::_toggleDartMode = PVOID(base + 0x1F62C0);
PVOID PlayerObject::_toggleRobotMode = PVOID(base + 0x1F6A10);
PVOID PlayerObject::_toggleSpiderMode = PVOID(base + 0x1F94D1);
PVOID PlayerObject::_updateTimeMod = PVOID(base + 0x1F94E0);
PVOID PlayerObject::_togglePlayerScale = PVOID(base + 0x1F9640);
PVOID PlayerObject::_setFlipX = PVOID(base + 0x1FA690);
PVOID PlayerObject::_setFlipY = PVOID(base + 0x1FA740);
PVOID PlayerObject::_resetObject = PVOID(base + 0x1EECD0);
PVOID PlayerObject::_getRealPosition = PVOID(base + 0x1F7E20);
PVOID PlayerObject::_toggleGhostEffect = PVOID(base + 0x1F8930);