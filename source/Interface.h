#pragma once

// an AppleWin frontend must provide the implementation of these 2 methods
//
// once this is done,
// the core emulator files (i.e. almost all the .cpp directly in Source)
// can compile, link and run properly
// this does not include the main event loop which is left in the arch specific area
// nor the actual rendering of the video buffer to screen

#include "Configuration/PropertySheet.h"
IPropertySheet& GetPropertySheet();

#include "FrameBase.h"
FrameBase& GetFrame();
