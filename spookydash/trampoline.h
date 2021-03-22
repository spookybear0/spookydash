#pragma once
#include "GJGameLevel.h"
#include "PlayLayer.h"
#include "MenuLayer.h"
#include "GameLevelManager.h"
#include "GameManager.h"
#include "AchievementNotifier.h"
#include "AchievementManager.h"

namespace trampoline {
    inline bool(__thiscall* PlayLayerinit)(PlayLayer* self, GJGameLevel* level);

    inline bool(__thiscall* MenuLayerinit)(MenuLayer* self);

    inline GameLevelManager*(__stdcall* GameLevelManagersharedState)();

    inline GameManager* (__stdcall* GameManagersharedState)();
    inline bool(__thiscall* GameManagergetGameVariable)(const char* key);

    inline AchievementNotifier* (__fastcall* AchievementNotifiersharedState)();
    inline void(__fastcall* AchievementNotifiershowNextAchievement)();

    inline AchievementManager* (__fastcall* AchievementManagersharedState)();

    inline AchievementBar* (__fastcall* AchievementBarcreate)(const char* title, const char* text, const char* icon);
    inline CCAction* (__thiscall* AchievementBarshow)();

    inline signed int(__fastcall* EditLevelLayerinit)();
}