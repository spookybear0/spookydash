#pragma once
#include <vector>
#include "macros.h"
#include "MinHook.h"

#include "AchievementBar.h"
#include "AchievementNotifier.h"
#include "AchievementManager.h"
#include "EditLevelLayer.h"
#include "EffectGameObject.h"
#include "FLAlertLayer.h"
#include "GameLevelManager.h"
#include "GameManager.h"
#include "GameObject.h"
#include "GameSoundManager.h"
#include "GhostType.h"
#include "GJAccountManager.h"
#include "GJBaseGameLayer.h"
#include "GJGameLevel.h"
#include "GManager.h"
#include "LevelEditorLayer.h"
#include "MenuLayer.h"
#include "MenuOptions.h"
#include "PauseLayer.h"
#include "PlayerObject.h"
#include "PlayLayer.h"

#include "trampoline.h"
#include "hackpro.h"
#include "helpers.h"

using namespace trampoline;

namespace spookydash {
	bool is_initialized = false;

	int arr_index = 0;
	std::vector<PVOID> hooks;
	std::vector<PVOID>::iterator iter;

	void addHook(PVOID hook);
	MH_STATUS removeHook(PVOID hook);

	/* 
	  wrapper for MH_CreateHook (automaticaly enables hook)
	 
	  call like this: create_hook(MenuLayer::_init, &MenuLayer__init, mycallback)
	  
	  the callback must be the same type as the original function (MenuLayer__init)
	*/
	export MH_STATUS create_hook(PVOID target, void* original, LPVOID callback);
	// removes a hook
	export MH_STATUS remove_hook(LPVOID targetFunction);
	// enable a hook (you can also enable all hooks with enable_hook(ALL_HOOKS))
	export MH_STATUS enable_hook(LPVOID target);
	// initialize spookydash so hooks can be created
	export MH_STATUS initialize();
	// uninitialize spookydash so the dll is safe for closing
	export MH_STATUS uninitialize();
	// disables a hook
	export MH_STATUS disable_hook(LPVOID target);
}