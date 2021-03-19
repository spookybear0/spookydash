#pragma comment(lib, "Winmm.lib")
#include <WinSock2.h>
#include <cocos2d.h>
#include "MinHook.h"
#include "spookydash.h"
#include <Windows.h>
#include <vector>

void spookydash::addHook(PVOID hook) {
	hooks[arr_index] = hook;
	++arr_index;
}

MH_STATUS spookydash::removeHook(PVOID hook) {
	iter = std::find(hooks.begin(), hooks.end(), hook); // remove hook from list of hooks
	if (iter != hooks.end()) {
		return MH_RemoveHook(hook);
	}
	else {
		return MH_ERROR_FUNCTION_NOT_FOUND;
	}
}

// wrapper for MH_Initialize (and some other stuff)
export MH_STATUS spookydash::initialize() {
	if (!is_initialized) {
		is_initialized = true;
		return MH_Initialize();
	}
	else {
		return MH_ERROR_ALREADY_INITIALIZED;
	}
}

// wrapper for MH_Uninitialize (and some other stuff)
export MH_STATUS spookydash::uninitialize() {
	if (is_initialized) {
		is_initialized = false;
		return MH_Uninitialize();
	}
	else {
		return MH_ERROR_NOT_INITIALIZED;
	}
}

/* wrapper for MH_CreateHook (automaticaly enables hook)
call like this create_hook(MenuLayer::init, MenuLayer::_init, mycallback)*/
export MH_STATUS spookydash::create_hook(PVOID target, void* original, LPVOID callback) {
	if (is_initialized) {
		MH_STATUS result = MH_CreateHook(target, callback, (LPVOID*)original); //(LPVOID*)&targetFunction
		//addHook(target);
		return result;
	}
	else {
		return MH_ERROR_NOT_INITIALIZED;
	}
}

// wrapper for MH_RemoveHook
export MH_STATUS spookydash::remove_hook(LPVOID targetFunction) {
	if (is_initialized) {
		return removeHook(targetFunction);
	}
	else {
		return MH_ERROR_NOT_INITIALIZED;
	}
}

// wrapper for MH_EnableHook
export MH_STATUS spookydash::enable_hook(LPVOID target) {
	if (is_initialized) {
		MH_EnableHook(target);
	}
	else {
		return MH_ERROR_NOT_INITIALIZED;
	}
}