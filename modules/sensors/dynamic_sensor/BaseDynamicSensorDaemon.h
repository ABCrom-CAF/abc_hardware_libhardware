/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_SENSORHAL_EXT_BASE_DYNAMIC_SENSOR_DAEMON_H
#define ANDROID_SENSORHAL_EXT_BASE_DYNAMIC_SENSOR_DAEMON_H

#include <utils/RefBase.h>

namespace android {
namespace SensorHalExt {

class DynamicSensorManager;

class BaseDynamicSensorDaemon : public RefBase {
public:
    BaseDynamicSensorDaemon(DynamicSensorManager& manager) : mManager(manager) {}
    virtual ~BaseDynamicSensorDaemon() = default;
protected:
    DynamicSensorManager& mManager;
};

} // namespace SensorHalExt
} // namespace android

#endif // ANDROID_SENSORHAL_EXT_BASE_DYNAMIC_SENSOR_DAEMON_H

