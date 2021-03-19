#pragma once
#include <Windows.h>
#include "PlayLayer.h"
#include <vector>
#include "MinHook.h"

#define export __declspec(dllexport)
#define ALL_HOOKS MH_ALL_HOOKS

namespace spookydash {
	bool is_initialized = false;

	int arr_index = 0;
	std::vector<PVOID> hooks;
	std::vector<PVOID>::iterator iter;

	export void addHook(PVOID hook);
	export MH_STATUS removeHook(PVOID hook);

	export MH_STATUS create_hook(PVOID target, LPVOID callback);
	export MH_STATUS remove_hook(LPVOID targetFunction);
	export MH_STATUS enable_hook(LPVOID target);
	export MH_STATUS initialize();
	export MH_STATUS uninitialize();
}