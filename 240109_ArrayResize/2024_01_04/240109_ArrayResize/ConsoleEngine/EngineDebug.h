﻿#pragma once
#include <Windows.h>
#include <assert.h>

#define LeckCheck _CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CRTDBG_ALLOC_MEM_DF);

#define MsgBoxAssert(TEXT) MessageBoxA(nullptr, TEXT, "치명적인 에러!", MB_OK); assert(false);