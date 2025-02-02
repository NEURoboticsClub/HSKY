#pragma once
#include "main.h"

// All constants relevant for the 15" robot
// DEAD PORTS: 1, 6, 9, 10, 21, 13, 3

// Motor Ports
static constexpr uint8_t CHASSIS_PORT_L1 = 1;
static constexpr uint8_t CHASSIS_PORT_L2 = 2;
static constexpr uint8_t CHASSIS_PORT_L3 = 3;
static constexpr uint8_t CHASSIS_PORT_L4 = 4;

static constexpr uint8_t CHASSIS_PORT_R1 = 5;
static constexpr uint8_t CHASSIS_PORT_R2 = 6;
static constexpr uint8_t CHASSIS_PORT_R3 = 7;
static constexpr uint8_t CHASSIS_PORT_R4 = 8;

static constexpr uint8_t CATAPULT_PORT = 9;
static constexpr uint8_t INTAKE_PORT = 10;

// Sensor Ports
static constexpr uint8_t IMU_PORT = 11;
static constexpr uint8_t OPTICAL_SENSOR_PORT = 12;
static constexpr uint8_t LEFT_ENCODER_PORT = 13;
static constexpr uint8_t RIGHT_ENCODER_PORT = 14;
static constexpr uint8_t HORIZONTAL_ENCODER_PORT = 15;
static constexpr uint8_t CATAPULT_BUTTON_PORT = 'A';
static constexpr uint8_t ULTRASONIC_PING_PORT = 'B';
static constexpr uint8_t ULTRASONIC_ECHO_PORT = 'C';
static constexpr uint8_t BOTTOM_PROXIMITY_PORT = 'D';
static constexpr uint8_t MIDDLE_PROXIMITY_PORT = 'E';
static constexpr uint8_t TOP_PROXIMITY_PORT = 'F';

// Physical robot constants
static constexpr float_t DRIVE_GEAR_RATIO = 60.0f / 36.0f;
static constexpr float_t WHEEL_DIAMETER = 3.25f;                  // [in]
static constexpr float_t WHEEL_TRACK = 11.8f;                     // [in]
static constexpr float_t ENCODER_WHEEL_DIAMETER = 2.75f;          // [in]
static constexpr float_t CENTER_TO_LEFT_ENCODER = 6.298f / 2.0f;  // [in]
static constexpr float_t CENTER_TO_RIGHT_ENCODER = 6.298f / 2.0f; // [in]
static constexpr float_t CENTER_TO_HORIZONTAL_ENCODER = 4.676f;   // [in]

// Programming constants
static constexpr float_t TURN_FACTOR = 0.90f;                 // Scalar factor for turning in driver control
static constexpr float_t DEGREES_TO_ENGAGE_SLIP_GEAR = 15.0f; // [degrees]
static constexpr uint16_t CATA_PULL_DOWN_DELAY_MS = 500;      // Delay between firing and pulling down catapult arm [ms]
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
static const char *AUTON_LIST[] = {"No Operation", "Auton 1", "Auton 2", ""}; // up to 10 autons, last one must be empty string
