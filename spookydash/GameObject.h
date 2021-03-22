#pragma once

#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

class GameObject : public CCSprite { // actually is CCSpritePlus but i don't have that
	static GameObject* __fastcall create(std::string unknown) {
		return reinterpret_cast<GameObject*(__fastcall*)(std::string unknown)>(base + 0xCF8F0)(unknown);
	};
	static PVOID _create;

	void __fastcall setOpacity(GLubyte opacity) {
		return reinterpret_cast<void(__thiscall*)(GLubyte opacity)>(base + 0xE53C0)(opacity);
	}
	static PVOID _setOpacity;

	void __fastcall setPosition(CCPoint pos) {
		return reinterpret_cast<void(__thiscall*)(CCPoint pos)>(base + 0xE4DE0)(pos);
	}
	static PVOID _setPosition;

	void __fastcall setRotation(float rotation) {
		return reinterpret_cast<void(__thiscall*)(float rotation)>(base + 0xE4ED0)(rotation);
	}
	static PVOID _setRotation;

	void __fastcall setScale(float scale) {
		return reinterpret_cast<void(__thiscall*)(float scale)>(base + 0xE5170)(scale);
	}
	static PVOID _setScale;

	void __fastcall setScaleX(float scale) {
		return reinterpret_cast<void(__thiscall*)(float scale)>(base + 0xE5050)(scale);
	}
	static PVOID _setScaleX;

	void __fastcall setScaleY(float scale) {
		return reinterpret_cast<void(__thiscall*)(float scale)>(base + 0xE50E0)(scale);
	}
	static PVOID _setScaleY;

	void __fastcall setVisible(bool visible) {
		return reinterpret_cast<void(__thiscall*)(bool scale)>(base + 0xE57C0)(visible);
	}
	static PVOID _setVisible;
};

PVOID GameObject::_create = PVOID(base + 0xCF8F0);
PVOID GameObject::_setOpacity = PVOID(base + 0xE53C0);
PVOID GameObject::_setPosition = PVOID(base + 0xE4DE0);
PVOID GameObject::_setRotation = PVOID(base + 0xE4ED0);
PVOID GameObject::_setScale = PVOID(base + 0xE5170);
PVOID GameObject::_setScaleX = PVOID(base + 0xE5050);
PVOID GameObject::_setScaleY = PVOID(base + 0xE50E0);
PVOID GameObject::_setVisible = PVOID(base + 0xE57C0);