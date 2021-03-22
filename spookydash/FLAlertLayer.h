#pragma once
#include "macros.h"
#include <cocos2d.h>

// this code is taken from gd.h (made by PoweredByPie)

USING_NS_CC;

#define __STR_CAT___(str1, str2) str1##str2
#define __STR_CAT__(str1, str2) __STR_CAT___(str1, str2)
#define PAD(size) char __STR_CAT__(pad, __LINE__)[size] = {};

class FLAlertLayerProtocol;
class ButtonSprite;
class ScrollingLayer;

class FLAlertLayer : public CCLayerColor {
protected:
	cocos2d::CCMenu* m_pButtonMenu;
	int m_nUnknown;
	cocos2d::CCObject* m_pTarget;
	PAD(8);
	cocos2d::CCLayer* m_pLayer;
	int m_nZOrder2;
	bool m_bDontTransition;
	ButtonSprite* m_pButton1;
	ButtonSprite* m_pButton2;
	ScrollingLayer* m_pScrollingLayer;
	PAD(4);
	bool m_bAlternateFormat; //?
	bool m_bSingleButton; //?
public:
	virtual void onEnter() {
		return reinterpret_cast<void(__thiscall*)(FLAlertLayer*)>(base + 0x23750)(this);
	}

	virtual void registerWithTouchDispatcher() {
		return reinterpret_cast<void(__thiscall*)(FLAlertLayer*)>(base + 0x236F0)(this);
	}

	virtual bool ccTouchBegan(CCTouch* pTouch, CCEvent* pEvent) {
		return reinterpret_cast<bool(__thiscall*)(char*, CCTouch*, CCEvent*)>(base + 0x233C0)(reinterpret_cast<char*>(this) + 0xEC, pTouch, pEvent);
	}

	virtual void ccTouchMoved(CCTouch* pTouch, CCEvent* pEvent) {
		return reinterpret_cast<void(__thiscall*)(char*, CCTouch*, CCEvent*)>(base + 0x23510)(reinterpret_cast<char*>(this) + 0xEC, pTouch, pEvent);
	}

	virtual void ccTouchEnded(CCTouch* pTouch, CCEvent* pEvent) {
		return reinterpret_cast<void(__thiscall*)(char*, CCTouch*, CCEvent*)>(base + 0x23450)(reinterpret_cast<char*>(this) + 0xEC, pTouch, pEvent);
	}

	virtual void ccTouchCancelled(CCTouch* pTouch, CCEvent* pEvent) {
		return reinterpret_cast<void(__thiscall*)(char*, CCTouch*, CCEvent*)>(base + 0x234C0)(reinterpret_cast<char*>(this) + 0xEC, pTouch, pEvent);
	}

	virtual void keyDown(enumKeyCodes key) {
		return reinterpret_cast<void(__thiscall*)(FLAlertLayer*, enumKeyCodes)>(base + 0x23250)(this, key);
	}

	virtual void keyBackClicked() {
		return reinterpret_cast<void(__thiscall*)(char*)>(base + 0x232C0)(reinterpret_cast<char*>(this) + 0xF4);
	}

	virtual void show() {
		return reinterpret_cast<void(__thiscall*)(FLAlertLayer*)>(
			base + 0x23560
			)(this);
	}
	FLAlertLayer() {
		reinterpret_cast<void(__thiscall*)(FLAlertLayer*)>(base + 0x224B0)(this);
	}

	void onBtn1(CCObject* btn) {
		return reinterpret_cast<void(__thiscall*)(FLAlertLayer*, CCObject*)>(
			base + 0x23340
			)(this, btn);
	}

	void onBtn2(CCObject* btn) {
		return reinterpret_cast<void(__thiscall*)(FLAlertLayer*, CCObject*)>(
			base + 0x23380
			)(this, btn);
	}

	static FLAlertLayer* create(FLAlertLayerProtocol* target, const char* title,
		const char* btn1, const char* btn2, std::string caption) {
		auto pRet = reinterpret_cast<FLAlertLayer * (__fastcall*)(FLAlertLayerProtocol*, const char*,
			const char*, const char*, std::string)>(
			base + 0x22680
			)(target, title, btn1, btn2, caption);
		__asm add esp, 0x20
		return pRet;
	}
	static FLAlertLayer* create(FLAlertLayerProtocol* target, const char* title,
		const char* btn1, const char* btn2, float width, std::string caption) {
		auto pRet = reinterpret_cast<FLAlertLayer * (__fastcall*)(FLAlertLayerProtocol*, const char*,
			const char*, const char*, float, std::string)>(
				base + 0x22730
				)(target, title, btn1, btn2, width, caption);
		__asm add esp, 0x24
		return pRet;
	}
};