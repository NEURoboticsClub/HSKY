#pragma once
#include "main.h"

// All constants relevant for the 18" robot
// Dead Ports:

// Motor Ports
static constexpr uint8_t CHASSIS_PORT_L1 = 1;
static constexpr uint8_t CHASSIS_PORT_L2 = 2;
static constexpr uint8_t CHASSIS_PORT_L3 = 3;
static constexpr uint8_t CHASSIS_PORT_L4 = 4;

static constexpr uint8_t CHASSIS_PORT_R1 = 5;
static constexpr uint8_t CHASSIS_PORT_R2 = 6;
static constexpr uint8_t CHASSIS_PORT_R3 = 7;
static constexpr uint8_t CHASSIS_PORT_R4 = 8;

static constexpr uint8_t FLYWHEEL_TOP_PORT = 9;
static constexpr uint8_t FLYWHEEL_BOTTOM_PORT = 10;
static constexpr uint8_t INDEXER_PORT = 11;
static constexpr uint8_t INTAKE_PORT = 12;

// Sensor Ports
static constexpr uint8_t IMU_PORT = 13;
static constexpr uint8_t OPTICAL_SENSOR_PORT = 14;
static constexpr uint8_t LEFT_ENCODER_PORT = 15;
static constexpr uint8_t RIGHT_ENCODER_PORT = 16;
static constexpr uint8_t HORIZONTAL_ENCODER_PORT = 17;
static constexpr uint8_t FLYWHEEL_ENCODER_PORT = 18;
static constexpr uint8_t ULTRASONIC_PING_PORT = 'B';
static constexpr uint8_t ULTRASONIC_ECHO_PORT = 'C';

// Physical robot constants
static constexpr float_t DRIVE_GEAR_RATIO = 84.0f / 36.0f;
static constexpr float_t FLYWHEEL_GEAR_RATIO = 60.0f / 12.0f;
static constexpr float_t WHEEL_DIAMETER = 4.125f;                 // [in]
static constexpr float_t WHEEL_TRACK = 12.526f;                   // [in]
static constexpr float_t ENCODER_WHEEL_DIAMETER = 2.75f;          // [in]
static constexpr float_t CENTER_TO_LEFT_ENCODER = 7.261f / 2.0f;  // [in]
static constexpr float_t CENTER_TO_RIGHT_ENCODER = 7.261f / 2.0f; // [in]
static constexpr float_t CENTER_TO_HORIZONTAL_ENCODER = 0.852f;   // [in]

// Programming constants
static constexpr float_t TURN_FACTOR = 1.0f;         // Scalar factor for turning in driver control
static constexpr float_t FW_THRESHOLD_RPM = 75.0f;   // RPM above/below the target RPM to be considered "on target" for Bang-Bang
static constexpr float_t FW_VOLTAGE_CONSTANT = 4.0f; // Slope of Voltage vs Velocity graph
static constexpr float_t FW_PROPORTIONAL_GAIN = 1.125f;
static constexpr float_t FW_TBH_GAIN = 0.00025f;
static constexpr float_t FW_P_GAIN = 0.1f;
static constexpr float_t FW_I_GAIN = 0.0f;
static constexpr float_t FW_D_GAIN = 0.05f;
static constexpr float_t P_GAIN_DRIVE = 0.00185f;
static constexpr float_t I_GAIN_DRIVE = 0.0f;
static constexpr float_t D_GAIN_DRIVE = 0.0001f;
static constexpr float_t P_GAIN_DRIVE_ULTRASONIC = 0.1f;
static constexpr float_t I_GAIN_DRIVE_ULTRASONIC = 0.00008f; // None of these are tuned
static constexpr float_t D_GAIN_DRIVE_ULTRASONIC = 0.05;
static constexpr float_t P_GAIN_TURN = 0.1875f;
static constexpr float_t I_GAIN_TURN = 0.000008f;
static constexpr float_t D_GAIN_TURN = 0.15f;
static constexpr uint16_t AUTON_SELECTOR_HUE = 360;
static const char *AUTON_LIST[] = {"No Operation", "Auton 1", "Auton 2", ""}; // up to 10 autons
