#pragma once
#pragma GCC system_header
// This file configures and pulls in the units library.
// #undef _U
// #undef _L
// #undef _N
// #undef _S
// #undef _P
// #undef _C
// #undef _X
// #undef _B
#define BUILD_TESTS OFF
#define UNIT_LIB_DISABLE_IOSTREAM
#define UNIT_LIB_DEFAULT_TYPE float

#define DISABLE_PREDEFINED_UNITS
#define ENABLE_PREDEFINED_LENGTH_UNITS
#define ENABLE_PREDEFINED_FREQUENCY_UNITS
#define ENABLE_PREDEFINED_TEMPERATURE_UNITS
#define ENABLE_PREDEFINED_ANGLE_UNITS
#define ENABLE_PREDEFINED_ILLUMINANCE_UNITS
#define ENABLE_PREDEFINED_LUMINOUS_FLUX_UNITS
#define ENABLE_PREDEFINED_VOLTAGE_UNITS
#define ENABLE_PREDEFINED_IMPEDANCE_UNITS
#define ENABLE_PREDEFINED_CURRENT_UNITS
#define ENABLE_PREDEFINED_TIME_UNITS
#define ENABLE_PREDEFINED_CHARGE_UNITS
#define ENABLE_PREDEFINED_DATA_UNITS
#define ENABLE_PREDEFINED_ACCELERATION_UNITS
#define ENABLE_PREDEFINED_ANGULAR_VELOCITY_UNITS

#include <libcore/external/units/units.h>
#include <chrono>

using namespace std::chrono_literals;  // NOLINT
using namespace units::literals;  // NOLINT
