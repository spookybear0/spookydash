#pragma once
#include "GManager.h"
#include "Windows.h"
#include "macros.h"
#include "PlayLayer.h"
#include "LevelEditorLayer.h"
#include <cocos2d.h>

class GameManager : public GManager {
public:
	static GameManager* __stdcall sharedState() {
		return reinterpret_cast<GameManager* (__stdcall*)()>(base + 0xC4A50)();
	}
	static PVOID _getSharedState;

	bool __thiscall getGameVariable(const char* key) {
		return reinterpret_cast<bool(__thiscall*)(GameManager*, const char*)>(base + 0xC9D30)(this, key);
	}
	static PVOID _getGameVariable;

	PlayLayer* getPlayLayer() {
		return reinterpret_cast<PlayLayer*>(*reinterpret_cast<std::uintptr_t*>(base + 0xC4A50) + 0x164);
	}

	LevelEditorLayer* getEditorLayer() {
		return reinterpret_cast<LevelEditorLayer*>(*reinterpret_cast<std::uintptr_t*>(base + 0xC4A50) + 0x168);
	}
};

PVOID GameManager::_getSharedState = PVOID(base + 0xC4A50);
PVOID GameManager::_getGameVariable = PVOID(base + 0xC9D30);