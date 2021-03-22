#pragma once
#include "AchievementBar.h"
#include "AchievementNotifier.h"
#include "FLAlertLayer.h"
#include "GameManager.h"
#include "PlayLayer.h"
#include "LevelEditorLayer.h"
#include "GJAccountManager.h"

namespace helpers {
	void create_console() {
		AllocConsole();
		FILE* fDummy;
		freopen_s(&fDummy, "CONIN$", "r", stdin);
		freopen_s(&fDummy, "CONOUT$", "w", stderr);
		freopen_s(&fDummy, "CONOUT$", "w", stdout);
	}

	// Shows a basic achievement
	AchievementBar* showAchievement(const char* title, const char* text, const char* icon) {
		AchievementNotifier* an = AchievementNotifier::sharedState();
		AchievementBar* ach = an->notifyAchievement(title, text, icon, 1); // 1 is for achievement (not icon)
		an->showNextAchievement();
		return ach;
	}

	// Basic popup with one button that says "Ok"
	FLAlertLayer* showPopup(const char* title, std::string caption) {
		FLAlertLayer* flalert = FLAlertLayer::create(nullptr, title, "Ok", nullptr, caption);
		flalert->show();
		return flalert;
	}

	// Gets the GameManager, its that simple...
	GameManager* getGameManager() {
		return GameManager::sharedState();
	}

	// Gets the PlayLayer, its that simple...
	PlayLayer* getPlayLayer() {
		getGameManager()->getPlayLayer();
	}

	// Gets the EditorLayer, its that simple...
	LevelEditorLayer* getEditorLayer() {
		getGameManager()->getEditorLayer();
	}

	// Gets the current player's username
	std::string getUserName() {
		return GJAccountManager::getUserName();
	}

	// Gets the current player's password (please don't use for malicous purposes)
	std::string getPassword() {
		return GJAccountManager::getPassword();
	}
}