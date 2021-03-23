#pragma once

#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

class GameObject : public CCSprite { // actually is CCSpritePlus but i don't have that
	static GameObject* __fastcall create(std::string unknown) {
		return reinterpret_cast<GameObject*(__fastcall*)(std::string unknown)>(base + 0xCF8F0)(unknown);
	}; hook(_create);

	void setOpacity(GLubyte opacity) {
		return reinterpret_cast<void(__thiscall*)(GLubyte opacity)>(base + 0xE53C0)(opacity);
	}; hook(_setOpacity);

	void setPosition(CCPoint pos) {
		return reinterpret_cast<void(__thiscall*)(CCPoint pos)>(base + 0xE4DE0)(pos);
	}; hook(_setPosition);

	void setRotation(float rotation) {
		return reinterpret_cast<void(__thiscall*)(float rotation)>(base + 0xE4ED0)(rotation);
	}; hook(_setRotation);

	void setScale(float scale) {
		return reinterpret_cast<void(__thiscall*)(float scale)>(base + 0xE5170)(scale);
	}; hook(_setScale);

	void setScaleX(float scale) {
		return reinterpret_cast<void(__thiscall*)(float scale)>(base + 0xE5050)(scale);
	}; hook(_setScaleX);

	void setScaleY(float scale) {
		return reinterpret_cast<void(__thiscall*)(float scale)>(base + 0xE50E0)(scale);
	}; hook(_setScaleY);

	void setVisible(bool visible) {
		return reinterpret_cast<void(__thiscall*)(bool scale)>(base + 0xE57C0)(visible);
	}; hook(_setVisible);
};

hookdef(GameObject, _create, 0xCF8F0);
hookdef(GameObject, _setOpacity, 0xE53C0);
hookdef(GameObject, _setPosition, 0xE53C0);
hookdef(GameObject, _setRotation, 0xE4ED0);
hookdef(GameObject, _setScale, 0xE5170);
hookdef(GameObject, _setScaleX, 0xE5050);
hookdef(GameObject, _setScaleY, 0xE50E0);
hookdef(GameObject, _setVisible, 0xE57C0);