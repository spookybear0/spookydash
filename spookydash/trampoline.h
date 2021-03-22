#pragma once
#include "GJGameLevel.h"
#include "PlayLayer.h"
#include "MenuLayer.h"
#include "GameLevelManager.h"
#include "GameManager.h"
#include "AchievementNotifier.h"
#include "AchievementManager.h"
#include "GameSoundManager.h"

namespace trampoline {
    inline bool(__thiscall* PlayLayer__init)(PlayLayer* self, GJGameLevel* level);
    inline void(__thiscall* PlayLayer__onEnterTransitionDidFinish)(PlayLayer* self);
    inline void(__thiscall* PlayLayer__onExit)(PlayLayer* self);
    inline void(__thiscall* PlayLayer__draw)(PlayLayer* self);
    inline PlayLayer* (__fastcall* PlayLayer__create)(GJGameLevel* level);
    inline void(__thiscall* PlayLayer__update)(PlayLayer* self, float dt);
    inline void(__thiscall* PlayLayer__updateReplay)(PlayLayer* self, float dt);
    inline void(__thiscall* PlayLayer__releaseButton)(PlayLayer* self, void* PlayerButton);
    inline void(__thiscall* PlayLayer__pushButton)(PlayLayer* self, void* PlayerButton);
    inline void(__thiscall* PlayLayer__onQuit)(PlayLayer* self);
    inline void(__thiscall* PlayLayer__togglePracticeMode)(PlayLayer* self, bool toggle);
    inline void(__thiscall* PlayLayer__destroyPlayer)(PlayLayer* self, void* player, void* gameobject);
    inline void(__thiscall* PlayLayer__markCheckpoint)(PlayLayer* self);
    inline void(__thiscall* PlayLayer__createCheckpoint)(PlayLayer* self);
    inline void(__thiscall* PlayLayer__removeLastCheckpoint)(PlayLayer* self);
    inline void(__thiscall* PlayLayer__updateAttempts)(PlayLayer* self);
    inline void(__thiscall* PlayLayer__resetLevel)(PlayLayer* self);
    inline void(__thiscall* PlayLayer__flipGravity)(PlayLayer* self, bool unknown, bool unknown2);

    inline bool(__thiscall* MenuLayer__init)(MenuLayer* self);

    inline GameLevelManager*(__stdcall* GameLevelManager__sharedState)();

    inline GameManager* (__stdcall* GameManager__sharedState)();
    inline bool(__thiscall* GameManager__getGameVariable)(const char* key);

    inline AchievementNotifier* (__stdcall* AchievementNotifier__sharedState)();
    inline void(__fastcall* AchievementNotifier__showNextAchievement)();

    inline AchievementManager* (__stdcall* AchievementManager__sharedState)();

    inline AchievementBar* (__fastcall* AchievementBar__create)(const char* title, const char* text, const char* icon);
    inline CCAction* (__thiscall* AchievementBar__show)();

    inline bool(__fastcall* EditLevelLayer__init)(EditLevelLayer* self);

    inline bool(__fastcall* EffectGameObject__customSetup)(EffectGameObject* self);
    inline void(__thiscall* EffectGameObject__triggerObject)(EffectGameObject* self, GJBaseGameLayer* gamelayer);
    inline void(__thiscall* EffectGameObject__getSaveString)(EffectGameObject* self);
    inline void(__thiscall* EffectGameObject__triggerActivated)(EffectGameObject* self, float dt);
    inline void(__thiscall* EffectGameObject__spawnXPosition)(EffectGameObject* self);

    inline GameSoundManager* (__stdcall* GameSoundManager__sharedState)();

    inline bool(__fastcall* MenuOptions__init)(MenuOptions* self);

    inline bool(__fastcall* PauseLayer__init)(PauseLayer* self);

    inline void(__thiscall* PlayerObject__pushButton)(PlayerObject* self, void* PlayerButton);
    inline void(__thiscall* PlayerObject__releaseButton)(PlayerObject* self, void* PlayerButton);
    inline void(__thiscall* PlayerObject__playDeathEffect)(PlayerObject* self);
    inline void(__thiscall* PlayerObject__playerDestroyed)(PlayerObject* self, bool destroyed);
    inline void(__thiscall* PlayerObject__flipGravity)(PlayerObject* self, bool unknown, bool unknown2);
    inline void(__thiscall* PlayerObject__toggleFlyMode)(PlayerObject* self, bool toggle);
    inline void(__thiscall* PlayerObject__toggleBirdMode)(PlayerObject* self, bool toggle);
    inline void(__thiscall* PlayerObject__toggleRollMode)(PlayerObject* self, bool toggle);
    inline void(__thiscall* PlayerObject__toggleDartMode)(PlayerObject* self, bool toggle);
    inline void(__thiscall* PlayerObject__toggleRobotMode)(PlayerObject* self, bool toggle);
    inline void(__thiscall* PlayerObject__toggleSpiderMode)(PlayerObject* self, bool toggle);
    inline void(__thiscall* PlayerObject__updateTimeMod)(PlayerObject* self, float time);
    inline void(__thiscall* PlayerObject__togglePlayerScale)(PlayerObject* self, bool toggle);
    inline void(__thiscall* PlayerObject__setFlipX)(PlayerObject* self, bool flip);
    inline void(__thiscall* PlayerObject__setFlipY)(PlayerObject* self, bool flip);
    inline void(__thiscall* PlayerObject__resetObject)(PlayerObject* self);
    inline CCPoint(__thiscall* PlayerObject__getRealPosition)(PlayerObject* self);
    inline void(__thiscall* PlayerObject__toggleGhostEffect)(PlayerObject* self, GhostType type);
}