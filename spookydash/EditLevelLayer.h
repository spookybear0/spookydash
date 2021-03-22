#pragma once

#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

class EditLevelLayer : public CCLayer { 
	static signed int __fastcall init() {
		return reinterpret_cast<signed int(__fastcall*)()>(base + 0x6F5D0)();
	}
	static PVOID _init;
};
// also inherits from FLAlertLayerProtocol, UploadActionDelegate, UploadPopupDelegate, SetIDPopupDelegate

PVOID EditLevelLayer::_init = PVOID(base + 0x6F5D0);