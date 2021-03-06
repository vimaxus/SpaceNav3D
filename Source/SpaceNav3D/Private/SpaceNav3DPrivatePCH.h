// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "IInputInterface.h"
#include "IInputDeviceModule.h"
#include "IInputDevice.h"
#include "SlateBasics.h"
#include "WindowsApplication.h"

#include "AllowWindowsPlatformTypes.h"
#include "si.h"
#include "spwmacro.h"  /* Common macros used by 3DxWare SDK functions. */
extern "C"
{
#include "siapp.h"     /* Required for siapp.lib symbols */
}
#include "virtualkeys.hpp"
#include "HideWindowsPlatformTypes.h"

#include "ISpaceNav3DPlugin.h"

// You should place include statements to your module's private header files here.  You only need to
// add includes for headers that are used in most of your module's source files though.