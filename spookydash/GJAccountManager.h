#pragma once
#include <cocos2d.h>
#include "macros.h"

USING_NS_CC;

class GJAccountManager : public CCNode {
public:
	std::string getUserName() { // getter for username as i cannot find a war to do it with member vars
		return *reinterpret_cast<std::string*>(*reinterpret_cast<std::uintptr_t*>(base + 0x3222D8) + 0x108);
	}

	std::string getPassword() { // getter for password as i cannot find a war to do it with member vars
			return *reinterpret_cast<std::string*>(*reinterpret_cast<std::uintptr_t*>(base + 0x3222D8) + 0xF0);
	}
};