/*---------------------------------------------------------*\
| RGBController_CorsairHydroPlatinum.h                      |
|                                                           |
|   RGBController for Corsair Hydro Platinum coolers        |
|                                                           |
|   Kasper                                      28 Mar 2021 |
|                                                           |
|   This file is part of the OpenRGB project                |
|   SPDX-License-Identifier: GPL-2.0-only                   |
\*---------------------------------------------------------*/

#pragma once

#include "RGBController.h"
#include "CorsairHydroPlatinumController.h"

class RGBController_CorsairHydroPlatinum : public RGBController
{
public:
    RGBController_CorsairHydroPlatinum(CorsairHydroPlatinumController* controller_ptr);

    void        SetupZones();

    void        ResizeZone(int zone, int new_size);

    void        DeviceUpdateLEDs();
    void        UpdateZoneLEDs(int zone);
    void        UpdateSingleLED(int led);

    void        DeviceUpdateMode();

private:
    CorsairHydroPlatinumController* controller;

    void        Init_Controller();
};
