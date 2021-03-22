#pragma once
#include "cocos2d.h"
#include "GJGameLevel.h"
#include "GameObject.h"
#include "PlayerObject.h"
#include "macros.h"

USING_NS_CC;

class PlayLayer : public CCLayer {
public:
	static bool __fastcall init(PlayLayer* self, GJGameLevel* level) {
		return reinterpret_cast<bool(__thiscall*)(PlayLayer * self, GJGameLevel * level)>(base + 0x01FB780)(self, level);
	}
	static PVOID _init;

	void onEnterTransitionDidFinish() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20DBD0)(this);
	}
	static PVOID _onEnterTransitionDidFinish;

	void onExit() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20DC00)(this);
	}
	static PVOID _onExit;

	void draw() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x208870)(this);
	}
	static PVOID _draw;

	static PlayLayer* __fastcall create(GJGameLevel* level) {
		return reinterpret_cast<PlayLayer*(__fastcall*)(GJGameLevel * level)>(base + 0x1FB6D0)(level);
	}
	static PVOID _create;

	void update(float dt) {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self, float dt)>(base + 0x2029C0)(this, dt);
	}
	static PVOID _update;

	void __fastcall updateReplay(float dt) {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self, float dt)>(base + 0x20AF40)(this, dt);
	}
	static PVOID _updateReplay;

	void __fastcall releaseButton(void* PlayerButton) {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self, void* PlayerButton)>(base + 0x111660)(this, PlayerButton);
	}
	static PVOID _releaseButton;

	void __fastcall pushButton(void* PlayerButton) {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self, void* PlayerButton)>(base + 0x111500)(this, PlayerButton);
	}
	static PVOID _pushButton;

	void __fastcall onQuit() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20D810)(this);
	}
	static PVOID _onQuit;

	void __fastcall levelComplete() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x1FD3D0)(this);
	}
	static PVOID _levelComplete;

	void __fastcall togglePracticeMode(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self, bool toggle)>(base + 0x20D0D1)(this, toggle);
	}
	static PVOID _togglePracticeMode;

	void __fastcall destroyPlayer(PlayerObject* player, GameObject* gameobject) {
		return reinterpret_cast<void(__thiscall*)(PlayLayer* self, PlayerObject* player, GameObject* gameobject)>(base + 0x20D0D1)(this, player, gameobject);
	}
	static PVOID _destroyPlayer;

	// marks a checkpoint (signature may not be correct)
	void __fastcall markCheckpoint() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x25FB60)(this);
	}
	static PVOID _markCheckpoint;

	// creates a checkpoint (signature may not be correct)
	void __fastcall createCheckpoint() { 
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20B050)(this);
	}
	static PVOID _createCheckpoint;

	// creates a checkpoint (signature may not be correct)
	void __fastcall removeLastCheckpoint() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20B830)(this);
	}
	static PVOID _removeLastCheckpoint;

	void __fastcall updateAttempts() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20CED0)(this);
	}
	static PVOID _updateAttempts;

	void __fastcall resetLevel() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20BF00)(this);
	}
	static PVOID _resetLevel;

	void __fastcall setupLevelStart(void* levelsettings) { // LevelSettingsObject
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self, void* levelsettings)>(base + 0x20BF00)(this, levelsettings);
	}
	static PVOID _setupLevelStart;

	void __fastcall flipGravity(PlayerObject* player, bool unknown, bool unknown2) { // LevelSettingsObject
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self, PlayerObject* player, bool unknown, bool unknown2)>(base + 0x1F59D0)(this, player, unknown, unknown2);
	}
	static PVOID _flipGravity;

	bool getisDead() {
		return reinterpret_cast<bool>(this + 0x39C);
	}

	float getLevelLength() {
		return *reinterpret_cast<float*>(this + 0x3B4);
	}

	bool getisPractice() {
		return reinterpret_cast<bool>(this + 0x495);
	}

	int getcurrentAttempt() {
		return reinterpret_cast<int>(this + 0x4A8);
	}

	PlayerObject* getPlayer() {
		return reinterpret_cast<PlayerObject*>(this + 0x224);
	}

	PlayerObject* getPlayer2() {
		return reinterpret_cast<PlayerObject*>(this + 0x228);
	}
};

PVOID PlayLayer::_init = PVOID(base + 0x01FB780);
PVOID PlayLayer::_onEnterTransitionDidFinish = PVOID(base + 0x20DBD0);
PVOID PlayLayer::_onExit = PVOID(base + 0x20DC00);
PVOID PlayLayer::_draw = PVOID(base + 0x208870);
PVOID PlayLayer::_create = PVOID(base + 0x1FB6D0);
PVOID PlayLayer::_update = PVOID(base + 0x2029C0);
PVOID PlayLayer::_updateReplay = PVOID(base + 0x20AF40);
PVOID PlayLayer::_releaseButton = PVOID(base + 0x111660);
PVOID PlayLayer::_pushButton = PVOID(base + 0x111500);
PVOID PlayLayer::_onQuit = PVOID(base + 0x20D810);
PVOID PlayLayer::_levelComplete = PVOID(base + 0x1FD3D0);
PVOID PlayLayer::_togglePracticeMode = PVOID(base + 0x20D0D1);
PVOID PlayLayer::_destroyPlayer = PVOID(base + 0x20A1A0);
PVOID PlayLayer::_markCheckpoint = PVOID(base + 0x25FB60);
PVOID PlayLayer::_createCheckpoint = PVOID(base + 0x20B050);
PVOID PlayLayer::_removeLastCheckpoint = PVOID(base + 0x20B830);
PVOID PlayLayer::_updateAttempts = PVOID(base + 0x20CED0);
PVOID PlayLayer::_resetLevel = PVOID(base + 0x20BF00);
PVOID PlayLayer::_setupLevelStart = PVOID(base + 0x1FB780);
PVOID PlayLayer::_flipGravity = PVOID(base + 0x1F59D0);