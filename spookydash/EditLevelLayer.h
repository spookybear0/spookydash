#pragma once

#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

class EditLevelLayer : public CCLayer { 
	bool init() {
		bool toReturn = reinterpret_cast<bool(__fastcall*)(EditLevelLayer * self)>(base + 0x6F5D0)(this);
		__asm add esp, 0x4
		return toReturn;
	}; hook(_init);
};
// also inherits from FLAlertLayerProtocol, UploadActionDelegate, UploadPopupDelegate, SetIDPopupDelegate

hookdef(EditLevelLayer, _init, 0x6F5D0);