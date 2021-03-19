#pragma once
#include "GJGameLevel.h"
#include "PlayLayer.h"

namespace trampoline {
    inline bool(__thiscall* PlayLayerinit)(PlayLayer* self, GJGameLevel* level);
}