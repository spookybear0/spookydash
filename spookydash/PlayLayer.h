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
	}; hook(_init);

	void onEnterTransitionDidFinish() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20DBD0)(this);
	}; hook(_onEnterTransitionDidFinish);

	void onExit() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20DC00)(this);
	}; hook(_onExit);

	void draw() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x208870)(this);
	}; hook(_draw);

	static PlayLayer* __fastcall create(GJGameLevel* level) {
		return reinterpret_cast<PlayLayer*(__fastcall*)(GJGameLevel * level)>(base + 0x1FB6D0)(level);
	}; hook(_create);

	void update(float dt) {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self, float dt)>(base + 0x2029C0)(this, dt);
	}; hook(_update);

	void __fastcall updateReplay(float dt) {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self, float dt)>(base + 0x20AF40)(this, dt);
	}; hook(_updateReplay);

	void __fastcall releaseButton(void* PlayerButton) {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self, void* PlayerButton)>(base + 0x111660)(this, PlayerButton);
	}; hook(_releaseButton);

	void __fastcall pushButton(void* PlayerButton) {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self, void* PlayerButton)>(base + 0x111500)(this, PlayerButton);
	}; hook(_pushButton);

	void __fastcall onQuit() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20D810)(this);
	}; hook(_onQuit);

	void __fastcall levelComplete() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x1FD3D0)(this);
	}; hook(_levelComplete);

	void __fastcall togglePracticeMode(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self, bool toggle)>(base + 0x20D0D1)(this, toggle);
	}; hook(_togglePracticeMode);

	void __fastcall destroyPlayer(PlayerObject* player, GameObject* gameobject) {
		return reinterpret_cast<void(__thiscall*)(PlayLayer* self, PlayerObject* player, GameObject* gameobject)>(base + 0x20D0D1)(this, player, gameobject);
	}; hook(_destroyPlayer);

	// marks a checkpoint (signature may not be correct)
	void __fastcall markCheckpoint() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x25FB60)(this);
	}; hook(_markCheckpoint);

	// creates a checkpoint (signature may not be correct)
	void __fastcall createCheckpoint() { 
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20B050)(this);
	}; hook(_createCheckpoint);

	// creates a checkpoint (signature may not be correct)
	void __fastcall removeLastCheckpoint() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20B830)(this);
	}; hook(_removeLastCheckpoint);

	void __fastcall updateAttempts() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20CED0)(this);
	}; hook(_updateAttempts);

	void __fastcall resetLevel() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20BF00)(this);
	}; hook(_resetLevel);

	void __fastcall setupLevelStart(void* levelsettings) { // LevelSettingsObject
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self, void* levelsettings)>(base + 0x20BF00)(this, levelsettings);
	}; hook(_setupLevelStart);

	void __fastcall flipGravity(PlayerObject* player, bool unknown, bool unknown2) { // LevelSettingsObject
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self, PlayerObject* player, bool unknown, bool unknown2)>(base + 0x1F59D0)(this, player, unknown, unknown2);
	}; hook(_flipGravity);

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

hookdef(PlayLayer, _init, 0x01FB780);
hookdef(PlayLayer, _onEnterTransitionDidFinish, 0x20DBD0);
hookdef(PlayLayer, _onExit, 0x20DC00);
hookdef(PlayLayer, _draw, 0x208870);
hookdef(PlayLayer, _create, 0x1FB6D0);
hookdef(PlayLayer, _update, 0x2029C0);
hookdef(PlayLayer, _updateReplay, 0x20AF40);
hookdef(PlayLayer, _releaseButton, 0x111660);
hookdef(PlayLayer, _pushButton, 0x111500);
hookdef(PlayLayer, _onQuit, 0x20D810);
hookdef(PlayLayer, _levelComplete, 0x1FD3D0);
hookdef(PlayLayer, _togglePracticeMode, 0x20D0D1);
hookdef(PlayLayer, _destroyPlayer, 0x20D0D1);
hookdef(PlayLayer, _markCheckpoint, 0x25FB60);
hookdef(PlayLayer, _createCheckpoint, 0x25FB60);
hookdef(PlayLayer, _removeLastCheckpoint, 0x20A1A0);
hookdef(PlayLayer, _updateAttempts, 0x20CED0);
hookdef(PlayLayer, _resetLevel, 0x20BF00);
hookdef(PlayLayer, _setupLevelStart, 0x1FB780);
hookdef(PlayLayer, _flipGravity, 0x1F59D0);