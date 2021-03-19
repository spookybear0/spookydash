#pragma once

#define export __declspec(dllexport)
#define ALL_HOOKS MH_ALL_HOOKS

size_t base = reinterpret_cast<size_t>(GetModuleHandle(0));