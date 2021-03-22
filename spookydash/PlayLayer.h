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

	void __fastcall onEnterTransitionDidFinish() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20DBD0)(this);
	}
	static PVOID _onEnterTransitionDidFinish;

	void __fastcall onExit() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x20DC00)(this);
	}
	static PVOID _onExit;

	void __fastcall draw() {
		return reinterpret_cast<void(__thiscall*)(PlayLayer * self)>(base + 0x208870)(this);
	}
	static PVOID _draw;

	static void __fastcall create(GJGameLevel* level) {
		return reinterpret_cast<void(__fastcall*)(GJGameLevel * level)>(base + 0x1FB6D0)(level);
	}
	static PVOID _create;

	void __fastcall update(float dt) {
		return reinterpret_cast<void(__thiscall*)(float dt)>(base + 0x2029C0)(dt);
	}
	static PVOID _update;

	void __fastcall updateReplay(float dt) {
		return reinterpret_cast<void(__thiscall*)(float dt)>(base + 0x20AF40)(dt);
	}
	static PVOID _updateReplay;

	void __fastcall releaseButton(void* PlayerButton) {
		return reinterpret_cast<void(__thiscall*)(void* PlayerButton)>(base + 0x111660)(PlayerButton);
	}
	static PVOID _releaseButton;

	void __fastcall pushButton(void* PlayerButton) {
		return reinterpret_cast<void(__thiscall*)(void* PlayerButton)>(base + 0x111500)(PlayerButton);
	}
	static PVOID _pushButton;

	void __fastcall onQuit() {
		return reinterpret_cast<void(__thiscall*)()>(base + 0x20D810)();
	}
	static PVOID _onQuit;

	void __fastcall onQuit() {
		return reinterpret_cast<void(__thiscall*)()>(base + 0x20D810)();
	}
	static PVOID _onQuit;

	void __fastcall levelComplete() {
		return reinterpret_cast<void(__thiscall*)()>(base + 0x1FD3D0)();
	}
	static PVOID _levelComplete;

	void __fastcall togglePracticeMode(bool toggle) {
		return reinterpret_cast<void(__thiscall*)(bool toggle)>(base + 0x20D0D1)(toggle);
	}
	static PVOID _togglePracticeMode;

	void __fastcall destroyPlayer(void* player, void* gameobject) { //PlayerObject and GameObject
		return reinterpret_cast<void(__thiscall*)(void* player, void* gameobject)>(base + 0x20D0D1)(player, gameobject);
	}
	static PVOID _destroyPlayer;

	// NEEDS TO BE FINISHED
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