#pragma once

#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

class EditLevelLayer : public CCLayer { 
	bool init() {
		return reinterpret_cast<bool(__fastcall*)(EditLevelLayer * self)>(base + 0x6F5D0)(this);
	}; hook(_init);
};
// also inherits from FLAlertLayerProtocol, UploadActionDelegate, UploadPopupDelegate, SetIDPopupDelegate

hookdef(EditLevelLayer, _init, 0x6F5D0);