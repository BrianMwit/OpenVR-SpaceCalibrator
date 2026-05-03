#pragma once

#include "Calibration.h"

void LoadProfile(CalibrationContext &ctx);
void LoadProfileForSource(CalibrationContext &ctx, const std::string &referenceTrackingSystem);
void SaveProfile(CalibrationContext &ctx);
