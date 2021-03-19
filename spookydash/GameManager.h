#pragma once
#include "GManager.h"
#include "Windows.h"

size_t base = reinterpret_cast<size_t>(GetModuleHandle(0));

class GameManager : GManager {
	static GameManager* __stdcall getSharedState() {
		return reinterpret_cast<GameManager* (__stdcall*)()>(base + 0xC4A50)();
	}

	static LPVOID* _getSharedState() {
		return (LPVOID*)(base + 0xC4A50);
	}

	bool __thiscall getGameVariable(GameManager* self, const char* key) {
		return reinterpret_cast<bool(__thiscall*)(GameManager*, const char*)>(base + 0xC9D30)(this, key);
	}

	static LPVOID* _getGameVariable() {
		return (LPVOID*)(base + 0xC9D30);
	}
};