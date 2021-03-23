#pragma once
#include "cocos2d.h"
#include "macros.h"
#include "GhostType.h"

class PlayerObject : public GameObject {
	void __fastcall pushButton(void* PlayerButton) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject* self, void* PlayerButton)>(base + 0x1F4E40)(this, PlayerButton);
	}; hook(_pushButton);

	void __fastcall releaseButton(void* PlayerButton) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, void* PlayerButton)>(base + 0x1F4F70)(this, PlayerButton);
	}; hook(_releaseButton);

	void __fastcall playDeathEffect() {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self)>(base + 0x2EFBE0)(this);
	}; hook(_playDeathEffect);

	void __fastcall playerDestroyed(bool destroyed) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool destroyed)>(base + 0x1EFAA0)(this, destroyed);
	}; hook(_playerDestroyed);

	void __fastcall flipGravity(bool unknown, bool unknown2) { // LevelSettingsObject
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool unknown, bool unknown2)>(base + 0x1F59D0)(this, unknown, unknown2);
	}; hook(_flipGravity);

	void __fastcall toggleFlyMode(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool toggle)>(base + 0x1F5E40)(this, toggle);
	}; hook(_toggleFlyMode);

	void __fastcall toggleBirdMode(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool toggle)>(base + 0x1F6050)(this, toggle);
	}; hook(_toggleBirdMode);

	void __fastcall toggleRollMode(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool toggle)>(base + 0x1F68E0)(this, toggle);
	}; hook(_toggleRollMode);

	void __fastcall toggleDartMode(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool toggle)>(base + 0x1F62C0)(this, toggle);
	}; hook(_toggleDartMode);

	void __fastcall toggleRobotMode(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool toggle)>(base + 0x1F6A10)(this, toggle);
	}; hook(_toggleRobotMode);

	void __fastcall toggleSpiderMode(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool toggle)>(base + 0x1F94D1)(this, toggle);
	}; hook(_toggleSpiderMode);

	void __fastcall updateTimeMod(float time) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, float time)>(base + 0x1F94E0)(this, time);
	}; hook(_updateTimeMod);

	void __fastcall togglePlayerScale(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool toggle)>(base + 0x1F9640)(this, toggle);
	}; hook(_togglePlayerScale);

	void __fastcall setFlipX(bool flip) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool flip)>(base + 0x1FA690)(this, flip);
	}; hook(_setFlipX);

	void __fastcall setFlipY(bool flip) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, bool flip)>(base + 0x1FA740)(this, flip);
	}; hook(_setFlipY);

	void __fastcall resetObject() {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self)>(base + 0x1EECD0)(this);
	}; hook(_resetObject);

	CCPoint __fastcall getRealPosition() {
		return reinterpret_cast<CCPoint(__thiscall*)(PlayerObject * self)>(base + 0x1F7E20)(this);
	}; hook(_getRealPosition);

	void __fastcall toggleGhostEffect(GhostType type) {
		return reinterpret_cast<void(__thiscall*)(PlayerObject * self, GhostType type)>(base + 0x1F8930)(this, type);
	}; hook(_toggleGhostEffect);

	// add members
};
hookdef(PlayerObject, _pushButton, 0x1F4E40);
hookdef(PlayerObject, _releaseButton, 0x1F4F70);
hookdef(PlayerObject, _playDeathEffect, 0x2EFBE0);
hookdef(PlayerObject, _playerDestroyed, 0x1EFAA0);
hookdef(PlayerObject, _flipGravity, 0x1F59D0);
hookdef(PlayerObject, _toggleFlyMode, 0x1F5E40);
hookdef(PlayerObject, _toggleBirdMode, 0x1F6050);
hookdef(PlayerObject, _toggleRollMode, 0x1F68E0);
hookdef(PlayerObject, _toggleDartMode, 0x1F62C0);
hookdef(PlayerObject, _toggleRobotMode, 0x1F6A10);
hookdef(PlayerObject, _toggleSpiderMode, 0x1F94D1);
hookdef(PlayerObject, _updateTimeMod, 0x1F9640);
hookdef(PlayerObject, _togglePlayerScale, 0x1F9640);
hookdef(PlayerObject, _setFlipX, 0x1FA690);
hookdef(PlayerObject, _setFlipY, 0x1FA740);
hookdef(PlayerObject, _resetObject, 0x1EECD0);
hookdef(PlayerObject, _getRealPosition, 0x1F7E20);
hookdef(PlayerObject, _toggleGhostEffect, 0x1F8930);