/*---------------------------------------------------------*\
| RGBController_AorusATC800.h                               |
|                                                           |
|   RGBController for Aorus ATC800 cooler                   |
|                                                           |
|   Felipe Cavalcanti                           13 Aug 2020 |
|                                                           |
|   This file is part of the OpenRGB project                |
|   SPDX-License-Identifier: GPL-2.0-only                   |
\*---------------------------------------------------------*/

#pragma once

#include "RGBController.h"
#include "ATC800Controller.h"

class RGBController_AorusATC800 : public RGBController
{
public:
    RGBController_AorusATC800(ATC800Controller* controller_ptr);
    ~RGBController_AorusATC800();

    void        SetupZones();

    void        ResizeZone(int zone, int new_size);

    void        DeviceUpdateLEDs();
    void        UpdateZoneLEDs(int zone);
    void        UpdateSingleLED(int led);

    void        DeviceUpdateMode();

private:
    ATC800Controller* controller;
};
