#pragma once

#ifdef WIN32

#include <Windows.h>

#endif

#ifdef BUILD_DLL
#define DUCK_API __declspec(dllexport)
#else
#define DUCK_API __declspec(dllimport)
#endif