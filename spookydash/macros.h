#pragma once

#define export __declspec(dllexport)
#define ALL_HOOKS MH_ALL_HOOKS
#define hook(name) static PVOID name
#define hookdef(classname, name, address) PVOID classname::name = PVOID(base + address)

size_t base = reinterpret_cast<size_t>(GetModuleHandle(0));