# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.ino.cpp"
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin//"
# 1 "<command-line>"
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.ino.cpp"
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * About Marlin
 *
 * This firmware is a mashup between Sprinter and grbl.
 *  - https://github.com/kliment/Sprinter
 *  - https://github.com/simen/grbl/tree
 *
 * It has preliminary support for Matthew Roberts advance algorithm
 *  - http://reprap.org/pipermail/reprap-dev/2011-May/003323.html
 */

/* All the implementation is done in *.cpp files to get better compatibility with avr-gcc without the Arduino IDE */
/* Use this file to help the Arduino IDE find which Arduino libraries are needed and to keep documentation on GCode */

# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Configuration.h
 *
 * Basic settings such as:
 *
 * - Type of electronics
 * - Type of temperature sensor
 * - Printer geometry
 * - Endstop configuration
 * - LCD controller
 * - Extra features
 *
 * Advanced settings can be found in Configuration_adv.h
 *
 */



# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/boards.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
# 42 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/macros.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */




// Macros to make a string from a macro



// Macros for bit masks





// Macros for maths shortcuts



// Macros to contrain values



// Macros to support option testing
# 43 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h" 2

//===========================================================================
//============================= Getting Started =============================
//===========================================================================

/**
 * Here are some standard links for getting your machine calibrated:
 *
 * http://reprap.org/wiki/Calibration
 * http://youtu.be/wAL9d7FgInk
 * http://calculator.josefprusa.cz
 * http://reprap.org/wiki/Triffid_Hunter%27s_Calibration_Guide
 * http://www.thingiverse.com/thing:5573
 * https://sites.google.com/site/repraplogphase/calibration-of-your-reprap
 * http://www.thingiverse.com/thing:298812
 */

//===========================================================================
//============================= DELTA Printer ===============================
//===========================================================================
// For a Delta printer replace the configuration files with the files in the
// example_configurations/delta directory.
//

//===========================================================================
//============================= SCARA Printer ===============================
//===========================================================================
// For a Scara printer replace the configuration files with the files in the
// example_configurations/SCARA directory.
//

// @section info




# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Version.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * This file is the standard Marlin version identifier file, all fields can be
 * overriden by the ones defined on _Version.h by using the Configuration.h
 * directive USE_AUTOMATIC_VERSIONING.
 */

/**
 * Marlin release version identifier
 */


/**
 * Verbose version identifier which should contain a reference to the location
 * from where the binary was downloaded or the source code was compiled.
 */


/**
 * The STRING_DISTRIBUTION_DATE represents when the binary file was built,
 * here we define this default string as the date where the latest release
 * version was tagged.
 */


/**
 * @todo: Missing documentation block
 */


/**
 * Defines a generic printer name to be output to the LCD after booting Marlin.
 */


/**
 * The SOURCE_CODE_URL is the location where users will find the Marlin Source
 * Code which is installed on the device. In most cases —unless the manufacturer
 * has a distinct Github fork— the Source Code URL should just be the main
 * Marlin repository.
 */


/**
 * Default generic printer UUID.
 */


/**
 * The WEBSITE_URL is the location where users can get more information such as
 * documentation about a specific Marlin release.
 */
# 80 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h" 2


// User-specified version info of this build to display in [Pronterface, etc] terminal window during
// startup. Implementation of an idea by Prof Braino to inform user that any changes made to this
// build by the user have been successfully uploaded into firmware.



//#define STRING_SPLASH_LINE2 STRING_DISTRIBUTION_DATE // will be shown during bootup in line 2

// @section machine

// SERIAL_PORT selects which serial port should be used for communication with the host.
// This allows the connection of wireless adapters (for instance) to non-default port pins.
// Serial port 0 is still used by the Arduino bootloader regardless of this setting.
// :[0,1,2,3,4,5,6,7]


// This determines the communication speed of the printer
// :[2400,9600,19200,38400,57600,115200,250000]


// Enable the Bluetooth serial interface on AT90USB devices
//#define BLUETOOTH

// The following define selects which electronics board you have.
// Please choose the name from boards.h that matches your setup




// Optional custom name for your RepStrap or other custom machine
// Displayed in the LCD "Ready" message
//#define CUSTOM_MACHINE_NAME "3D Printer"

// Define this to set a unique identifier for this printer, (Used by some programs to differentiate between machines)
// You can use an online service to generate a random UUID. (eg http://www.uuidgenerator.net/version4)


// This defines the number of extruders
// :[1,2,3,4]


// Offset of the extruders (uncomment if using more than one and relying on firmware to position when changing).
// The offset has to be X=0, Y=0 for the extruder 0 hotend (default extruder).
// For the other hotends it is their distance from the extruder 0 hotend.
//#define EXTRUDER_OFFSET_X {0.0, 20.00} // (in mm) for each extruder, offset of the hotend on the X axis
//#define EXTRUDER_OFFSET_Y {0.0, 5.00}  // (in mm) for each extruder, offset of the hotend on the Y axis

//// The following define selects which power supply you have. Please choose the one that matches your setup
// 1 = ATX
// 2 = X-Box 360 203Watts (the blue wire connected to PS_ON and the red wire to VCC)
// :{1:'ATX',2:'X-Box 360'}



// Define this to have the electronics keep the power supply off on startup. If you don't know what this is leave it.
//#define PS_DEFAULT_OFF

// @section temperature

//===========================================================================
//============================= Thermal Settings ============================
//===========================================================================
//
//--NORMAL IS 4.7kohm PULLUP!-- 1kohm pullup can be used on hotend sensor, using correct resistor and table
//
//// Temperature sensor settings:
// -3 is thermocouple with MAX31855 (only for sensor 0)
// -2 is thermocouple with MAX6675 (only for sensor 0)
// -1 is thermocouple with AD595
// 0 is not used
// 1 is 100k thermistor - best choice for EPCOS 100k (4.7k pullup)
// 2 is 200k thermistor - ATC Semitec 204GT-2 (4.7k pullup)
// 3 is Mendel-parts thermistor (4.7k pullup)
// 4 is 10k thermistor !! do not use it for a hotend. It gives bad resolution at high temp. !!
// 5 is 100K thermistor - ATC Semitec 104GT-2 (Used in ParCan & J-Head) (4.7k pullup)
// 6 is 100k EPCOS - Not as accurate as table 1 (created using a fluke thermocouple) (4.7k pullup)
// 7 is 100k Honeywell thermistor 135-104LAG-J01 (4.7k pullup)
// 71 is 100k Honeywell thermistor 135-104LAF-J01 (4.7k pullup)
// 8 is 100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup)
// 9 is 100k GE Sensing AL03006-58.2K-97-G1 (4.7k pullup)
// 10 is 100k RS thermistor 198-961 (4.7k pullup)
// 11 is 100k beta 3950 1% thermistor (4.7k pullup)
// 12 is 100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup) (calibrated for Makibox hot bed)
// 13 is 100k Hisens 3950  1% up to 300°C for hotend "Simple ONE " & "Hotend "All In ONE"
// 20 is the PT100 circuit found in the Ultimainboard V2.x
// 60 is 100k Maker's Tool Works Kapton Bed Thermistor beta=3950
// 70 is the 100K thermistor found in the bq Hephestos 2
//
//    1k ohm pullup tables - This is not normal, you would have to have changed out your 4.7k for 1k
//                          (but gives greater accuracy and more stable PID)
// 51 is 100k thermistor - EPCOS (1k pullup)
// 52 is 200k thermistor - ATC Semitec 204GT-2 (1k pullup)
// 55 is 100k thermistor - ATC Semitec 104GT-2 (Used in ParCan & J-Head) (1k pullup)
//
// 1047 is Pt1000 with 4k7 pullup
// 1010 is Pt1000 with 1k pullup (non standard)
// 147 is Pt100 with 4k7 pullup
// 110 is Pt100 with 1k pullup (non standard)
// 998 and 999 are Dummy Tables. They will ALWAYS read 25°C or the temperature defined below.
//     Use it for Testing or Development purposes. NEVER for production machine.
//#define DUMMY_THERMISTOR_998_VALUE 25
//#define DUMMY_THERMISTOR_999_VALUE 100
// :{ '0': "Not used", '4': "10k !! do not use for a hotend. Bad resolution at high temp. !!", '1': "100k / 4.7k - EPCOS", '51': "100k / 1k - EPCOS", '6': "100k / 4.7k EPCOS - Not as accurate as Table 1", '5': "100K / 4.7k - ATC Semitec 104GT-2 (Used in ParCan & J-Head)", '7': "100k / 4.7k Honeywell 135-104LAG-J01", '71': "100k / 4.7k Honeywell 135-104LAF-J01", '8': "100k / 4.7k 0603 SMD Vishay NTCS0603E3104FXT", '9': "100k / 4.7k GE Sensing AL03006-58.2K-97-G1", '10': "100k / 4.7k RS 198-961", '11': "100k / 4.7k beta 3950 1%", '12': "100k / 4.7k 0603 SMD Vishay NTCS0603E3104FXT (calibrated for Makibox hot bed)", '13': "100k Hisens 3950  1% up to 300°C for hotend 'Simple ONE ' & hotend 'All In ONE'", '60': "100k Maker's Tool Works Kapton Bed Thermistor beta=3950", '55': "100k / 1k - ATC Semitec 104GT-2 (Used in ParCan & J-Head)", '2': "200k / 4.7k - ATC Semitec 204GT-2", '52': "200k / 1k - ATC Semitec 204GT-2", '-3': "Thermocouple + MAX31855 (only for sensor 0)", '-2': "Thermocouple + MAX6675 (only for sensor 0)", '-1': "Thermocouple + AD595", '3': "Mendel-parts / 4.7k", '1047': "Pt1000 / 4.7k", '1010': "Pt1000 / 1k (non standard)", '20': "PT100 (Ultimainboard V2.x)", '147': "Pt100 / 4.7k", '110': "Pt100 / 1k (non-standard)", '998': "Dummy 1", '999': "Dummy 2" }






// This makes temp sensor 1 a redundant sensor for sensor 0. If the temperatures difference between these sensors is to high the print will be aborted.
//#define TEMP_SENSOR_1_AS_REDUNDANT


// Extruder temperature must be close to target for this long before M109 returns success




// Bed temperature must be close to target for this long before M190 returns success




// The minimal temperature defines the temperature below which the heater will not be enabled It is used
// to check that the wiring to the thermistor is not broken.
// Otherwise this would lead to the heater being powered on all the time.






// When temperature exceeds max temp, your heater will be switched off.
// This feature exists to protect your hotend from overheating accidentally, but *NOT* from thermistor short/failure!
// You should use MINTEMP for thermistor short/failure protection.






// If you want the M105 heater power reported in watts, define the BED_WATTS, and (shared for all extruders) EXTRUDER_WATTS
//#define EXTRUDER_WATTS (12.0*12.0/6.7) // P=U^2/R
//#define BED_WATTS (12.0*12.0/1.1)      // P=U^2/R

//===========================================================================
//============================= PID Settings ================================
//===========================================================================
// PID Tuning Guide here: http://reprap.org/wiki/PID_Tuning

// Comment the following line to disable PID and enable bang-bang.




  //#define PID_AUTOTUNE_MENU // Add PID Autotune to the LCD "Temperature" menu to run M303 and apply the result.
  //#define PID_DEBUG // Sends debug data to the serial port.
  //#define PID_OPENLOOP 1 // Puts PID in open loop. M104/M140 sets the output power from 0 to PID_MAX
  //#define SLOW_PWM_HEATERS // PWM with very low frequency (roughly 0.125Hz=8s) and minimum state time of approximately 1s useful for heaters driven by a relay
  //#define PID_PARAMS_PER_EXTRUDER // Uses separate PID parameters for each extruder (useful for mismatched extruders)
                                    // Set/get with gcode: M301 E[extruder number, 0-2]

                                  // is more than PID_FUNCTIONAL_RANGE then the PID will be shut off and the heater will be set to min/max.



  // If you are using a pre-configured hotend then you can use one of the value sets by uncommenting it
  // LulzBot AO-Hexagon (24V)




  // MakerGear
  //#define  DEFAULT_Kp 7.0
  //#define  DEFAULT_Ki 0.1
  //#define  DEFAULT_Kd 12

  // Mendel Parts V9 on 12V
  //#define  DEFAULT_Kp 63.0
  //#define  DEFAULT_Ki 2.25
  //#define  DEFAULT_Kd 440



//===========================================================================
//============================= PID > Bed Temperature Control ===============
//===========================================================================
// Select PID or bang-bang with PIDTEMPBED. If bang-bang, BED_LIMIT_SWITCHING will enable hysteresis
//
// Uncomment this to enable PID on the bed. It uses the same frequency PWM as the extruder.
// If your PID_dT is the default, and correct for your hardware/configuration, that means 7.689Hz,
// which is fine for driving a square wave into a resistive load and does not significantly impact you FET heating.
// This also works fine on a Fotek SSR-10DA Solid State Relay into a 250W heater.
// If your configuration is significantly different than this and you don't understand the issues involved, you probably
// shouldn't use bed PID until someone else verifies your hardware works.
// If this is enabled, find your own PID constants below.


//#define BED_LIMIT_SWITCHING

// This sets the max power delivered to the bed, and replaces the HEATER_BED_DUTY_CYCLE_DIVIDER option.
// all forms of bed control obey this (PID, bang-bang, bang-bang with hysteresis)
// setting this to anything other than 255 enables a form of PWM to the bed just like HEATER_BED_DUTY_CYCLE_DIVIDER did,
// so you shouldn't use it unless you are OK with PWM on your bed.  (see the comment on enabling PIDTEMPBED)




  //#define PID_BED_DEBUG // Sends debug data to the serial port.



  //120V 250W silicone heater into 4mm borosilicate (MendelMax 1.5+)
  //from FOPDT model - kp=.39 Tp=405 Tdead=66, Tc set to 79.2, aggressive factor of .15 (vs .1, 1, 10)




  //120V 250W silicone heater into 4mm borosilicate (MendelMax 1.5+)
  //from pidautotune
  //#define  DEFAULT_bedKp 97.1
  //#define  DEFAULT_bedKi 1.41
  //#define  DEFAULT_bedKd 1675.16

  // FIND YOUR OWN: "M303 E-1 C8 S90" to run autotune on the bed at 90 degreesC for 8 cycles.


// @section extruder

//this prevents dangerous Extruder moves, i.e. if the temperature is under the limit
//can be software-disabled for whatever purposes by

//if PREVENT_DANGEROUS_EXTRUDE is on, you can still disable (uncomment) very long bits of extrusion separately.





//===========================================================================
//======================== Thermal Runaway Protection =======================
//===========================================================================

/**
 * Thermal Protection protects your printer from damage and fire if a
 * thermistor falls out or temperature sensors fail in any way.
 *
 * The issue: If a thermistor falls out or a temperature sensor fails,
 * Marlin can no longer sense the actual temperature. Since a disconnected
 * thermistor reads as a low temperature, the firmware will keep the heater on.
 *
 * If you get "Thermal Runaway" or "Heating failed" errors the
 * details can be tuned in Configuration_adv.h
 */




//===========================================================================
//============================= Mechanical Settings =========================
//===========================================================================

// @section machine

// Uncomment this option to enable CoreXY kinematics
//#define COREXY

// Uncomment this option to enable CoreXZ kinematics
//#define COREXZ

// Enable this option for Toshiba steppers
//#define CONFIG_STEPPERS_TOSHIBA

//===========================================================================
//============================== Endstop Settings ===========================
//===========================================================================

// @section homing

// Specify here all the endstop connectors that are connected to any endstop or probe.
// Almost all printers will be using one per axis. Probes will use one or more of the
// extra connectors. Leave undefined any used for non-endstop and non-probe purposes.







// coarse Endstop Settings
# 384 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h"
// Mechanical endstop with COM to ground and NC to Signal uses "false" here (most common setup).
const bool X_MIN_ENDSTOP_INVERTING = true; // set to true to invert the logic of the endstop.
const bool Y_MIN_ENDSTOP_INVERTING = true; // set to true to invert the logic of the endstop.
const bool Z_MIN_ENDSTOP_INVERTING = true; // set to true to invert the logic of the endstop.
const bool X_MAX_ENDSTOP_INVERTING = true; // set to true to invert the logic of the endstop.
const bool Y_MAX_ENDSTOP_INVERTING = true; // set to true to invert the logic of the endstop.
const bool Z_MAX_ENDSTOP_INVERTING = true; // set to true to invert the logic of the endstop.
const bool Z_MIN_PROBE_ENDSTOP_INVERTING = true; // set to true to invert the logic of the endstop.

//===========================================================================
//============================= Z Probe Options =============================
//===========================================================================

// Enable Z_MIN_PROBE_ENDSTOP to use _both_ a Z Probe and a Z-min-endstop on the same machine.
// With this option the Z_MIN_PROBE_PIN will only be used for probing, never for homing.
//
// *** PLEASE READ ALL INSTRUCTIONS BELOW FOR SAFETY! ***
//
// To continue using the Z-min-endstop for homing, be sure to disable Z_SAFE_HOMING.
// Example: To park the head outside the bed area when homing with G28.
//
// To use a separate Z probe, your board must define a Z_MIN_PROBE_PIN.
//
// For a servo-based Z probe, you must set up servo support below, including
// NUM_SERVOS, Z_ENDSTOP_SERVO_NR and SERVO_ENDSTOP_ANGLES.
//
// - RAMPS 1.3/1.4 boards may be able to use the 5V, GND, and Aux4->D32 pin.
// - Use 5V for powered (usu. inductive) sensors.
// - Otherwise connect:
//   - normally-closed switches to GND and D32.
//   - normally-open switches to 5V and D32.
//
// Normally-closed switches are advised and are the default.
//
// The Z_MIN_PROBE_PIN sets the Arduino pin to use. (See your board's pins file.)
// Since the RAMPS Aux4->D32 pin maps directly to the Arduino D32 pin, D32 is the
// default pin for all RAMPS-based boards. Some other boards map differently.
// To set or change the pin for your board, edit the appropriate pins_XXXXX.h file.
//
// WARNING:
// Setting the wrong pin may have unexpected and potentially disastrous consequences.
// Use with caution and do your homework.
//
//#define Z_MIN_PROBE_ENDSTOP

// Enable Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN to use the Z_MIN_PIN for your Z_MIN_PROBE.
// The Z_MIN_PIN will then be used for both Z-homing and probing.


// To use a probe you must enable one of the two options above!

// This option disables the use of the Z_MIN_PROBE_PIN
// To enable the Z probe pin but disable its use, uncomment the line below. This only affects a
// Z probe switch if you have a separate Z min endstop also and have activated Z_MIN_PROBE_ENDSTOP above.
// If you're using the Z MIN endstop connector for your Z probe, this has no effect.
//#define DISABLE_Z_MIN_PROBE_ENDSTOP

// For Inverting Stepper Enable Pins (Active Low) use 0, Non Inverting (Active High) use 1
// :{0:'Low',1:'High'}





// Disables axis stepper immediately when it's not being used.
// WARNING: When motors turn off there is a chance of losing position accuracy!



// Warn on display about possibly reduced accuracy
//#define DISABLE_REDUCED_ACCURACY_WARNING

// @section extruder




// @section machine

// Invert the stepper direction. Change (or reverse the motor connector) if an axis goes the wrong way.




// @section extruder

// For direct drive extruder v9 set to true, for geared extruder set to false.





// @section homing
//#define MIN_Z_HEIGHT_FOR_HOMING 4 // (in mm) Minimal z height before homing (G28) for Z clearance above the bed, clamps, ...
                                    // Be sure you have this distance over your Z_MAX_POS in case.

// ENDSTOP SETTINGS:
// Sets direction of endstops when homing; 1=MAX, -1=MIN
// :[-1,1]







// @section machine

// Travel limits after homing (units are in mm)







//===========================================================================
//========================= Filament Runout Sensor ==========================
//===========================================================================
//#define FILAMENT_RUNOUT_SENSOR // Uncomment for defining a filament runout sensor such as a mechanical or opto endstop to check the existence of filament
                                 // In RAMPS uses servo pin 2. Can be changed in pins file. For other boards pin definition should be made.
                                 // It is assumed that when logic high = filament available
                                 //                    when logic  low = filament ran out






//===========================================================================
//============================ Mesh Bed Leveling ============================
//===========================================================================

//#define MESH_BED_LEVELING    // Enable mesh bed leveling.
# 536 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h"
//===========================================================================
//============================ Bed Auto Leveling ============================
//===========================================================================

// @section bedlevel


//#define DEBUG_LEVELING_FEATURE




  // There are 2 different ways to specify probing locations:
  //
  // - "grid" mode
  //   Probe several points in a rectangular grid.
  //   You specify the rectangle and the density of sample points.
  //   This mode is preferred because there are more measurements.
  //
  // - "3-point" mode
  //   Probe 3 arbitrary points on the bed (that aren't collinear)
  //   You specify the XY coordinates of all 3 points.

  // Enable this to sample the bed in a grid (least squares solution).
  // Note: this feature generates 10KB extra code size.
# 572 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h"
    // Set the number of grid points per dimension.
    // You probably don't need more than 3 (squared=9).
# 585 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h"
        // Re-wipe line from REWIPE_FIRST_PT to REWIPE_SECOND_PT
# 605 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h"
  // Z Probe to nozzle (X,Y) offset, relative to (0, 0).
  // X and Y offsets must be integers.
  //
  // In the following example the X and Y offsets are both positive:
  // #define X_PROBE_OFFSET_FROM_EXTRUDER 10
  // #define Y_PROBE_OFFSET_FROM_EXTRUDER 10
  //
  //    +-- BACK ---+
  //    |           |
  //  L |    (+) P  | R <-- probe (20,20)
  //  E |           | I
  //  F | (-) N (+) | G <-- nozzle (10,10)
  //  T |           | H
  //    |    (-)    | T
  //    |           |
  //    O-- FRONT --+
  //  (0,0)
# 633 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h"
  //#define Z_PROBE_END_SCRIPT "G1 Z10 F12000\nG1 X15 Y330\nG1 Z0.5\nG1 Z10" // These commands will be executed in the end of G29 routine.
                                                                             // Useful to retract a deployable Z probe.

  // Probes are sensors/switches that need to be activated before they can be used
  // and deactivated after their use.
  // Allen Key Probes, Servo Probes, Z-Sled Probes, FIX_MOUNTED_PROBE, ... . You have to activate one of these for the AUTO_BED_LEVELING_FEATURE

  // A fix mounted probe, like the normal inductive probe, must be deactivated to go below Z_PROBE_OFFSET_FROM_EXTRUDER
  // when the hardware endstops are active.
  //#define FIX_MOUNTED_PROBE

  // A Servo Probe can be defined in the servo section below.

  // An Allen Key Probe is currently predefined only in the delta example configurations.

  // Enable if you have a Z probe mounted on a sled like those designed by Charles Bell.
  //#define Z_PROBE_SLED
  //#define SLED_DOCKING_OFFSET 5 // The extra distance the X axis must travel to pickup the sled. 0 should be fine but you can push it further if you'd like.

  // A Mechanical Probe is any probe that either doesn't deploy or needs manual deployment
  // For example any setup that uses the nozzle itself as a probe.


  // If you've enabled AUTO_BED_LEVELING_FEATURE and are using the Z Probe for Z Homing,
  // it is highly recommended you also enable Z_SAFE_HOMING below!




// @section homing

// The position of the homing switches
//#define MANUAL_HOME_POSITIONS  // If defined, MANUAL_*_HOME_POS below will be used
//#define BED_CENTER_AT_0_0  // If defined, the center of the bed is at (X=0, Y=0)

// Manual homing switch locations:
// For deltabots this means top and center of the Cartesian print volume.







// Use "Z Safe Homing" to avoid homing with a Z probe outside the bed area.
//
// With this feature enabled:
//
// - Allow Z homing only after X and Y homing AND stepper drivers still enabled.
// - If stepper drivers time out, it will need X and Y homing again before Z homing.
// - Position the Z probe in a defined XY point before Z Homing when homing all axes (G28).
// - Prevent Z homing when the Z probe is outside bed area.
//#define Z_SAFE_HOMING







// @section movement

/**
 * MOVEMENT SETTINGS
 */



// default settings
# 711 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h"
// The speed change that does not require acceleration (i.e. the software might assume it can be done instantaneously)





//=============================================================================
//============================= Additional Features ===========================
//=============================================================================

// @section more

// Custom M code points
# 733 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h"
// @section extras

//
// EEPROM
//
// The microcontroller can store settings in the EEPROM, e.g. max velocity...
// M500 - stores parameters in EEPROM
// M501 - reads parameters from EEPROM (if you need reset them after you changed them temporarily).
// M502 - reverts to the default "factory settings".  You still need to store them in EEPROM afterwards if you want to.
//define this to enable EEPROM support



  // To disable EEPROM Serial responses and decrease program space by ~1700 byte: comment this out:



//
// Host Keepalive
//
// By default Marlin will send a busy status message to the host
// every couple of seconds when it can't accept commands.
//





//
// M100 Free Memory Watcher
//
//#define M100_FREE_MEMORY_WATCHER // uncomment to add the M100 Free Memory Watcher for debug purpose

// @section temperature

// Preheat Constants
# 777 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h"
//=============================================================================
//============================= LCD and SD support ============================
//=============================================================================

// @section lcd

//
// LCD LANGUAGE
//
// Here you may choose the language used by Marlin on the LCD menus, the following
// list of languages are available:
//    en, pl, fr, de, es, ru, bg, it, pt, pt_utf8, pt-br, pt-br_utf8,
//    fi, an, nl, ca, eu, kana, kana_utf8, cn, cz, test
//


/**
 * LCD Character Set
 *
 * Note: This option is NOT applicable to Graphical Displays.
 *
 * All character-based LCD's provide ASCII plus one of these
 * language extensions:
 *
 *  - JAPANESE ... the most common
 *  - WESTERN  ... with more accented characters
 *  - CYRILLIC ... for the Russian language
 *
 * To determine the language extension installed on your controller:
 *
 *  - Compile and upload with LCD_LANGUAGE set to 'test'
 *  - Click the controller to view the LCD menu
 *  - The LCD will display Japanese, Western, or Cyrillic text
 *
 * See https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 * :['JAPANESE','WESTERN','CYRILLIC']
 */


//
// LCD TYPE
//
// You may choose ULTRA_LCD if you have character based LCD with 16x2, 16x4, 20x2,
// 20x4 char/lines or DOGLCD for the full graphics display with 128x64 pixels
// (ST7565R family). (This option will be set automatically for certain displays.)
//
// IMPORTANT NOTE: The U8glib library is required for Full Graphic Display!
//                 https://github.com/olikraus/U8glib_Arduino
//
//#define ULTRA_LCD   // Character based
//#define DOGLCD      // Full graphics display

//
// SD CARD
//
// SD Card support is disabled by default. If your controller has an SD slot,
// you must uncomment the following option or it won't work.
//
//#define SDSUPPORT

//
// SD CARD: SPI SPEED
//
// Uncomment ONE of the following items to use a slower SPI transfer
// speed. This is usually required if you're getting volume init errors.
//
//#define SPI_SPEED SPI_HALF_SPEED
//#define SPI_SPEED SPI_QUARTER_SPEED
//#define SPI_SPEED SPI_EIGHTH_SPEED

//
// SD CARD: ENABLE CRC
//
// Use CRC checks and retries on the SD communication.
//
//#define SD_CHECK_AND_RETRY

//
// ENCODER SETTINGS
//
// This option overrides the default number of encoder pulses needed to
// produce one step. Should be increased for high-resolution encoders.
//
//#define ENCODER_PULSES_PER_STEP 1

//
// Use this option to override the number of step signals required to
// move between next/prev menu items.
//
//#define ENCODER_STEPS_PER_MENU_ITEM 5

//
// This option reverses the encoder direction for navigating LCD menus.
//
//  If CLOCKWISE normally moves DOWN this makes it go UP.
//  If CLOCKWISE normally moves UP this makes it go DOWN.
//
//#define REVERSE_MENU_DIRECTION

//
// SPEAKER/BUZZER
//
// If you have a speaker that can produce tones, enable it here.
// By default Marlin assumes you have a buzzer with a fixed frequency.
//
//#define SPEAKER

//
// The duration and frequency for the UI feedback sound.
// Set these to 0 to disable audio feedback in the LCD menus.
//
// Note: Test audio output with the G-Code:
//  M300 S<frequency Hz> P<duration ms>
//
//#define LCD_FEEDBACK_FREQUENCY_DURATION_MS 100
//#define LCD_FEEDBACK_FREQUENCY_HZ 1000

//
// CONTROLLER TYPE: Standard
//
// Marlin supports a wide variety of controllers.
// Enable one of the following options to specify your controller.
//

//
// ULTIMAKER Controller.
//
//#define ULTIMAKERCONTROLLER

//
// ULTIPANEL as seen on Thingiverse.
//
//#define ULTIPANEL

//
// PanelOne from T3P3 (via RAMPS 1.4 AUX2/AUX3)
// http://reprap.org/wiki/PanelOne
//
//#define PANEL_ONE

//
// MaKr3d Makr-Panel with graphic controller and SD support.
// http://reprap.org/wiki/MaKr3d_MaKrPanel
//
//#define MAKRPANEL

//
// Activate one of these if you have a Panucatt Devices
// Viki 2.0 or mini Viki with Graphic LCD
// http://panucatt.com
//
//#define VIKI2
//#define miniVIKI

//
// Adafruit ST7565 Full Graphic Controller.
// https://github.com/eboston/Adafruit-ST7565-Full-Graphic-Controller/
//
//#define ELB_FULL_GRAPHIC_CONTROLLER

//
// RepRapDiscount Smart Controller.
// http://reprap.org/wiki/RepRapDiscount_Smart_Controller
//
// Note: Usually sold with a white PCB.
//
//#define REPRAP_DISCOUNT_SMART_CONTROLLER

//
// BQ LCD Smart Controller shipped by
// default with the BQ Hephestos 2 and Witbox 2.
//
//#define BQ_LCD_SMART_CONTROLLER

//
// GADGETS3D G3D LCD/SD Controller
// http://reprap.org/wiki/RAMPS_1.3/1.4_GADGETS3D_Shield_with_Panel
//
// Note: Usually sold with a blue PCB.
//
//#define G3D_PANEL

//
// RepRapDiscount FULL GRAPHIC Smart Controller
// http://reprap.org/wiki/RepRapDiscount_Full_Graphic_Smart_Controller
//
//#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

//
// MakerLab Mini Panel with graphic
// controller and SD support - http://reprap.org/wiki/Mini_panel
//
//#define MINIPANEL

//
// RepRapWorld REPRAPWORLD_KEYPAD v1.1
// http://reprapworld.com/?products_details&products_id=202&cPath=1591_1626
//
// REPRAPWORLD_KEYPAD_MOVE_STEP sets how much should the robot move when a key
// is pressed, a value of 10.0 means 10mm per click.
//
//#define REPRAPWORLD_KEYPAD
//#define REPRAPWORLD_KEYPAD_MOVE_STEP 10.0

//
// RigidBot Panel V1.0
// http://www.inventapart.com/
//
//#define RIGIDBOT_PANEL

//
// BQ LCD Smart Controller shipped by
// default with the BQ Hephestos 2 and Witbox 2.
//
//#define BQ_LCD_SMART_CONTROLLER

//
// CONTROLLER TYPE: I2C
//
// Note: These controllers require the installation of Arduino's LiquidCrystal_I2C
// library. For more info: https://github.com/kiyoshigawa/LiquidCrystal_I2C
//

//
// Elefu RA Board Control Panel
// http://www.elefu.com/index.php?route=product/product&product_id=53
//
//#define RA_CONTROL_PANEL

//
// Sainsmart YW Robot (LCM1602) LCD Display
//
//#define LCD_I2C_SAINSMART_YWROBOT

//
// Generic LCM1602 LCD adapter
//
//#define LCM1602

//
// PANELOLU2 LCD with status LEDs,
// separate encoder and click inputs.
//
// Note: This controller requires Arduino's LiquidTWI2 library v1.2.3 or later.
// For more info: https://github.com/lincomatic/LiquidTWI2
//
// Note: The PANELOLU2 encoder click input can either be directly connected to
// a pin (if BTN_ENC defined to != -1) or read through I2C (when BTN_ENC == -1).
//
//#define LCD_I2C_PANELOLU2

//
// Panucatt VIKI LCD with status LEDs,
// integrated click & L/R/U/D buttons, separate encoder inputs.
//
//#define LCD_I2C_VIKI

//
// SSD1306 OLED full graphics generic display
//
//#define U8GLIB_SSD1306

//
// CONTROLLER TYPE: Shift register panels
//
// 2 wire Non-latching LCD SR from https://goo.gl/aJJ4sH
// LCD configuration: http://reprap.org/wiki/SAV_3D_LCD
//
//#define SAV_3DLCD

//=============================================================================
//=============================== Extra Features ==============================
//=============================================================================

// @section extras

// Increase the FAN PWM frequency. Removes the PWM noise but increases heating in the FET/Arduino


// Use software PWM to drive the fan, as for the heaters. This uses a very low frequency
// which is not as annoying as with the hardware PWM. On the other hand, if this frequency
// is too low, you should also increment SOFT_PWM_SCALE.
//#define FAN_SOFT_PWM

// Incrementing this by 1 will double the software PWM frequency,
// affecting heaters, and the fan if FAN_SOFT_PWM is enabled.
// However, control resolution will be halved for each increment;
// at zero value, there are 128 effective control positions.


// Temperature status LEDs that display the hotend and bet temperature.
// If all hotends and bed temperature and temperature setpoint are < 54C then the BLUE led is on.
// Otherwise the RED led is on. There is 1C hysteresis.
//#define TEMP_STAT_LEDS

// M240  Triggers a camera by emulating a Canon RC-1 Remote
// Data from: http://www.doc-diy.net/photo/rc-1_hacked/
//#define PHOTOGRAPH_PIN     23

// SkeinForge sends the wrong arc g-codes when using Arc Point as fillet procedure
//#define SF_ARC_FIX

// Support for the BariCUDA Paste Extruder.
//#define BARICUDA

//define BlinkM/CyzRgb Support
//#define BLINKM

/********************************************************************** R/C SERVO support
t
* Sponsored by TrinityLabs, Reworked by codexmas
**********************************************************************/

// Number of servos
//
// If you select a configuration below, this will receive a default value and does not need to be set manually
// set it manually if you have more servos than extruders and wish to manually control some
// leaving it undefined or defining as 0 will disable the servo subsystem
// If unsure, leave commented / disabled
//
//#define NUM_SERVOS 3 // Servo index starts with 0 for M280 command

// Servo Endstops
//
// This allows for servo actuated endstops, primary usage is for the Z Axis to eliminate calibration or bed height changes.
// Use M851 to set the Z probe vertical offset from the nozzle. Store that setting with M500.
//
//#define X_ENDSTOP_SERVO_NR 1
//#define Y_ENDSTOP_SERVO_NR 2
//#define Z_ENDSTOP_SERVO_NR 0
//#define SERVO_ENDSTOP_ANGLES {{0,0}, {0,0}, {70,0}} // X,Y,Z Axis Extend and Retract angles

// Servo deactivation
//
// With this option servos are powered only during movement, then turned off to prevent jitter.
//#define DEACTIVATE_SERVOS_AFTER_MOVE
# 1122 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h"
/********************************************************************** * Support for a filament diameter sensor
r
 * Also allows adjustment of diameter at print time (vs  at slicing)
 * Single extruder only at this point (extruder 0)
 *
 * Motherboards
 * 34 - RAMPS1.4 - uses Analog input 5 on the AUX2 connector
 * 81 - Printrboard - Uses Analog input 2 on the Exp1 connector (version B,C,D,E)
 * 301 - Rambo  - uses Analog input 3
 * Note may require analog pins to be defined for different motherboards
 **********************************************************************/
// Uncomment below to enable
//#define FILAMENT_WIDTH_SENSOR
# 1152 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h"
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration_adv.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Configuration_adv.h
 *
 * Advanced settings.
 * Only change these if you know exactly what you're doing.
 * Some of these settings can damage your printer if improperly set!
 *
 * Basic settings can be found in Configuration.h
 *
 */



# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Conditionals.h
 * Defines that depend on configuration but are not editable.
 */



/**
* Miscellaneous
*/




/**
 * This value is used by M109 when tying to calculate a ballpark safe margin
 * to prevent wait-forever situation.
 */
# 75 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  // Generic support for SSD1306 OLED based LCDs.
# 131 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  /**
   * I2C PANELS
   */
# 144 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  // PANELOLU2 LCD with status LEDs, separate encoder and click inputs
# 167 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  // Panucatt VIKI LCD with status LEDs, integrated click & L/R/U/P buttons, separate encoder inputs
# 180 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  // Shift register panels
  // ---------------------
  // 2 wire Non-latching LCD SR from:
  // https://bitbucket.org/fmalpartida/new-liquidcrystal/wiki/schematics#!shiftregister-connection
# 237 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
    /* Custom characters defined in the first 8 characters of the LCD */
# 249 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  /**
   * Default LCD contrast for dogm-like LCD displays
   */
# 37 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration_adv.h" 2

// @section temperature

//===========================================================================
//=============================Thermal Settings  ============================
//===========================================================================
# 51 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration_adv.h"
/**
 * Thermal Protection protects your printer from damage and fire if a
 * thermistor falls out or temperature sensors fail in any way.
 *
 * The issue: If a thermistor falls out or a temperature sensor fails,
 * Marlin can no longer sense the actual temperature. Since a disconnected
 * thermistor reads as a low temperature, the firmware will keep the heater on.
 *
 * The solution: Once the temperature reaches the target, start observing.
 * If the temperature stays too far below the target (hysteresis) for too long (period),
 * the firmware will halt the machine as a safety precaution.
 *
 * If you get false positives for "Thermal Runaway" increase THERMAL_PROTECTION_HYSTERESIS and/or THERMAL_PROTECTION_PERIOD
 */




  /**
   * Whenever an M104 or M109 increases the target temperature the firmware will wait for the
   * WATCH_TEMP_PERIOD to expire, and if the temperature hasn't increased by WATCH_TEMP_INCREASE
   * degrees, the machine is halted, requiring a hard reset. This test restarts with any M104/M109,
   * but only if the current temperature is far enough below the target for a reliable test.
   *
   * If you get false positives for "Heating failed" increase WATCH_TEMP_PERIOD and/or decrease WATCH_TEMP_INCREASE
   * WATCH_TEMP_INCREASE should not be below 2.
   */




/**
 * Thermal Protection parameters for the bed
 * are like the above for the hotends.
 * WATCH_TEMP_BED_PERIOD and WATCH_TEMP_BED_INCREASE are not imlemented now.
 */




  /**
   * Whenever an M140 or M190 increases the target temperature the firmware will wait for the
   * WATCH_BED_TEMP_PERIOD to expire, and if the temperature hasn't increased by WATCH_BED_TEMP_INCREASE
   * degrees, the machine is halted, requiring a hard reset. This test restarts with any M140/M190,
   * but only if the current temperature is far enough below the target for a reliable test.
   *
   * If you get too many "Heating failed" errors, increase WATCH_BED_TEMP_PERIOD and/or decrease
   * WATCH_BED_TEMP_INCREASE. (WATCH_BED_TEMP_INCREASE should not be below 2.)
   */





  // this adds an experimental additional term to the heating power, proportional to the extrusion speed.
  // if Kc is chosen well, the additional required power due to increased melting should be compensated.







/**
 * Automatic Temperature:
 * The hotend target temperature is calculated by all the buffered lines of gcode.
 * The maximum buffered steps/sec of the extruder motor is called "se".
 * Start autotemp mode with M109 S<mintemp> B<maxtemp> F<factor>
 * The target temperature is set to mintemp+factor*se[steps/sec] and is limited by
 * mintemp and maxtemp. Turn this off by executing M109 without F*
 * Also, if the temperature is set to a value below mintemp, it will not be changed by autotemp.
 * On an Ultimaker, some initial testing worked with M109 S215 B260 F1 in the start.gcode
 */
//#define AUTOTEMP




//Show Temperature ADC value
//The M105 command return, besides traditional information, the ADC value read from temperature sensors.
//#define SHOW_TEMP_ADC_VALUES

// @section extruder

//  extruder run-out prevention.
//if the machine is idle, and the temperature over MINTEMP, every couple of SECONDS some filament is extruded
//#define EXTRUDER_RUNOUT_PREVENT






// @section temperature

//These defines help to calibrate the AD595 sensor in case you get wrong temperature measurements.
//The measured temperature is defined as "actualTemp = (measuredTemp * TEMP_SENSOR_AD595_GAIN) + TEMP_SENSOR_AD595_OFFSET"



//This is for controlling a fan to cool down the stepper drivers
//it will turn on when any driver is enabled
//and turn off after the set amount of seconds from last driver being disabled again
//Pin used for the fan to cool controller (-1 to disable)




// When first starting the main fan, run it at full speed for the
// given number of milliseconds.  This gets the fan spinning reliably
// before setting a PWM value. (Does not work with software PWM for fan on Sanguinololu)


// This defines the minimal speed for the main fan, run in PWM mode
// to enable uncomment and set minimal PWM speed for reliable running (1-255)
// if fan speed is [1 - (FAN_MIN_PWM-1)] it is set to FAN_MIN_PWM


// @section extruder

// Extruder cooling fans
// Configure fan pin outputs to automatically turn on/off when the associated
// extruder temperature is above/below EXTRUDER_AUTO_FAN_TEMPERATURE.
// Multiple extruders can be assigned to the same pin in which case
// the fan will turn on when any selected extruder is above the threshold.
# 184 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration_adv.h"
//===========================================================================
//=============================Mechanical Settings===========================
//===========================================================================

// @section homing

//#define ENDSTOPS_ONLY_FOR_HOMING // If defined the endstops will only be used for homing

// @section extras

//#define Z_LATE_ENABLE // Enable Z the last moment. Needed if your Z driver overheats.

// A single Z stepper driver is usually used to drive 2 stepper motors.
// Uncomment this define to utilize a separate stepper driver for each Z axis motor.
// Only a few motherboards support this, like RAMPS, which have dual extruder support (the 2nd, often unused, extruder driver is used
// to control the 2nd Z axis stepper motor). The pins are currently only defined for a RAMPS motherboards.
// On a RAMPS (or other 5 driver) motherboard, using this feature will limit you to using 1 extruder.
//#define Z_DUAL_STEPPER_DRIVERS
# 222 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration_adv.h"
// Same again but for Y Axis.
//#define Y_DUAL_STEPPER_DRIVERS






// Enable this for dual x-carriage printers.
// A dual x-carriage design has the advantage that the inactive extruder can be parked which
// prevents hot-end ooze contaminating the print. It also reduces the weight of each x-carriage
// allowing faster printing speeds.
//#define DUAL_X_CARRIAGE
# 274 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration_adv.h"
// @section homing

//homing hits the endstop, then retracts by this distance, before it tries to slowly bump again:






// When G28 is called, this option will make Y home before X
//#define HOME_Y_BEFORE_X

// @section machine



// @section machine

//By default pololu step drivers require an active high signal. However, some high power drivers require an active low signal as step.





// Default stepper release if idle. Set to 0 to deactivate.
// Steppers will shut down DEFAULT_STEPPER_DEACTIVE_TIME seconds after the last move when DISABLE_INACTIVE_? is true.
// Time can be set by M18 and M84.
# 310 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration_adv.h"
// @section lcd






// @section extras

// minimum time in microseconds that a movement needs to take if the buffer is emptied.


// If defined the movements slow down when the look ahead buffer is only half full


// Frequency limit
// See nophead's blog for more info
// Not working O
//#define XY_FREQUENCY_LIMIT  15

// Minimum planner junction speed. Sets the default minimum speed the planner plans for at the end
// of the buffer and all stops. This should not be much greater than zero and should only be changed
// if unwanted behavior is observed on a user's machine when running at very slow speeds.


// Microstep setting (Only functional when stepper driver microstep pins are connected to MCU.


// Motor Current setting (Only functional when motor driver current ref pins are connected to a digital trimpot on supported boards)
//#define DIGIPOT_MOTOR_CURRENT {175,175,220,135,135} // Values 0-255 (RAMBO 135 = ~0.75A, 185 = ~1A)

// Motor Current controlled via PWM (Overridable on supported boards with PWM-driven motor driver current)


// uncomment to enable an I2C based DIGIPOT like on the Azteeg X3 Pro
//#define DIGIPOT_I2C
// Number of channels available for I2C digipot, For Azteeg X3 Pro we have 8

// actual motor currents in Amps, need as many here as DIGIPOT_I2C_NUM_CHANNELS


//===========================================================================
//=============================Additional Features===========================
//===========================================================================





//#define CHDK 4        //Pin for triggering CHDK to take a picture see how to use it here http://captain-slow.dk/2014/03/09/3d-printing-timelapses/


// @section lcd
# 406 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration_adv.h"
// for dogm lcd displays you can choose some additional fonts:
# 417 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration_adv.h"
// @section more

// The hardware watchdog should reset the microcontroller disabling all outputs, in case the firmware gets stuck and doesn't do temperature regulation.



  // If you have a watchdog reboot in an ArduinoMega2560 then the device will hang forever, as a watchdog reset will leave the watchdog on.
  // The "WATCHDOG_RESET_MANUAL" goes around this by not using the hardware reset.
  //  However, THIS FEATURE IS UNSAFE!, as it will only work if interrupts are disabled. And the code could hang in an interrupt routine with interrupts disabled.
  //#define WATCHDOG_RESET_MANUAL


// @section lcd

// Babystepping enables the user to control the axis in tiny amounts, independently from the normal printing process
// it can e.g. be used to change z-positions in the print startup phase in real-time
// does not respect endstops!
//#define BABYSTEPPING







// @section extruder

// extruder advance constant (s2/mm3)
//
// advance (steps) = STEPS_PER_CUBIC_MM_E * EXTRUDER_ADVANCE_K * cubic mm per second ^ 2
//
// Hooke's law says:    force = k * distance
// Bernoulli's principle says:  v ^ 2 / 2 + g . h + pressure / density = constant
// so: v ^ 2 is proportional to number of steps we advance the extruder
//#define ADVANCE






// @section extras

// Arc interpretation settings:



const unsigned int dropsegments = 5; //everything with less than this number of steps will be ignored as move and joined with the next movement

// @section temperature

// Control heater 0 and heater 1 in parallel.
//#define HEATERS_PARALLEL

//===========================================================================
//================================= Buffers =================================
//===========================================================================

// @section hidden

// The number of linear motions that can be in the plan at any give time.
// THE BLOCK_BUFFER_SIZE NEEDS TO BE A POWER OF 2, i.g. 8,16,32 because shifts and ors are used to do the ring-buffering.






// @section more

//The ASCII buffer for receiving from the serial:



// Bad Serial-connections can miss a received command by sending an 'ok'
// Therefore some clients abort after 30 seconds in a timeout.
// Some other clients start sending commands while receiving a 'wait'.
// This "wait" is only sent when the buffer is empty. 1 second is a good value here.
//#define NO_TIMEOUTS 1000 // Milliseconds

// Some clients will have this feature soon. This could make the NO_TIMEOUTS unnecessary.


// @section fwretract

// Firmware based and LCD controlled retract
// M207 and M208 can be used to define parameters for the retraction.
// The retraction can be called by the slicer using G10 and G11
// until then, intended retractions can be detected by moves that only extrude and the direction.
// the moves are than replaced by the firmware controlled ones.

//#define FWRETRACT  //ONLY PARTIALLY TESTED
# 520 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration_adv.h"
// Add support for experimental filament exchange support M600; requires display
# 535 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration_adv.h"
/****************************************************************************** * enable this section if you have TMC26X motor drivers.
.
 * you need to import the TMC26XStepper library into the Arduino IDE for this
 ******************************************************************************/

// @section tmc

//#define HAVE_TMCDRIVER
# 597 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration_adv.h"
/****************************************************************************** * enable this section if you have L6470  motor drivers.
.
 * you need to import the L6470 library into the Arduino IDE for this
 ******************************************************************************/

// @section l6470

//#define HAVE_L6470DRIVER
# 669 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration_adv.h"
/**
 * TWI/I2C BUS
 *
 * This feature is an EXPERIMENTAL feature so it shall not be used on production
 * machines. Enabling this will allow you to send and receive I2C data from slave
 * devices on the bus.
 *
 * ; Example #1
 * ; This macro send the string "Marlin" to the slave device with address 0x63
 * ; It uses multiple M155 commands with one B<base 10> arg
 * M155 A63  ; Target slave address
 * M155 B77  ; M
 * M155 B97  ; a
 * M155 B114 ; r
 * M155 B108 ; l
 * M155 B105 ; i
 * M155 B110 ; n
 * M155 S1   ; Send the current buffer
 *
 * ; Example #2
 * ; Request 6 bytes from slave device with address 0x63
 * M156 A63 B5
 *
 * ; Example #3
 * ; Example serial output of a M156 request
 * echo:i2c-reply: from:63 bytes:5 data:hello
 */

// @section i2cbus

//#define EXPERIMENTAL_I2CBUS

# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Conditionals.h
 * Defines that depend on configuration but are not editable.
 */



/**
* Miscellaneous
*/




/**
 * This value is used by M109 when tying to calculate a ballpark safe margin
 * to prevent wait-forever situation.
 */
# 270 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/pins.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */




// Preset optional pins
# 127 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/pins.h"
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/pins_MINIRAMBO.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Mini-Rambo pin assignments
 */
# 101 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/pins_MINIRAMBO.h"
//Motor current PWM conversion, PWM value = MotorCurrentSetting * 255 / range
# 128 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/pins.h" 2
# 160 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/pins.h"
// List of pins which to ignore when asked to change by gcode, 0 and 1 are RX and TX, do not mess with those!
# 247 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/pins.h"
//
// Dual Y and Dual Z support
// These options are mutually-exclusive
//




// The Y2 axis, if any, should be the next open extruder port






// The Z2 axis, if any, should be the next open extruder port
# 271 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h" 2





# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdlib.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2007 Joerg Wunsch

   Portions of documentation Copyright (c) 1990, 1991, 1993, 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/
# 47 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdlib.h" 3
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 212 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
typedef unsigned int size_t;
# 238 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 279 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since 
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */
# 306 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* FreeBSD 5 can't be handled well using "traditional" logic above
   since it no longer defines _BSD_RUNE_T_ yet still desires to export
   rune_t in some cases... */
# 358 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* A null pointer constant.  */
# 48 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdlib.h" 2 3






extern "C" {


/** \file */

/** \defgroup avr_stdlib <stdlib.h>: General utilities
    \code #include <stdlib.h> \endcode

    This file declares some basic C macros and functions as
    defined by the ISO standard, plus some AVR-specific extensions.
*/

/*@{*/
/** Result type for function div(). */
typedef struct {
 int quot; /**< The Quotient. */
 int rem; /**< The Remainder. */
} div_t;

/** Result type for function ldiv(). */
typedef struct {
 long quot; /**< The Quotient. */
 long rem; /**< The Remainder. */
} ldiv_t;

/** Comparision function type for qsort(), just for convenience. */
typedef int (*__compar_fn_t)(const void *, const void *);
# 110 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdlib.h" 3
/** The abort() function causes abnormal program termination to occur.
    This realization disables interrupts and jumps to _exit() function
    with argument equal to 1. In the limited AVR environment, execution is
    effectively halted by entering an infinite loop. */
extern void abort(void) __attribute__((__noreturn__));

/** The abs() function computes the absolute value of the integer \c i.
   \note The abs() and labs() functions are builtins of gcc.
*/
extern int abs(int __i) __attribute__((__const__));




/** The labs() function computes the absolute value of the long integer
    \c i.
   \note The abs() and labs() functions are builtins of gcc.
*/
extern long labs(long __i) __attribute__((__const__));




/**
     The bsearch() function searches an array of \c nmemb objects, the
     initial member of which is pointed to by \c base, for a member
     that matches the object pointed to by \c key.  The size of each
     member of the array is specified by \c size.

     The contents of the array should be in ascending sorted order
     according to the comparison function referenced by \c compar.
     The \c compar routine is expected to have two arguments which
     point to the key object and to an array member, in that order,
     and should return an integer less than, equal to, or greater than
     zero if the key object is found, respectively, to be less than,
     to match, or be greater than the array member.

     The bsearch() function returns a pointer to a matching member of
     the array, or a null pointer if no match is found.  If two
     members compare as equal, which member is matched is unspecified.
*/
extern void *bsearch(const void *__key, const void *__base, size_t __nmemb,
       size_t __size, int (*__compar)(const void *, const void *));

/* __divmodhi4 and __divmodsi4 from libgcc.a */
/**
     The div() function computes the value \c num/denom and returns
     the quotient and remainder in a structure named \c div_t that
     contains two int members named \c quot and \c rem.
*/
extern div_t div(int __num, int __denom) __asm__("__divmodhi4") __attribute__((__const__));
/**
     The ldiv() function computes the value \c num/denom and returns
     the quotient and remainder in a structure named \c ldiv_t that
     contains two long integer members named \c quot and \c rem.
*/
extern ldiv_t ldiv(long __num, long __denom) __asm__("__divmodsi4") __attribute__((__const__));

/**
     The qsort() function is a modified partition-exchange sort, or
     quicksort.

     The qsort() function sorts an array of \c nmemb objects, the
     initial member of which is pointed to by \c base.  The size of
     each object is specified by \c size.  The contents of the array
     base are sorted in ascending order according to a comparison
     function pointed to by \c compar, which requires two arguments
     pointing to the objects being compared.

     The comparison function must return an integer less than, equal
     to, or greater than zero if the first argument is considered to
     be respectively less than, equal to, or greater than the second.
*/
extern void qsort(void *__base, size_t __nmemb, size_t __size,
    __compar_fn_t __compar);

/**
    The strtol() function converts the string in \c nptr to a long
    value.  The conversion is done according to the given base, which
    must be between 2 and 36 inclusive, or be the special value 0.

    The string may begin with an arbitrary amount of white space (as
    determined by isspace()) followed by a single optional \c '+' or \c '-'
    sign.  If \c base is zero or 16, the string may then include a
    \c "0x" prefix, and the number will be read in base 16; otherwise,
    a zero base is taken as 10 (decimal) unless the next character is
    \c '0', in which case it is taken as 8 (octal).

    The remainder of the string is converted to a long value in the
    obvious manner, stopping at the first character which is not a
    valid digit in the given base.  (In bases above 10, the letter \c 'A'
    in either upper or lower case represents 10, \c 'B' represents 11,
    and so forth, with \c 'Z' representing 35.)

    If \c endptr is not NULL, strtol() stores the address of the first
    invalid character in \c *endptr.  If there were no digits at all,
    however, strtol() stores the original value of \c nptr in \c
    *endptr.  (Thus, if \c *nptr is not \c '\\0' but \c **endptr is \c '\\0'
    on return, the entire string was valid.)

    The strtol() function returns the result of the conversion, unless
    the value would underflow or overflow.  If no conversion could be
    performed, 0 is returned.  If an overflow or underflow occurs, \c
    errno is set to \ref avr_errno "ERANGE" and the function return value
    is clamped to \c LONG_MIN or \c LONG_MAX, respectively.
*/
extern long strtol(const char *__nptr, char **__endptr, int __base);

/**
    The strtoul() function converts the string in \c nptr to an
    unsigned long value.  The conversion is done according to the
    given base, which must be between 2 and 36 inclusive, or be the
    special value 0.

    The string may begin with an arbitrary amount of white space (as
    determined by isspace()) followed by a single optional \c '+' or \c '-'
    sign.  If \c base is zero or 16, the string may then include a
    \c "0x" prefix, and the number will be read in base 16; otherwise,
    a zero base is taken as 10 (decimal) unless the next character is
    \c '0', in which case it is taken as 8 (octal).

    The remainder of the string is converted to an unsigned long value
    in the obvious manner, stopping at the first character which is
    not a valid digit in the given base.  (In bases above 10, the
    letter \c 'A' in either upper or lower case represents 10, \c 'B'
    represents 11, and so forth, with \c 'Z' representing 35.)

    If \c endptr is not NULL, strtoul() stores the address of the first
    invalid character in \c *endptr.  If there were no digits at all,
    however, strtoul() stores the original value of \c nptr in \c
    *endptr.  (Thus, if \c *nptr is not \c '\\0' but \c **endptr is \c '\\0'
    on return, the entire string was valid.)

    The strtoul() function return either the result of the conversion
    or, if there was a leading minus sign, the negation of the result
    of the conversion, unless the original (non-negated) value would
    overflow; in the latter case, strtoul() returns ULONG_MAX, and \c
    errno is set to \ref avr_errno "ERANGE".  If no conversion could 
    be performed, 0 is returned.
*/
extern unsigned long strtoul(const char *__nptr, char **__endptr, int __base);

/**
    The atol() function converts the initial portion of the string
    pointed to by \p s to long integer representation. In contrast to

        \code strtol(s, (char **)NULL, 10); \endcode

    this function does not detect overflow (\c errno is not changed and
    the result value is not predictable), uses smaller memory (flash and
    stack) and works more quickly.
*/
extern long atol(const char *__s) __attribute__((__pure__));

/**
    The atoi() function converts the initial portion of the string
    pointed to by \p s to integer representation. In contrast to

        \code (int)strtol(s, (char **)NULL, 10); \endcode

    this function does not detect overflow (\c errno is not changed and
    the result value is not predictable), uses smaller memory (flash and
    stack) and works more quickly.
*/
extern int atoi(const char *__s) __attribute__((__pure__));

/**
   The exit() function terminates the application.  Since there is no
   environment to return to, \c status is ignored, and code execution
   will eventually reach an infinite loop, thereby effectively halting
   all code processing.  Before entering the infinite loop, interrupts
   are globally disabled.

   In a C++ context, global destructors will be called before halting
   execution.
*/
extern void exit(int __status) __attribute__((__noreturn__));

/**
   The malloc() function allocates \c size bytes of memory.
   If malloc() fails, a NULL pointer is returned.

   Note that malloc() does \e not initialize the returned memory to
   zero bytes.

   See the chapter about \ref malloc "malloc() usage" for implementation
   details.
*/
extern void *malloc(size_t __size) __attribute__((__malloc__));

/**
   The free() function causes the allocated memory referenced by \c
   ptr to be made available for future allocations.  If \c ptr is
   NULL, no action occurs.
*/
extern void free(void *__ptr);

/**
   \c malloc() \ref malloc_tunables "tunable".
*/
extern size_t __malloc_margin;

/**
   \c malloc() \ref malloc_tunables "tunable".
*/
extern char *__malloc_heap_start;

/**
   \c malloc() \ref malloc_tunables "tunable".
*/
extern char *__malloc_heap_end;

/**
   Allocate \c nele elements of \c size each.  Identical to calling
   \c malloc() using <tt>nele * size</tt> as argument, except the
   allocated memory will be cleared to zero.
*/
extern void *calloc(size_t __nele, size_t __size) __attribute__((__malloc__));

/**
   The realloc() function tries to change the size of the region
   allocated at \c ptr to the new \c size value.  It returns a
   pointer to the new region.  The returned pointer might be the
   same as the old pointer, or a pointer to a completely different
   region.

   The contents of the returned region up to either the old or the new
   size value (whatever is less) will be identical to the contents of
   the old region, even in case a new region had to be allocated.

   It is acceptable to pass \c ptr as NULL, in which case realloc()
   will behave identical to malloc().

   If the new memory cannot be allocated, realloc() returns NULL, and
   the region at \c ptr will not be changed.
*/
extern void *realloc(void *__ptr, size_t __size) __attribute__((__malloc__));

extern double strtod(const char *__nptr, char **__endptr);

extern double atof(const char *__nptr);

/** Highest number that can be generated by rand(). */


/**
     The rand() function computes a sequence of pseudo-random integers in the
     range of 0 to \c RAND_MAX (as defined by the header file <stdlib.h>).

     The srand() function sets its argument \c seed as the seed for a new
     sequence of pseudo-random numbers to be returned by rand().  These
     sequences are repeatable by calling srand() with the same seed value.

     If no seed value is provided, the functions are automatically seeded with
     a value of 1.

     In compliance with the C standard, these functions operate on
     \c int arguments.  Since the underlying algorithm already uses
     32-bit calculations, this causes a loss of precision.  See
     \c random() for an alternate set of functions that retains full
     32-bit precision.
*/
extern int rand(void);
/**
   Pseudo-random number generator seeding; see rand().
*/
extern void srand(unsigned int __seed);

/**
   Variant of rand() that stores the context in the user-supplied
   variable located at \c ctx instead of a static library variable
   so the function becomes re-entrant.
*/
extern int rand_r(unsigned long *__ctx);
/*@}*/

/*@{*/
/** \name Non-standard (i.e. non-ISO C) functions.
 \ingroup avr_stdlib
*/
/**
   \brief Convert an integer to a string.

   The function itoa() converts the integer value from \c val into an
   ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (int) + 1 characters, i.e. one
   character for each bit plus one for the string terminator. Using a larger
   radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.
    
    If radix is 10 and val is negative, a minus sign will be prepended.

   The itoa() function returns the pointer passed as \c s.
*/



extern __inline__ __attribute__((__gnu_inline__))
char *itoa (int __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__itoa (int, char *, int);
 return __itoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__itoa_ncheck (int, char *, unsigned char);
 return __itoa_ncheck (__val, __s, __radix);
    }
}


/**
 \ingroup avr_stdlib
 
   \brief Convert a long integer to a string.

   The function ltoa() converts the long integer value from \c val into an
   ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (long int) + 1 characters, i.e. one
   character for each bit plus one for the string terminator. Using a larger
   radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.

   If radix is 10 and val is negative, a minus sign will be prepended.

   The ltoa() function returns the pointer passed as \c s.
*/



extern __inline__ __attribute__((__gnu_inline__))
char *ltoa (long __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__ltoa (long, char *, int);
 return __ltoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__ltoa_ncheck (long, char *, unsigned char);
 return __ltoa_ncheck (__val, __s, __radix);
    }
}


/**
 \ingroup avr_stdlib

   \brief Convert an unsigned integer to a string.

   The function utoa() converts the unsigned integer value from \c val into an
   ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (unsigned int) + 1 characters, i.e. one
   character for each bit plus one for the string terminator. Using a larger
   radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.

   The utoa() function returns the pointer passed as \c s.
*/



extern __inline__ __attribute__((__gnu_inline__))
char *utoa (unsigned int __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__utoa (unsigned int, char *, int);
 return __utoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__utoa_ncheck (unsigned int, char *, unsigned char);
 return __utoa_ncheck (__val, __s, __radix);
    }
}


/**
 \ingroup avr_stdlib
   \brief Convert an unsigned long integer to a string.

   The function ultoa() converts the unsigned long integer value from
   \c val into an ASCII representation that will be stored under \c s.
   The caller is responsible for providing sufficient storage in \c s.

   \note The minimal size of the buffer \c s depends on the choice of
   radix. For example, if the radix is 2 (binary), you need to supply a buffer
   with a minimal length of 8 * sizeof (unsigned long int) + 1 characters,
   i.e. one character for each bit plus one for the string terminator. Using a
   larger radix will require a smaller minimal buffer size.

   \warning If the buffer is too small, you risk a buffer overflow.

   Conversion is done using the \c radix as base, which may be a
   number between 2 (binary conversion) and up to 36.  If \c radix
   is greater than 10, the next digit after \c '9' will be the letter
   \c 'a'.

   The ultoa() function returns the pointer passed as \c s.
*/



extern __inline__ __attribute__((__gnu_inline__))
char *ultoa (unsigned long __val, char *__s, int __radix)
{
    if (!__builtin_constant_p (__radix)) {
 extern char *__ultoa (unsigned long, char *, int);
 return __ultoa (__val, __s, __radix);
    } else if (__radix < 2 || __radix > 36) {
 *__s = 0;
 return __s;
    } else {
 extern char *__ultoa_ncheck (unsigned long, char *, unsigned char);
 return __ultoa_ncheck (__val, __s, __radix);
    }
}


/**  \ingroup avr_stdlib
Highest number that can be generated by random(). */


/**
 \ingroup avr_stdlib
     The random() function computes a sequence of pseudo-random integers in the
     range of 0 to \c RANDOM_MAX (as defined by the header file <stdlib.h>).

     The srandom() function sets its argument \c seed as the seed for a new
     sequence of pseudo-random numbers to be returned by rand().  These
     sequences are repeatable by calling srandom() with the same seed value.

     If no seed value is provided, the functions are automatically seeded with
     a value of 1.
*/
extern long random(void);
/**
 \ingroup avr_stdlib
   Pseudo-random number generator seeding; see random().
*/
extern void srandom(unsigned long __seed);

/**
 \ingroup avr_stdlib
   Variant of random() that stores the context in the user-supplied
   variable located at \c ctx instead of a static library variable
   so the function becomes re-entrant.
*/
extern long random_r(unsigned long *__ctx);

/*@}*/

/*@{*/
/** \name Conversion functions for double arguments.
 \ingroup avr_stdlib
 Note that these functions are not located in the default library,
 <tt>libc.a</tt>, but in the mathematical library, <tt>libm.a</tt>.
 So when linking the application, the \c -lm option needs to be
 specified.
*/
/** \ingroup avr_stdlib
    Bit value that can be passed in \c flags to dtostre(). */

/** \ingroup avr_stdlib
    Bit value that can be passed in \c flags to dtostre(). */

/** \ingroup avr_stdlib
    Bit value that can be passed in \c flags to dtostre(). */




/**
   \ingroup avr_stdlib
   The dtostre() function converts the double value passed in \c val into
   an ASCII representation that will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   Conversion is done in the format \c "[-]d.ddde�dd" where there is
   one digit before the decimal-point character and the number of
   digits after it is equal to the precision \c prec; if the precision
   is zero, no decimal-point character appears.  If \c flags has the
   DTOSTRE_UPPERCASE bit set, the letter \c 'E' (rather than \c 'e' ) will be
   used to introduce the exponent.  The exponent always contains two
   digits; if the value is zero, the exponent is \c "00".

   If \c flags has the DTOSTRE_ALWAYS_SIGN bit set, a space character
   will be placed into the leading position for positive numbers.

   If \c flags has the DTOSTRE_PLUS_SIGN bit set, a plus sign will be
   used instead of a space character in this case.

   The dtostre() function returns the pointer to the converted string \c s.
*/
extern char *dtostre(double __val, char *__s, unsigned char __prec,
       unsigned char __flags);

/**
   \ingroup avr_stdlib
   The dtostrf() function converts the double value passed in \c val into
   an ASCII representationthat will be stored under \c s.  The caller
   is responsible for providing sufficient storage in \c s.

   Conversion is done in the format \c "[-]d.ddd".  The minimum field
   width of the output string (including the \c '.' and the possible
   sign for negative values) is given in \c width, and \c prec determines
   the number of digits after the decimal sign. \c width is signed value,
   negative for left adjustment.

   The dtostrf() function returns the pointer to the converted string \c s.
*/
extern char *dtostrf(double __val, signed char __width,
                     unsigned char __prec, char *__s);

/**
   \ingroup avr_stdlib
    Successful termination for exit(); evaluates to 0.
*/


/**
   \ingroup avr_stdlib
    Unsuccessful termination for exit(); evaluates to a non-zero value.
*/


/*@}*/






}
# 24 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stdbool.h" 1 3 4
/* Copyright (C) 1998-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.16  Boolean type and values  <stdbool.h>
 */
# 39 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stdbool.h" 3 4
/* Supporting <stdbool.h> in C++ is a GCC extension.  */







/* Signal that all the definitions are present.  */
# 25 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/string.h" 1 3
/* Copyright (c) 2002,2007 Marek Michalkiewicz
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   string.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
 */






# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* A null pointer constant.  */
# 46 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/string.h" 2 3
# 56 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/string.h" 3
extern "C" {


/** \file */
/** \defgroup avr_string <string.h>: Strings
    \code #include <string.h> \endcode

    The string functions perform string operations on NULL terminated
    strings. 

    \note If the strings you are working on resident in program space (flash),
    you will need to use the string functions described in \ref avr_pgmspace. */


/** \ingroup avr_string

    This macro finds the first (least significant) bit set in the
    input value.

    This macro is very similar to the function ffs() except that
    it evaluates its argument at compile-time, so it should only
    be applied to compile-time constant expressions where it will
    reduce to a constant itself.
    Application of this macro to expressions that are not constant
    at compile-time is not recommended, and might result in a huge
    amount of code generated.

    \returns The _FFS() macro returns the position of the first
    (least significant) bit set in the word val, or 0 if no bits are set.
    The least significant bit is position 1.  Only 16 bits of argument
    are evaluted.
*/
# 111 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/string.h" 3
extern int ffs (int __val) __attribute__((__const__));
extern int ffsl (long __val) __attribute__((__const__));
extern int ffsll (long long __val) __attribute__((__const__));
extern void *memccpy(void *, const void *, int, size_t);
extern void *memchr(const void *, int, size_t) __attribute__((__pure__));
extern int memcmp(const void *, const void *, size_t) __attribute__((__pure__));
extern void *memcpy(void *, const void *, size_t);
extern void *memmem(const void *, size_t, const void *, size_t) __attribute__((__pure__));
extern void *memmove(void *, const void *, size_t);
extern void *memrchr(const void *, int, size_t) __attribute__((__pure__));
extern void *memset(void *, int, size_t);
extern char *strcat(char *, const char *);
extern char *strchr(const char *, int) __attribute__((__pure__));
extern char *strchrnul(const char *, int) __attribute__((__pure__));
extern int strcmp(const char *, const char *) __attribute__((__pure__));
extern char *strcpy(char *, const char *);
extern int strcasecmp(const char *, const char *) __attribute__((__pure__));
extern char *strcasestr(const char *, const char *) __attribute__((__pure__));
extern size_t strcspn(const char *__s, const char *__reject) __attribute__((__pure__));
extern char *strdup(const char *s1);
extern size_t strlcat(char *, const char *, size_t);
extern size_t strlcpy(char *, const char *, size_t);
extern size_t strlen(const char *) __attribute__((__pure__));
extern char *strlwr(char *);
extern char *strncat(char *, const char *, size_t);
extern int strncmp(const char *, const char *, size_t) __attribute__((__pure__));
extern char *strncpy(char *, const char *, size_t);
extern int strncasecmp(const char *, const char *, size_t) __attribute__((__pure__));
extern size_t strnlen(const char *, size_t) __attribute__((__pure__));
extern char *strpbrk(const char *__s, const char *__accept) __attribute__((__pure__));
extern char *strrchr(const char *, int) __attribute__((__pure__));
extern char *strrev(char *);
extern char *strsep(char **, const char *);
extern size_t strspn(const char *__s, const char *__accept) __attribute__((__pure__));
extern char *strstr(const char *, const char *) __attribute__((__pure__));
extern char *strtok(char *, const char *);
extern char *strtok_r(char *, const char *, char **);
extern char *strupr(char *);


}
# 26 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/math.h" 1 3
/* Copyright (c) 2002,2007-2009 Michael Stumpf

   Portions of documentation Copyright (c) 1990 - 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   math.h - mathematical functions

   Author : Michael Stumpf
            Michael.Stumpf@t-online.de

   __ATTR_CONST__ added by marekm@linux.org.pl for functions
   that "do not examine any values except their arguments, and have
   no effects except the return value", for better optimization by gcc.
 */




/** \file */
/** \defgroup avr_math <math.h>: Mathematics
    \code #include <math.h> \endcode

    This header file declares basic mathematics constants and
    functions.

    \par Notes:
    - In order to access the functions declared herein, it is usually
      also required to additionally link against the library \c libm.a.
      See also the related \ref faq_libm "FAQ entry".
    - Math functions do not raise exceptions and do not change the
      \c errno variable. Therefore the majority of them are declared
      with const attribute, for better optimization by GCC.	*/


/** \ingroup avr_math	*/
/*@{*/

/** The constant \a e.	*/


/** The logarithm of the \a e to base 2. */


/** The logarithm of the \a e to base 10. */


/** The natural logarithm of the 2.	*/


/** The natural logarithm of the 10.	*/


/** The constant \a pi.	*/


/** The constant \a pi/2.	*/


/** The constant \a pi/4.	*/


/** The constant \a 1/pi.	*/


/** The constant \a 2/pi.	*/


/** The constant \a 2/sqrt(pi).	*/


/** The square root of 2.	*/


/** The constant \a 1/sqrt(2).	*/


/** NAN constant.	*/


/** INFINITY constant.	*/
# 121 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/math.h" 3
extern "C" {


/**
    The cos() function returns the cosine of \a __x, measured in radians.
 */
extern double cos(double __x) __attribute__((__const__));


/**
    The sin() function returns the sine of \a __x, measured in radians.
 */
extern double sin(double __x) __attribute__((__const__));


/**
    The tan() function returns the tangent of \a __x, measured in radians.
 */
extern double tan(double __x) __attribute__((__const__));


/**
    The fabs() function computes the absolute value of a floating-point
    number \a __x.
 */
extern double fabs(double __x) __attribute__((__const__));


/**
    The function fmod() returns the floating-point remainder of <em>__x /
    __y</em>.
 */
extern double fmod(double __x, double __y) __attribute__((__const__));


/**
    The modf() function breaks the argument \a __x into integral and
    fractional parts, each of which has the same sign as the argument. 
    It stores the integral part as a double in the object pointed to by
    \a __iptr.

    The modf() function returns the signed fractional part of \a __x.

    \note This implementation skips writing by zero pointer.  However,
    the GCC 4.3 can replace this function with inline code that does not
    permit to use NULL address for the avoiding of storing.
 */
extern double modf(double __x, double *__iptr);

/** The alias for modf().
 */
extern float modff (float __x, float *__iptr);

/**
    The sqrt() function returns the non-negative square root of \a __x.
 */
extern double sqrt(double __x) __attribute__((__const__));


/**
    The cbrt() function returns the cube root of \a __x.
 */
extern double cbrt(double __x) __attribute__((__const__));


/**
    The hypot() function returns <em>sqrt(__x*__x + __y*__y)</em>. This
    is the length of the hypotenuse of a right triangle with sides of
    length \a __x and \a __y, or the  distance of the point (\a __x, \a
    __y) from the origin. Using this function  instead of the direct
    formula is wise, since the error is much smaller. No underflow with
    small \a __x and \a __y. No overflow if result is in range.
 */
extern double hypot (double __x, double __y) __attribute__((__const__));


/**
    The function square() returns <em>__x * __x</em>.

    \note This function does not belong to the C standard definition.
 */
extern double square(double __x) __attribute__((__const__));


/**
    The floor() function returns the largest integral value less than or
    equal to \a __x, expressed as a floating-point number.
 */
extern double floor(double __x) __attribute__((__const__));


/**
    The ceil() function returns the smallest integral value greater than
    or equal to \a __x, expressed as a floating-point number.
 */
extern double ceil(double __x) __attribute__((__const__));


/**
    The frexp() function breaks a floating-point number into a normalized
    fraction and an integral power of 2.  It stores the integer in the \c
    int object pointed to by \a __pexp.

    If \a __x is a normal float point number, the frexp() function
    returns the value \c v, such that \c v has a magnitude in the
    interval [1/2, 1) or zero, and \a __x equals \c v times 2 raised to
    the power \a __pexp. If \a __x is zero, both parts of the result are
    zero. If \a __x is not a finite number, the frexp() returns \a __x as
    is and stores 0 by \a __pexp.

    \note  This implementation permits a zero pointer as a directive to
    skip a storing the exponent.
 */
extern double frexp(double __x, int *__pexp);


/**
    The ldexp() function multiplies a floating-point number by an integral
    power of 2. It returns the value of \a __x times 2 raised to the power
    \a __exp.
 */
extern double ldexp(double __x, int __exp) __attribute__((__const__));


/**
    The exp() function returns the exponential value of \a __x.
 */
extern double exp(double __x) __attribute__((__const__));


/**
    The cosh() function returns the hyperbolic cosine of \a __x.
 */
extern double cosh(double __x) __attribute__((__const__));


/**
    The sinh() function returns the hyperbolic sine of \a __x.
 */
extern double sinh(double __x) __attribute__((__const__));


/**
    The tanh() function returns the hyperbolic tangent of \a __x.
 */
extern double tanh(double __x) __attribute__((__const__));


/**
    The acos() function computes the principal value of the arc cosine of
    \a __x.  The returned value is in the range [0, pi] radians. A domain
    error occurs for arguments not in the range [-1, +1].
 */
extern double acos(double __x) __attribute__((__const__));


/**
    The asin() function computes the principal value of the arc sine of
    \a __x.  The returned value is in the range [-pi/2, pi/2] radians. A
    domain error occurs for arguments not in the range [-1, +1].
 */
extern double asin(double __x) __attribute__((__const__));


/**
    The atan() function computes the principal value of the arc tangent
    of \a __x.  The returned value is in the range [-pi/2, pi/2] radians.
 */
extern double atan(double __x) __attribute__((__const__));


/**
    The atan2() function computes the principal value of the arc tangent
    of <em>__y / __x</em>, using the signs of both arguments to determine
    the quadrant of the return value.  The returned value is in the range
    [-pi, +pi] radians.
 */
extern double atan2(double __y, double __x) __attribute__((__const__));


/**
    The log() function returns the natural logarithm of argument \a __x.
 */
extern double log(double __x) __attribute__((__const__));


/**
    The log10() function returns the logarithm of argument \a __x to base 10.
 */
extern double log10(double __x) __attribute__((__const__));


/**
    The function pow() returns the value of \a __x to the exponent \a __y.
 */
extern double pow(double __x, double __y) __attribute__((__const__));


/**
    The function isnan() returns 1 if the argument \a __x represents a
    "not-a-number" (NaN) object, otherwise 0.
 */
extern int isnan(double __x) __attribute__((__const__));


/**
    The function isinf() returns 1 if the argument \a __x is positive
    infinity, -1 if \a __x is negative infinity, and 0 otherwise.

    \note The GCC 4.3 can replace this function with inline code that
    returns the 1 value for both infinities (gcc bug #35509).
 */
extern int isinf(double __x) __attribute__((__const__));


/**
    The isfinite() function returns a nonzero value if \a __x is finite:
    not plus or minus infinity, and not NaN.
 */
__attribute__((__const__)) static inline int isfinite (double __x)
{
    unsigned char __exp;
    __asm__ (
 "mov	%0, %C1		\n\t"
 "lsl	%0		\n\t"
 "mov	%0, %D1		\n\t"
 "rol	%0		"
 : "=r" (__exp)
 : "r" (__x) );
    return __exp != 0xff;
}


/**
    The copysign() function returns \a __x but with the sign of \a __y.
    They work even if \a __x or \a __y are NaN or zero.
*/
__attribute__((__const__)) static inline double copysign (double __x, double __y)
{
    __asm__ (
 "bst	%D2, 7	\n\t"
 "bld	%D0, 7	"
 : "=r" (__x)
 : "0" (__x), "r" (__y) );
    return __x;
}


/**
    The signbit() function returns a nonzero value if the value of \a __x
    has its sign bit set.  This is not the same as `\a __x < 0.0',
    because IEEE 754 floating point allows zero to be signed. The
    comparison `-0.0 < 0.0' is false, but `signbit (-0.0)' will return a
    nonzero value.
 */
extern int signbit (double __x) __attribute__((__const__));


/**
    The fdim() function returns <em>max(__x - __y, 0)</em>. If \a __x or
    \a __y or both are NaN, NaN is returned.
 */
extern double fdim (double __x, double __y) __attribute__((__const__));


/**
    The fma() function performs floating-point multiply-add. This is the
    operation <em>(__x * __y) + __z</em>, but the intermediate result is
    not rounded to the destination type.  This can sometimes improve the
    precision of a calculation.
 */
extern double fma (double __x, double __y, double __z) __attribute__((__const__));


/**
    The fmax() function returns the greater of the two values \a __x and
    \a __y. If an argument is NaN, the other argument is returned. If
    both arguments are NaN, NaN is returned.
 */
extern double fmax (double __x, double __y) __attribute__((__const__));


/**
    The fmin() function returns the lesser of the two values \a __x and
    \a __y. If an argument is NaN, the other argument is returned. If
    both arguments are NaN, NaN is returned.
 */
extern double fmin (double __x, double __y) __attribute__((__const__));


/**
    The trunc() function rounds \a __x to the nearest integer not larger
    in absolute value.
 */
extern double trunc (double __x) __attribute__((__const__));


/**
    The round() function rounds \a __x to the nearest integer, but rounds
    halfway cases away from zero (instead of to the nearest even integer).
    Overflow is impossible.

    \return The rounded value. If \a __x is an integral or infinite, \a
    __x itself is returned. If \a __x is \c NaN, then \c NaN is returned.
 */
extern double round (double __x) __attribute__((__const__));


/**
    The lround() function rounds \a __x to the nearest integer, but rounds
    halfway cases away from zero (instead of to the nearest even integer).
    This function is similar to round() function, but it differs in type of
    return value and in that an overflow is possible.

    \return The rounded long integer value. If \a __x is not a finite number
    or an overflow was, this realization returns the \c LONG_MIN value
    (0x80000000).
 */
extern long lround (double __x) __attribute__((__const__));


/**
    The lrint() function rounds \a __x to the nearest integer, rounding the
    halfway cases to the even integer direction. (That is both 1.5 and 2.5
    values are rounded to 2). This function is similar to rint() function,
    but it differs in type of return value and in that an overflow is
    possible.

    \return The rounded long integer value. If \a __x is not a finite
    number or an overflow was, this realization returns the \c LONG_MIN
    value (0x80000000).
 */
extern long lrint (double __x) __attribute__((__const__));



}


/*@}*/
# 27 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 2

# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/





# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stdint.h" 1 3 4
# 9 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stdint.h" 3 4
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdint.h" 1 3 4
/* Copyright (c) 2002,2004,2005 Marek Michalkiewicz
   Copyright (c) 2005, Carlos Lamas
   Copyright (c) 2005,2007 Joerg Wunsch
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
 * ISO/IEC 9899:1999  7.18 Integer types <stdint.h>
 */




/** \file */
/** \defgroup avr_stdint <stdint.h>: Standard Integer Types
    \code #include <stdint.h> \endcode

    Use [u]intN_t if you need exactly N bits.

    Since these typedefs are mandated by the C99 standard, they are preferred
    over rolling your own typedefs.  */

/*
 * __USING_MINT8 is defined to 1 if the -mint8 option is in effect.
 */






/* Integer types */
# 119 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdint.h" 3 4
/* actual implementation goes here */

typedef signed int int8_t __attribute__((__mode__(__QI__)));
typedef unsigned int uint8_t __attribute__((__mode__(__QI__)));
typedef signed int int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int uint16_t __attribute__ ((__mode__ (__HI__)));
typedef signed int int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int uint32_t __attribute__ ((__mode__ (__SI__)));

typedef signed int int64_t __attribute__((__mode__(__DI__)));
typedef unsigned int uint64_t __attribute__((__mode__(__DI__)));




/** \name Integer types capable of holding object pointers
    These allow you to declare variables of the same size as a pointer. */

/*@{*/

/** \ingroup avr_stdint
    Signed pointer compatible type. */

typedef int16_t intptr_t;

/** \ingroup avr_stdint
    Unsigned pointer compatible type. */

typedef uint16_t uintptr_t;

/*@}*/

/** \name Minimum-width integer types
   Integer types having at least the specified width */

/*@{*/

/** \ingroup avr_stdint
    signed int with at least 8 bits. */

typedef int8_t int_least8_t;

/** \ingroup avr_stdint
    unsigned int with at least 8 bits. */

typedef uint8_t uint_least8_t;

/** \ingroup avr_stdint
    signed int with at least 16 bits. */

typedef int16_t int_least16_t;

/** \ingroup avr_stdint
    unsigned int with at least 16 bits. */

typedef uint16_t uint_least16_t;

/** \ingroup avr_stdint
    signed int with at least 32 bits. */

typedef int32_t int_least32_t;

/** \ingroup avr_stdint
    unsigned int with at least 32 bits. */

typedef uint32_t uint_least32_t;


/** \ingroup avr_stdint
    signed int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef int64_t int_least64_t;

/** \ingroup avr_stdint
    unsigned int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef uint64_t uint_least64_t;


/*@}*/


/** \name Fastest minimum-width integer types
   Integer types being usually fastest having at least the specified width */

/*@{*/

/** \ingroup avr_stdint
    fastest signed int with at least 8 bits. */

typedef int8_t int_fast8_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 8 bits. */

typedef uint8_t uint_fast8_t;

/** \ingroup avr_stdint
    fastest signed int with at least 16 bits. */

typedef int16_t int_fast16_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 16 bits. */

typedef uint16_t uint_fast16_t;

/** \ingroup avr_stdint
    fastest signed int with at least 32 bits. */

typedef int32_t int_fast32_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 32 bits. */

typedef uint32_t uint_fast32_t;


/** \ingroup avr_stdint
    fastest signed int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef int64_t int_fast64_t;

/** \ingroup avr_stdint
    fastest unsigned int with at least 64 bits.
    \note This type is not available when the compiler
    option -mint8 is in effect. */

typedef uint64_t uint_fast64_t;


/*@}*/


/** \name Greatest-width integer types
   Types designating integer data capable of representing any value of
   any integer type in the corresponding signed or unsigned category */

/*@{*/






/** \ingroup avr_stdint
    largest signed int available. */

typedef int64_t intmax_t;

/** \ingroup avr_stdint
    largest unsigned int available. */

typedef uint64_t uintmax_t;


/*@}*/

/* Helping macro */







/** \name Limits of specified-width integer types
   C++ implementations should define these macros only when
   __STDC_LIMIT_MACROS is defined before <stdint.h> is included */

/*@{*/

/** \ingroup avr_stdint
    largest positive value an int8_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int8_t can hold. */



/** \ingroup avr_stdint
    largest value an uint8_t can hold. */
# 324 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdint.h" 3 4
/** \ingroup avr_stdint
    largest positive value an int16_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int16_t can hold. */



/** \ingroup avr_stdint
    largest value an uint16_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int32_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int32_t can hold. */



/** \ingroup avr_stdint
    largest value an uint32_t can hold. */





/** \ingroup avr_stdint
    largest positive value an int64_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int64_t can hold. */



/** \ingroup avr_stdint
    largest value an uint64_t can hold. */



/*@}*/

/** \name Limits of minimum-width integer types */
/*@{*/

/** \ingroup avr_stdint
    largest positive value an int_least8_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_least8_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_least8_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_least16_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_least16_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_least16_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_least32_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_least32_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_least32_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_least64_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_least64_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_least64_t can hold. */



/*@}*/

/** \name Limits of fastest minimum-width integer types */

/*@{*/

/** \ingroup avr_stdint
    largest positive value an int_fast8_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_fast8_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_fast8_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_fast16_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_fast16_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_fast16_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_fast32_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_fast32_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_fast32_t can hold. */



/** \ingroup avr_stdint
    largest positive value an int_fast64_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an int_fast64_t can hold. */



/** \ingroup avr_stdint
    largest value an uint_fast64_t can hold. */



/*@}*/

/** \name Limits of integer types capable of holding object pointers */

/*@{*/

/** \ingroup avr_stdint
    largest positive value an intptr_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an intptr_t can hold. */



/** \ingroup avr_stdint
    largest value an uintptr_t can hold. */



/*@}*/

/** \name Limits of greatest-width integer types */

/*@{*/

/** \ingroup avr_stdint
    largest positive value an intmax_t can hold. */



/** \ingroup avr_stdint
    smallest negative value an intmax_t can hold. */



/** \ingroup avr_stdint
    largest value an uintmax_t can hold. */



/*@}*/

/** \name Limits of other integer types
    C++ implementations should define these macros only when
    __STDC_LIMIT_MACROS is defined before <stdint.h> is included */

/*@{*/

/** \ingroup avr_stdint
    largest positive value a ptrdiff_t can hold. */



/** \ingroup avr_stdint
    smallest negative value a ptrdiff_t can hold. */




/* Limits of sig_atomic_t */
/* signal.h is currently not implemented (not avr/signal.h) */

/** \ingroup avr_stdint
    largest positive value a sig_atomic_t can hold. */



/** \ingroup avr_stdint
    smallest negative value a sig_atomic_t can hold. */




/** \ingroup avr_stdint
    largest value a size_t can hold. */




/* Limits of wchar_t */
/* wchar.h is currently not implemented */
/* #define WCHAR_MAX */
/* #define WCHAR_MIN */


/* Limits of wint_t */
/* wchar.h is currently not implemented */
/* #define WINT_MAX */
/* #define WINT_MIN */






/** \name Macros for integer constants
    C++ implementations should define these macros only when
    __STDC_CONSTANT_MACROS is defined before <stdint.h> is included.

    These definitions are valid for integer constants without suffix and
    for macros defined as integer constant without suffix */

/** \ingroup avr_stdint
    define a constant of type int8_t */



/** \ingroup avr_stdint
    define a constant of type uint8_t */
# 626 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdint.h" 3 4
/** \ingroup avr_stdint
    define a constant of type int16_t */



/** \ingroup avr_stdint
    define a constant of type uint16_t */



/** \ingroup avr_stdint
    define a constant of type int32_t */



/** \ingroup avr_stdint
    define a constant of type uint32_t */





/** \ingroup avr_stdint
    define a constant of type int64_t */



/** \ingroup avr_stdint
    define a constant of type uint64_t */



/** \ingroup avr_stdint
    define a constant of type intmax_t */



/** \ingroup avr_stdint
    define a constant of type uintmax_t */



/*@}*/
# 10 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stdint.h" 2 3 4
# 38 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/inttypes.h" 2 3

/** \file */
/** \defgroup avr_inttypes <inttypes.h>: Integer Type conversions
    \code #include <inttypes.h> \endcode

    This header file includes the exact-width integer definitions from
    <tt><stdint.h></tt>, and extends them with additional facilities
    provided by the implementation.

    Currently, the extensions include two additional integer types
    that could hold a "far" pointer (i.e. a code pointer that can
    address more than 64 KB), as well as standard names for all printf
    and scanf formatting options that are supported by the \ref avr_stdio.
    As the library does not support the full range of conversion
    specifiers from ISO 9899:1999, only those conversions that are
    actually implemented will be listed here.

    The idea behind these conversion macros is that, for each of the
    types defined by <stdint.h>, a macro will be supplied that portably
    allows formatting an object of that type in printf() or scanf()
    operations.  Example:

    \code
    #include <inttypes.h>

    uint8_t smallval;
    int32_t longval;
    ...
    printf("The hexadecimal value of smallval is %" PRIx8
           ", the decimal value of longval is %" PRId32 ".\n",
	   smallval, longval);
    \endcode
*/

/** \name Far pointers for memory access >64K */

/*@{*/
/** \ingroup avr_inttypes
    signed integer type that can hold a pointer > 64 KB */
typedef int32_t int_farptr_t;

/** \ingroup avr_inttypes
    unsigned integer type that can hold a pointer > 64 KB */
typedef uint32_t uint_farptr_t;
/*@}*/




/** \name macros for printf and scanf format specifiers

    For C++, these are only included if __STDC_LIMIT_MACROS
    is defined before including <inttypes.h>.
 */

/*@{*/
/** \ingroup avr_inttypes
    decimal printf format for int8_t */

/** \ingroup avr_inttypes
    decimal printf format for int_least8_t */

/** \ingroup avr_inttypes
    decimal printf format for int_fast8_t */


/** \ingroup avr_inttypes
    integer printf format for int8_t */

/** \ingroup avr_inttypes
    integer printf format for int_least8_t */

/** \ingroup avr_inttypes
    integer printf format for int_fast8_t */



/** \ingroup avr_inttypes
    decimal printf format for int16_t */

/** \ingroup avr_inttypes
    decimal printf format for int_least16_t */

/** \ingroup avr_inttypes
    decimal printf format for int_fast16_t */


/** \ingroup avr_inttypes
    integer printf format for int16_t */

/** \ingroup avr_inttypes
    integer printf format for int_least16_t */

/** \ingroup avr_inttypes
    integer printf format for int_fast16_t */



/** \ingroup avr_inttypes
    decimal printf format for int32_t */

/** \ingroup avr_inttypes
    decimal printf format for int_least32_t */

/** \ingroup avr_inttypes
    decimal printf format for int_fast32_t */


/** \ingroup avr_inttypes
    integer printf format for int32_t */

/** \ingroup avr_inttypes
    integer printf format for int_least32_t */

/** \ingroup avr_inttypes
    integer printf format for int_fast32_t */
# 173 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/inttypes.h" 3
/** \ingroup avr_inttypes
    decimal printf format for intptr_t */

/** \ingroup avr_inttypes
    integer printf format for intptr_t */


/** \ingroup avr_inttypes
    octal printf format for uint8_t */

/** \ingroup avr_inttypes
    octal printf format for uint_least8_t */

/** \ingroup avr_inttypes
    octal printf format for uint_fast8_t */


/** \ingroup avr_inttypes
    decimal printf format for uint8_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_least8_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_fast8_t */


/** \ingroup avr_inttypes
    hexadecimal printf format for uint8_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_least8_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_fast8_t */


/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint8_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_least8_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_fast8_t */



/** \ingroup avr_inttypes
    octal printf format for uint16_t */

/** \ingroup avr_inttypes
    octal printf format for uint_least16_t */

/** \ingroup avr_inttypes
    octal printf format for uint_fast16_t */


/** \ingroup avr_inttypes
    decimal printf format for uint16_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_least16_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_fast16_t */


/** \ingroup avr_inttypes
    hexadecimal printf format for uint16_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_least16_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_fast16_t */


/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint16_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_least16_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_fast16_t */



/** \ingroup avr_inttypes
    octal printf format for uint32_t */

/** \ingroup avr_inttypes
    octal printf format for uint_least32_t */

/** \ingroup avr_inttypes
    octal printf format for uint_fast32_t */


/** \ingroup avr_inttypes
    decimal printf format for uint32_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_least32_t */

/** \ingroup avr_inttypes
    decimal printf format for uint_fast32_t */


/** \ingroup avr_inttypes
    hexadecimal printf format for uint32_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_least32_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uint_fast32_t */


/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint32_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_least32_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uint_fast32_t */
# 328 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/inttypes.h" 3
/** \ingroup avr_inttypes
    octal printf format for uintptr_t */

/** \ingroup avr_inttypes
    decimal printf format for uintptr_t */

/** \ingroup avr_inttypes
    hexadecimal printf format for uintptr_t */

/** \ingroup avr_inttypes
    uppercase hexadecimal printf format for uintptr_t */
# 355 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/inttypes.h" 3
/** \ingroup avr_inttypes
    decimal scanf format for int16_t */

/** \ingroup avr_inttypes
    decimal scanf format for int_least16_t */

/** \ingroup avr_inttypes
    decimal scanf format for int_fast16_t */


/** \ingroup avr_inttypes
    generic-integer scanf format for int16_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for int_least16_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for int_fast16_t */



/** \ingroup avr_inttypes
    decimal scanf format for int32_t */

/** \ingroup avr_inttypes
    decimal scanf format for int_least32_t */

/** \ingroup avr_inttypes
    decimal scanf format for int_fast32_t */


/** \ingroup avr_inttypes
    generic-integer scanf format for int32_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for int_least32_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for int_fast32_t */
# 412 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/inttypes.h" 3
/** \ingroup avr_inttypes
    decimal scanf format for intptr_t */

/** \ingroup avr_inttypes
    generic-integer scanf format for intptr_t */
# 435 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/inttypes.h" 3
/** \ingroup avr_inttypes
    octal scanf format for uint16_t */

/** \ingroup avr_inttypes
    octal scanf format for uint_least16_t */

/** \ingroup avr_inttypes
    octal scanf format for uint_fast16_t */


/** \ingroup avr_inttypes
    decimal scanf format for uint16_t */

/** \ingroup avr_inttypes
    decimal scanf format for uint_least16_t */

/** \ingroup avr_inttypes
    decimal scanf format for uint_fast16_t */


/** \ingroup avr_inttypes
    hexadecimal scanf format for uint16_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_least16_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_fast16_t */



/** \ingroup avr_inttypes
    octal scanf format for uint32_t */

/** \ingroup avr_inttypes
    octal scanf format for uint_least32_t */

/** \ingroup avr_inttypes
    octal scanf format for uint_fast32_t */


/** \ingroup avr_inttypes
    decimal scanf format for uint32_t */

/** \ingroup avr_inttypes
    decimal scanf format for uint_least32_t */

/** \ingroup avr_inttypes
    decimal scanf format for uint_fast32_t */


/** \ingroup avr_inttypes
    hexadecimal scanf format for uint32_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_least32_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uint_fast32_t */
# 517 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/inttypes.h" 3
/** \ingroup avr_inttypes
    octal scanf format for uintptr_t */

/** \ingroup avr_inttypes
    decimal scanf format for uintptr_t */

/** \ingroup avr_inttypes
    hexadecimal scanf format for uintptr_t */


/*@}*/
# 87 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 2 3
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* A null pointer constant.  */
# 88 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 2 3
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/




# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/sfr_defs.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz <marekm@amelek.gda.pl>
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.  */

/* avr/sfr_defs.h - macros for accessing AVR special function registers */

/* $Id$ */




/** \defgroup avr_sfr_notes Additional notes from <avr/sfr_defs.h>
    \ingroup avr_sfr

   The \c <avr/sfr_defs.h> file is included by all of the \c <avr/ioXXXX.h>
   files, which use macros defined here to make the special function register
   definitions look like C variables or simple constants, depending on the
   <tt>_SFR_ASM_COMPAT</tt> define.  Some examples from \c <avr/iocanxx.h> to
   show how to define such macros:

\code
#define PORTA   _SFR_IO8(0x02)
#define EEAR    _SFR_IO16(0x21)
#define UDR0    _SFR_MEM8(0xC6)
#define TCNT3   _SFR_MEM16(0x94)
#define CANIDT  _SFR_MEM32(0xF0)
\endcode

   If \c _SFR_ASM_COMPAT is not defined, C programs can use names like
   <tt>PORTA</tt> directly in C expressions (also on the left side of
   assignment operators) and GCC will do the right thing (use short I/O
   instructions if possible).  The \c __SFR_OFFSET definition is not used in
   any way in this case.

   Define \c _SFR_ASM_COMPAT as 1 to make these names work as simple constants
   (addresses of the I/O registers).  This is necessary when included in
   preprocessed assembler (*.S) source files, so it is done automatically if
   \c __ASSEMBLER__ is defined.  By default, all addresses are defined as if
   they were memory addresses (used in \c lds/sts instructions).  To use these
   addresses in \c in/out instructions, you must subtract 0x20 from them.

   For more backwards compatibility, insert the following at the start of your
   old assembler source file:

\code
#define __SFR_OFFSET 0
\endcode

   This automatically subtracts 0x20 from I/O space addresses, but it's a
   hack, so it is recommended to change your source: wrap such addresses in
   macros defined here, as shown below.  After this is done, the
   <tt>__SFR_OFFSET</tt> definition is no longer necessary and can be removed.

   Real example - this code could be used in a boot loader that is portable
   between devices with \c SPMCR at different addresses.

\verbatim
<avr/iom163.h>: #define SPMCR _SFR_IO8(0x37)
<avr/iom128.h>: #define SPMCR _SFR_MEM8(0x68)
\endverbatim

\code
#if _SFR_IO_REG_P(SPMCR)
	out	_SFR_IO_ADDR(SPMCR), r24
#else
	sts	_SFR_MEM_ADDR(SPMCR), r24
#endif
\endcode

   You can use the \c in/out/cbi/sbi/sbic/sbis instructions, without the
   <tt>_SFR_IO_REG_P</tt> test, if you know that the register is in the I/O
   space (as with \c SREG, for example).  If it isn't, the assembler will
   complain (I/O address out of range 0...0x3f), so this should be fairly
   safe.

   If you do not define \c __SFR_OFFSET (so it will be 0x20 by default), all
   special register addresses are defined as memory addresses (so \c SREG is
   0x5f), and (if code size and speed are not important, and you don't like
   the ugly \#if above) you can always use lds/sts to access them.  But, this
   will not work if <tt>__SFR_OFFSET</tt> != 0x20, so use a different macro
   (defined only if <tt>__SFR_OFFSET</tt> == 0x20) for safety:

\code
	sts	_SFR_ADDR(SPMCR), r24
\endcode

   In C programs, all 3 combinations of \c _SFR_ASM_COMPAT and
   <tt>__SFR_OFFSET</tt> are supported - the \c _SFR_ADDR(SPMCR) macro can be
   used to get the address of the \c SPMCR register (0x57 or 0x68 depending on
   device). */
# 125 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/sfr_defs.h" 3
/* These only work in C programs.  */
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 127 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/sfr_defs.h" 2 3
# 194 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/sfr_defs.h" 3
/** \name Bit manipulation */

/*@{*/
/** \def _BV
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Converts a bit number into a byte value.

    \note The bit shift is performed by the compiler which then inserts the
    result into the code. Thus, there is no run-time overhead when using
    _BV(). */



/*@}*/
# 219 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/sfr_defs.h" 3
/** \name IO register bit manipulation */

/*@{*/



/** \def bit_is_set
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Test whether bit \c bit in IO register \c sfr is set. 
    This will return a 0 if the bit is clear, and non-zero
    if the bit is set. */



/** \def bit_is_clear
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Test whether bit \c bit in IO register \c sfr is clear. 
    This will return non-zero if the bit is clear, and a 0
    if the bit is set. */



/** \def loop_until_bit_is_set
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Wait until bit \c bit in IO register \c sfr is set. */



/** \def loop_until_bit_is_clear
    \ingroup avr_sfr

    \code #include <avr/io.h>\endcode

    Wait until bit \c bit in IO register \c sfr is clear. */



/*@}*/
# 100 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/io.h" 2 3
# 174 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/io.h" 3
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iom2560.h" 1 3
/* Copyright (c) 2005 Anatoly Sokolov 

   All rights reserved.



   Redistribution and use in source and binary forms, with or without

   modification, are permitted provided that the following conditions are met:



   * Redistributions of source code must retain the above copyright

     notice, this list of conditions and the following disclaimer.



   * Redistributions in binary form must reproduce the above copyright

     notice, this list of conditions and the following disclaimer in

     the documentation and/or other materials provided with the

     distribution.



   * Neither the name of the copyright holders nor the names of

     contributors may be used to endorse or promote products derived

     from this software without specific prior written permission.



  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"

  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE

  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE

  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE

  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR

  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF

  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS

  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN

  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)

  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE

  POSSIBILITY OF SUCH DAMAGE. */
# 31 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iom2560.h" 3
/* $Id */

/* avr/iom2560.h - definitions for ATmega2560 */




# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 1 3
/* Copyright (c) 2005 Anatoly Sokolov 

   All rights reserved.



   Redistribution and use in source and binary forms, with or without

   modification, are permitted provided that the following conditions are met:



   * Redistributions of source code must retain the above copyright

     notice, this list of conditions and the following disclaimer.



   * Redistributions in binary form must reproduce the above copyright

     notice, this list of conditions and the following disclaimer in

     the documentation and/or other materials provided with the

     distribution.



   * Neither the name of the copyright holders nor the names of

     contributors may be used to endorse or promote products derived

     from this software without specific prior written permission.



  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"

  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE

  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE

  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE

  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR

  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF

  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS

  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN

  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)

  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE

  POSSIBILITY OF SUCH DAMAGE. */
# 31 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* $Id: iomxx0_1.h 2235 2011-03-17 04:13:14Z arcanum $ */

/* avr/iomxx0_1.h - definitions for ATmega640, Atmega1280, ATmega1281,

   ATmega2560 and ATmega2561. */



/* This file should only be included from <avr/io.h>, never directly. */
# 57 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Registers and associated bit numbers */
# 340 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Combine EEARL and EEARH */





/* 6-char sequence denoting where to find the EEPROM registers in memory space.

   Adresses denoted in hex syntax with uppercase letters. Used by the EEPROM

   subroutines.

   First two letters:  EECR address.

   Second two letters: EEDR address.

   Last two letters:   EEAR address.  */
# 381 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0x29] */
# 404 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0x2F] */
# 428 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0x32] */
# 449 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0x36] */
# 461 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0x38..0x3A] */







/* SP [0x3D..0x3E] */
/* SREG [0x3F] */
# 489 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0x62..0x63] */
# 510 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0x67] */
# 625 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0x76..0x77] */

/* Combine ADCL and ADCH */
# 712 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0x83] */

/* Combine TCNT1L and TCNT1H */





/* Combine ICR1L and ICR1H */





/* Combine OCR1AL and OCR1AH */





/* Combine OCR1BL and OCR1BH */





/* Combine OCR1CL and OCR1CH */





/* Reserved [0x8E..0x8F] */
# 770 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0x93] */

/* Combine TCNT3L and TCNT3H */





/* Combine ICR3L and ICR3H */





/* Combine OCR3AL and OCR3AH */





/* Combine OCR3BL and OCR3BH */





/* Combine OCR3CL and OCR3CH */





/* Reserved [0x9E..0x9F] */
# 828 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0xA3] */

/* Combine TCNT4L and TCNT4H */





/* Combine ICR4L and ICR4H */





/* Combine OCR4AL and OCR4AH */





/* Combine OCR4BL and OCR4BH */





/* Combine OCR4CL and OCR4CH */





/* Reserved [0xAE..0xAF] */
# 884 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0xB5] */
# 895 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0xB7] */
# 938 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0xBE..0xBF] */
# 970 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0xC3] */

/* Combine UBRR0L and UBRR0H */







/* Reserved [0xC7] */
# 1012 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0xCB] */

/* Combine UBRR1L and UBRR1H */







/* Reserved [0xCF] */
# 1056 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0xD3] */

/* Combine UBRR2L and UBRR2H */
# 1068 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0xD7..0xFF] */
# 1194 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0x10C..0x11F] */
# 1220 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0x123] */

/* Combine TCNT5L and TCNT5H */





/* Combine ICR5L and ICR5H */





/* Combine OCR5AL and OCR5AH */





/* Combine OCR5BL and OCR5BH */





/* Combine OCR5CL and OCR5CH */





/* Reserved [0x12E..0x12F] */
# 1286 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0x133] */

/* Combine UBRR3L and UBRR3H */
# 1298 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Reserved [0x137..1FF] */

/* Interrupt vectors */
/* Vector 0 is the reset vector */
/* External Interrupt Request 0 */




/* External Interrupt Request 1 */




/* External Interrupt Request 2 */




/* External Interrupt Request 3 */




/* External Interrupt Request 4 */




/* External Interrupt Request 5 */




/* External Interrupt Request 6 */




/* External Interrupt Request 7 */




/* Pin Change Interrupt Request 0 */




/* Pin Change Interrupt Request 1 */





/* Pin Change Interrupt Request 2 */






/* Watchdog Time-out Interrupt */




/* Timer/Counter2 Compare Match A */




/* Timer/Counter2 Compare Match B */




/* Timer/Counter2 Overflow */




/* Timer/Counter1 Capture Event */




/* Timer/Counter1 Compare Match A */




/* Timer/Counter1 Compare Match B */




/* Timer/Counter1 Compare Match C */




/* Timer/Counter1 Overflow */




/* Timer/Counter0 Compare Match A */




/* Timer/Counter0 Compare Match B */




/* Timer/Counter0 Overflow */




/* SPI Serial Transfer Complete */




/* USART0, Rx Complete */




/* USART0 Data register Empty */




/* USART0, Tx Complete */




/* Analog Comparator */




/* ADC Conversion Complete */




/* EEPROM Ready */




/* Timer/Counter3 Capture Event */




/* Timer/Counter3 Compare Match A */




/* Timer/Counter3 Compare Match B */




/* Timer/Counter3 Compare Match C */




/* Timer/Counter3 Overflow */




/* USART1, Rx Complete */




/* USART1 Data register Empty */




/* USART1, Tx Complete */




/* 2-wire Serial Interface */




/* Store Program Memory Read */





/* Timer/Counter4 Capture Event */






/* Timer/Counter4 Compare Match A */




/* Timer/Counter4 Compare Match B */




/* Timer/Counter4 Compare Match C */




/* Timer/Counter4 Overflow */





/* Timer/Counter5 Capture Event */






/* Timer/Counter5 Compare Match A */




/* Timer/Counter5 Compare Match B */




/* Timer/Counter5 Compare Match C */




/* Timer/Counter5 Overflow */
# 1567 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* USART2, Rx Complete */




/* USART2 Data register Empty */




/* USART2, Tx Complete */




/* USART3, Rx Complete */




/* USART3 Data register Empty */




/* USART3, Tx Complete */
# 1610 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3
/* Deprecated items */


       
# 1614 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iomxx0_1.h" 3

       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
# 39 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iom2560.h" 2 3

/* Constants */
# 50 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iom2560.h" 3
/* Fuses */



/* Low Fuse Byte */
# 65 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iom2560.h" 3
/* High Fuse Byte */
# 76 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/iom2560.h" 3
/* Extended Fuse Byte */






/* Lock Bits */





/* Signature */
# 175 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/io.h" 2 3
# 616 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/io.h" 3
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/portpins.h" 1 3
/* Copyright (c) 2003  Theodore A. Roth
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




/* This file should only be included from <avr/io.h>, never directly. */





/* Define Generic PORTn, DDn, and PINn values. */

/* Port Data Register (generic) */
# 54 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/portpins.h" 3
/* Port Data Direction Register (generic) */
# 64 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/portpins.h" 3
/* Port Input Pins (generic) */
# 74 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/portpins.h" 3
/* Define PORTxn an Pxn values for all possible port pins if not defined already by io.h. */

/* PORT A */
# 119 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/portpins.h" 3
/* PORT B */
# 162 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/portpins.h" 3
/* PORT C */
# 205 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/portpins.h" 3
/* PORT D */
# 248 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/portpins.h" 3
/* PORT E */
# 291 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/portpins.h" 3
/* PORT F */
# 334 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/portpins.h" 3
/* PORT G */
# 377 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/portpins.h" 3
/* PORT H */
# 420 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/portpins.h" 3
/* PORT J */
# 463 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/portpins.h" 3
/* PORT K */
# 506 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/portpins.h" 3
/* PORT L */
# 617 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/io.h" 2 3

# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/common.h" 1 3
/* Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */





# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/sfr_defs.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz <marekm@amelek.gda.pl>
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   POSSIBILITY OF SUCH DAMAGE.  */

/* avr/sfr_defs.h - macros for accessing AVR special function registers */

/* $Id$ */
# 38 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/common.h" 2 3

/* 
This purpose of this header is to define registers that have not been 
previously defined in the individual device IO header files, and to define 
other symbols that are common across AVR device families.

This file is designed to be included in <avr/io.h> after the individual
device IO header files, and after <avr/sfr_defs.h>

*/

/*------------ Registers Not Previously Defined ------------*/

/* 
These are registers that are not previously defined in the individual
IO header files, OR they are defined here because they are used in parts of
avr-libc even if a device is not selected but a general architecture has
been selected.
*/


/*
Stack pointer register.

AVR architecture 1 has no RAM, thus no stack pointer. 

All other architectures do have a stack pointer.  Some devices have only
less than 256 bytes of possible RAM locations (128 Bytes of SRAM
and no option for external RAM), thus SPH is officially "reserved"
for them.
*/
# 98 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/common.h" 3
/* Status Register */
# 108 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/common.h" 3
/* SREG bit definitions */
# 206 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/common.h" 3
/*------------ Common Symbols ------------*/

/* 
Generic definitions for registers that are common across multiple AVR devices
and families.
*/

/* Pointer registers definitions */
# 224 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/common.h" 3
/* Status Register */
# 234 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/common.h" 3
/* Stack Pointer (combined) Register */
# 244 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/common.h" 3
/* Stack Pointer High Register */
# 255 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/common.h" 3
/* Stack Pointer Low Register */
# 265 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/common.h" 3
/* RAMPD Register */
# 275 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/common.h" 3
/* RAMPX Register */
# 285 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/common.h" 3
/* RAMPY Register */
# 295 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/common.h" 3
/* RAMPZ Register */
# 305 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/common.h" 3
/* Extended Indirect Register */
# 315 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/common.h" 3
/*------------ Workaround to old compilers (4.1.2 and earlier)  ------------*/
# 619 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/io.h" 2 3

# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/version.h" 1 3
/* Copyright (c) 2005, Joerg Wunsch                               -*- c -*-
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \defgroup avr_version <avr/version.h>: avr-libc version macros
    \code #include <avr/version.h> \endcode

    This header file defines macros that contain version numbers and
    strings describing the current version of avr-libc.

    The version number itself basically consists of three pieces that
    are separated by a dot: the major number, the minor number, and
    the revision number.  For development versions (which use an odd
    minor number), the string representation additionally gets the
    date code (YYYYMMDD) appended.

    This file will also be included by \c <avr/io.h>.  That way,
    portable tests can be implemented using \c <avr/io.h> that can be
    used in code that wants to remain backwards-compatible to library
    versions prior to the date when the library version API had been
    added, as referenced but undefined C preprocessor macros
    automatically evaluate to 0.
*/




/** \ingroup avr_version
    String literal representation of the current library version. */


/** \ingroup avr_version
    Numerical representation of the current library version.

    In the numerical representation, the major number is multiplied by
    10000, the minor number by 100, and all three parts are then
    added.  It is intented to provide a monotonically increasing
    numerical value that can easily be used in numerical checks.
 */


/** \ingroup avr_version
    String literal representation of the release date. */


/** \ingroup avr_version
    Numerical representation of the release date. */


/** \ingroup avr_version
    Library major version number. */


/** \ingroup avr_version
    Library minor version number. */


/** \ingroup avr_version
    Library revision number. */
# 621 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/io.h" 2 3





/* Include fuse.h after individual IO header files. */
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/fuse.h" 1 3
/* Copyright (c) 2007, Atmel Corporation
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/* avr/fuse.h - Fuse API */




/* This file must be explicitly included by <avr/io.h>. */





/** \file */
/** \defgroup avr_fuse <avr/fuse.h>: Fuse Support

    \par Introduction

    The Fuse API allows a user to specify the fuse settings for the specific
    AVR device they are compiling for. These fuse settings will be placed
    in a special section in the ELF output file, after linking.

    Programming tools can take advantage of the fuse information embedded in
    the ELF file, by extracting this information and determining if the fuses
    need to be programmed before programming the Flash and EEPROM memories.
    This also allows a single ELF file to contain all the
    information needed to program an AVR. 

    To use the Fuse API, include the <avr/io.h> header file, which in turn
    automatically includes the individual I/O header file and the <avr/fuse.h>
    file. These other two files provides everything necessary to set the AVR
    fuses.
    
    \par Fuse API
    
    Each I/O header file must define the FUSE_MEMORY_SIZE macro which is
    defined to the number of fuse bytes that exist in the AVR device.
    
    A new type, __fuse_t, is defined as a structure. The number of fields in 
    this structure are determined by the number of fuse bytes in the 
    FUSE_MEMORY_SIZE macro.
    
    If FUSE_MEMORY_SIZE == 1, there is only a single field: byte, of type
    unsigned char.
    
    If FUSE_MEMORY_SIZE == 2, there are two fields: low, and high, of type
    unsigned char.
    
    If FUSE_MEMORY_SIZE == 3, there are three fields: low, high, and extended,
    of type unsigned char.
    
    If FUSE_MEMORY_SIZE > 3, there is a single field: byte, which is an array
    of unsigned char with the size of the array being FUSE_MEMORY_SIZE.
    
    A convenience macro, FUSEMEM, is defined as a GCC attribute for a 
    custom-named section of ".fuse".
    
    A convenience macro, FUSES, is defined that declares a variable, __fuse, of
    type __fuse_t with the attribute defined by FUSEMEM. This variable
    allows the end user to easily set the fuse data.

    \note If a device-specific I/O header file has previously defined FUSEMEM,
    then FUSEMEM is not redefined. If a device-specific I/O header file has
    previously defined FUSES, then FUSES is not redefined.

    Each AVR device I/O header file has a set of defined macros which specify the
    actual fuse bits available on that device. The AVR fuses have inverted
    values, logical 1 for an unprogrammed (disabled) bit and logical 0 for a
    programmed (enabled) bit. The defined macros for each individual fuse
    bit represent this in their definition by a bit-wise inversion of a mask.
    For example, the FUSE_EESAVE fuse in the ATmega128 is defined as:
    \code
    #define FUSE_EESAVE      ~_BV(3)
    \endcode
    \note The _BV macro creates a bit mask from a bit number. It is then 
    inverted to represent logical values for a fuse memory byte.
    
    To combine the fuse bits macros together to represent a whole fuse byte,
    use the bitwise AND operator, like so:
    \code
    (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN)
    \endcode
    
    Each device I/O header file also defines macros that provide default values
    for each fuse byte that is available. LFUSE_DEFAULT is defined for a Low
    Fuse byte. HFUSE_DEFAULT is defined for a High Fuse byte. EFUSE_DEFAULT
    is defined for an Extended Fuse byte.
    
    If FUSE_MEMORY_SIZE > 3, then the I/O header file defines macros that
    provide default values for each fuse byte like so:
    FUSE0_DEFAULT
    FUSE1_DEFAULT
    FUSE2_DEFAULT
    FUSE3_DEFAULT
    FUSE4_DEFAULT
    ....
    
    \par API Usage Example
    
    Putting all of this together is easy. Using C99's designated initializers:
    
    \code
    #include <avr/io.h>

    FUSES = 
    {
        .low = LFUSE_DEFAULT,
        .high = (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN),
        .extended = EFUSE_DEFAULT,
    };

    int main(void)
    {
        return 0;
    }
    \endcode
    
    Or, using the variable directly instead of the FUSES macro,
    
    \code
    #include <avr/io.h>

    __fuse_t __fuse __attribute__((section (".fuse"))) = 
    {
        .low = LFUSE_DEFAULT,
        .high = (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN),
        .extended = EFUSE_DEFAULT,
    };

    int main(void)
    {
        return 0;
    }
    \endcode
    
    If you are compiling in C++, you cannot use the designated intializers so
    you must do:

    \code
    #include <avr/io.h>

    FUSES = 
    {
        LFUSE_DEFAULT, // .low
        (FUSE_BOOTSZ0 & FUSE_BOOTSZ1 & FUSE_EESAVE & FUSE_SPIEN & FUSE_JTAGEN), // .high
        EFUSE_DEFAULT, // .extended
    };

    int main(void)
    {
        return 0;
    }
    \endcode
    
    
    However there are a number of caveats that you need to be aware of to
    use this API properly.
    
    Be sure to include <avr/io.h> to get all of the definitions for the API.
    The FUSES macro defines a global variable to store the fuse data. This 
    variable is assigned to its own linker section. Assign the desired fuse 
    values immediately in the variable initialization.
    
    The .fuse section in the ELF file will get its values from the initial 
    variable assignment ONLY. This means that you can NOT assign values to 
    this variable in functions and the new values will not be put into the
    ELF .fuse section.
    
    The global variable is declared in the FUSES macro has two leading 
    underscores, which means that it is reserved for the "implementation",
    meaning the library, so it will not conflict with a user-named variable.
    
    You must initialize ALL fields in the __fuse_t structure. This is because
    the fuse bits in all bytes default to a logical 1, meaning unprogrammed. 
    Normal uninitialized data defaults to all locgial zeros. So it is vital that
    all fuse bytes are initialized, even with default data. If they are not,
    then the fuse bits may not programmed to the desired settings.
    
    Be sure to have the -mmcu=<em>device</em> flag in your compile command line and
    your linker command line to have the correct device selected and to have 
    the correct I/O header file included when you include <avr/io.h>.

    You can print out the contents of the .fuse section in the ELF file by
    using this command line:
    \code
    avr-objdump -s -j .fuse <ELF file>
    \endcode
    The section contents shows the address on the left, then the data going from
    lower address to a higher address, left to right.

*/
# 239 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/fuse.h" 3
typedef struct
{
    unsigned char low;
    unsigned char high;
    unsigned char extended;
} __fuse_t;
# 628 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/io.h" 2 3

/* Include lock.h after individual IO header files. */
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/lock.h" 1 3
/* Copyright (c) 2007, Atmel Corporation
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/* avr/lock.h - Lock Bits API */





/** \file */
/** \defgroup avr_lock <avr/lock.h>: Lockbit Support

    \par Introduction

    The Lockbit API allows a user to specify the lockbit settings for the 
    specific AVR device they are compiling for. These lockbit settings will be 
    placed in a special section in the ELF output file, after linking.

    Programming tools can take advantage of the lockbit information embedded in
    the ELF file, by extracting this information and determining if the lockbits
    need to be programmed after programming the Flash and EEPROM memories.
    This also allows a single ELF file to contain all the
    information needed to program an AVR. 

    To use the Lockbit API, include the <avr/io.h> header file, which in turn
    automatically includes the individual I/O header file and the <avr/lock.h>
    file. These other two files provides everything necessary to set the AVR
    lockbits.
    
    \par Lockbit API
    
    Each I/O header file may define up to 3 macros that controls what kinds
    of lockbits are available to the user.
    
    If __LOCK_BITS_EXIST is defined, then two lock bits are available to the
    user and 3 mode settings are defined for these two bits.
    
    If __BOOT_LOCK_BITS_0_EXIST is defined, then the two BLB0 lock bits are
    available to the user and 4 mode settings are defined for these two bits.
    
    If __BOOT_LOCK_BITS_1_EXIST is defined, then the two BLB1 lock bits are
    available to the user and 4 mode settings are defined for these two bits.

    If __BOOT_LOCK_APPLICATION_TABLE_BITS_EXIST is defined then two lock bits
    are available to set the locking mode for the Application Table Section 
    (which is used in the XMEGA family).
    
    If __BOOT_LOCK_APPLICATION_BITS_EXIST is defined then two lock bits are
    available to set the locking mode for the Application Section (which is used
    in the XMEGA family).
    
    If __BOOT_LOCK_BOOT_BITS_EXIST is defined then two lock bits are available
    to set the locking mode for the Boot Loader Section (which is used in the
    XMEGA family).

    The AVR lockbit modes have inverted values, logical 1 for an unprogrammed 
    (disabled) bit and logical 0 for a programmed (enabled) bit. The defined 
    macros for each individual lock bit represent this in their definition by a 
    bit-wise inversion of a mask. For example, the LB_MODE_3 macro is defined 
    as:
    \code
    #define LB_MODE_3  (0xFC)
`   \endcode
    
    To combine the lockbit mode macros together to represent a whole byte,
    use the bitwise AND operator, like so:
    \code
    (LB_MODE_3 & BLB0_MODE_2)
    \endcode
    
    <avr/lock.h> also defines a macro that provides a default lockbit value:
    LOCKBITS_DEFAULT which is defined to be 0xFF.

    See the AVR device specific datasheet for more details about these
    lock bits and the available mode settings.
    
    A convenience macro, LOCKMEM, is defined as a GCC attribute for a 
    custom-named section of ".lock".
    
    A convenience macro, LOCKBITS, is defined that declares a variable, __lock, 
    of type unsigned char with the attribute defined by LOCKMEM. This variable
    allows the end user to easily set the lockbit data.

    \note If a device-specific I/O header file has previously defined LOCKMEM,
    then LOCKMEM is not redefined. If a device-specific I/O header file has
    previously defined LOCKBITS, then LOCKBITS is not redefined. LOCKBITS is
    currently known to be defined in the I/O header files for the XMEGA devices.

    \par API Usage Example
    
    Putting all of this together is easy:
    
    \code
    #include <avr/io.h>

    LOCKBITS = (LB_MODE_1 & BLB0_MODE_3 & BLB1_MODE_4);

    int main(void)
    {
        return 0;
    }
    \endcode
    
    Or:
    
    \code
    #include <avr/io.h>

    unsigned char __lock __attribute__((section (".lock"))) = 
        (LB_MODE_1 & BLB0_MODE_3 & BLB1_MODE_4);

    int main(void)
    {
        return 0;
    }
    \endcode
    
    
    
    However there are a number of caveats that you need to be aware of to
    use this API properly.
    
    Be sure to include <avr/io.h> to get all of the definitions for the API.
    The LOCKBITS macro defines a global variable to store the lockbit data. This 
    variable is assigned to its own linker section. Assign the desired lockbit 
    values immediately in the variable initialization.
    
    The .lock section in the ELF file will get its values from the initial 
    variable assignment ONLY. This means that you can NOT assign values to 
    this variable in functions and the new values will not be put into the
    ELF .lock section.
    
    The global variable is declared in the LOCKBITS macro has two leading 
    underscores, which means that it is reserved for the "implementation",
    meaning the library, so it will not conflict with a user-named variable.
    
    You must initialize the lockbit variable to some meaningful value, even
    if it is the default value. This is because the lockbits default to a 
    logical 1, meaning unprogrammed. Normal uninitialized data defaults to all 
    locgial zeros. So it is vital that all lockbits are initialized, even with 
    default data. If they are not, then the lockbits may not programmed to the 
    desired settings and can possibly put your device into an unrecoverable 
    state.
    
    Be sure to have the -mmcu=<em>device</em> flag in your compile command line and
    your linker command line to have the correct device selected and to have 
    the correct I/O header file included when you include <avr/io.h>.

    You can print out the contents of the .lock section in the ELF file by
    using this command line:
    \code
    avr-objdump -s -j .lock <ELF file>
    \endcode

*/
# 200 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/lock.h" 3
/* Lock Bit Modes */
# 631 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/io.h" 2 3
# 89 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 2 3
# 102 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 3
/**
   \ingroup avr_pgmspace
   \def PROGMEM

   Attribute to use in order to declare an object being located in
   flash ROM.
 */



extern "C" {
# 382 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 3
/* Although in C, we can get away with just using __c, it does not work in
   C++. We need to use &__c[0] to avoid the compiler puking. Dave Hylands
   explaned it thusly,

     Let's suppose that we use PSTR("Test"). In this case, the type returned
     by __c is a prog_char[5] and not a prog_char *. While these are
     compatible, they aren't the same thing (especially in C++). The type
     returned by &__c[0] is a prog_char *, which explains why it works
     fine. */
# 403 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 3
/* The real thing. */
# 611 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 3
/*
Macro to read data from program memory for avr tiny parts(tiny 4/5/9/10/20/40).
why:
- LPM instruction is not available in AVR_TINY instruction set.
- Programs are executed starting from address 0x0000 in program memory.
But it must be addressed starting from 0x4000 when accessed via data memory.
Reference: TINY device (ATTiny 4,5,9,10,20 and 40) datasheets
Bug: avrtc-536
*/
# 632 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 3
/** \ingroup avr_pgmspace
    \def pgm_read_byte_near(address_short)
    Read a byte from the program space with a 16-bit (near) address. 
    \note The address is a byte address.
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_word_near(address_short)
    Read a word from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_dword_near(address_short)
    Read a double word from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */




/** \ingroup avr_pgmspace
    \def pgm_read_float_near(address_short)
    Read a float from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */




/** \ingroup avr_pgmspace
    \def pgm_read_ptr_near(address_short)
    Read a pointer from the program space with a 16-bit (near) address. 
    \note The address is a byte address. 
    The address is in the program space. */






/* Only for devices with more than 64K of program memory.
   RAMPZ must be defined (see iom103.h, iom128.h).
*/

/* The classic functions are needed for ATmega103. */
# 959 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 3
/* 
Check for architectures that implement RAMPD (avrxmega3, avrxmega5, 
avrxmega7) as they need to save/restore RAMPZ for ELPM macros so it does
not interfere with data accesses. 
*/
# 992 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 3
/** \ingroup avr_pgmspace
    \def pgm_read_byte_far(address_long)
    Read a byte from the program space with a 32-bit (far) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_word_far(address_long)
    Read a word from the program space with a 32-bit (far) address. 

    \note The address is a byte address.
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_dword_far(address_long)
    Read a double word from the program space with a 32-bit (far) address. 

    \note The address is a byte address.
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_float_far(address_long)
    Read a float from the program space with a 32-bit (far) address. 

    \note The address is a byte address.
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_ptr_far(address_long)
    Read a pointer from the program space with a 32-bit (far) address. 

    \note The address is a byte address.
    The address is in the program space. */





/** \ingroup avr_pgmspace
    \def pgm_read_byte(address_short)
    Read a byte from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_word(address_short)
    Read a word from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_dword(address_short)
    Read a double word from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_float(address_short)
    Read a float from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/** \ingroup avr_pgmspace
    \def pgm_read_ptr(address_short)
    Read a pointer from the program space with a 16-bit (near) address. 

    \note The address is a byte address. 
    The address is in the program space. */



/* pgm_get_far_address() macro

   This macro facilitates the obtention of a 32 bit "far" pointer (only 24 bits
   used) to data even passed the 64KB limit for the 16 bit ordinary pointer. It
   is similar to the '&' operator, with some limitations.

   Comments:

   - The overhead is minimal and it's mainly due to the 32 bit size operation.

   - 24 bit sizes guarantees the code compatibility for use in future devices.

   - hh8() is an undocumented feature but seems to give the third significant byte
     of a 32 bit data and accepts symbols, complementing the functionality of hi8()
     and lo8(). There is not an equivalent assembler function to get the high
     significant byte.

   - 'var' has to be resolved at linking time as an existing symbol, i.e, a simple
     type variable name, an array name (not an indexed element of the array, if the
     index is a constant the compiler does not complain but fails to get the address
     if optimization is enabled), a struct name or a struct field name, a function
     identifier, a linker defined identifier,...

   - The returned value is the identifier's VMA (virtual memory address) determined
     by the linker and falls in the corresponding memory region. The AVR Harvard
     architecture requires non overlapping VMA areas for the multiple address spaces
     in the processor: Flash ROM, RAM, and EEPROM. Typical offset for this are
     0x00000000, 0x00800xx0, and 0x00810000 respectively, derived from the linker
	 script used and linker options. The value returned can be seen then as a
     universal pointer.

*/
# 1137 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 3
extern const void * memchr_P(const void *, int __val, size_t __len) __attribute__((__const__));
extern int memcmp_P(const void *, const void *, size_t) __attribute__((__pure__));
extern void *memccpy_P(void *, const void *, int __val, size_t);
extern void *memcpy_P(void *, const void *, size_t);
extern void *memmem_P(const void *, size_t, const void *, size_t) __attribute__((__pure__));
extern const void * memrchr_P(const void *, int __val, size_t __len) __attribute__((__const__));
extern char *strcat_P(char *, const char *);
extern const char * strchr_P(const char *, int __val) __attribute__((__const__));
extern const char * strchrnul_P(const char *, int __val) __attribute__((__const__));
extern int strcmp_P(const char *, const char *) __attribute__((__pure__));
extern char *strcpy_P(char *, const char *);
extern int strcasecmp_P(const char *, const char *) __attribute__((__pure__));
extern char *strcasestr_P(const char *, const char *) __attribute__((__pure__));
extern size_t strcspn_P(const char *__s, const char * __reject) __attribute__((__pure__));
extern size_t strlcat_P (char *, const char *, size_t );
extern size_t strlcpy_P (char *, const char *, size_t );
extern size_t __strlen_P(const char *) __attribute__((__const__)); /* program memory can't change */
extern size_t strnlen_P(const char *, size_t) __attribute__((__const__)); /* program memory can't change */
extern int strncmp_P(const char *, const char *, size_t) __attribute__((__pure__));
extern int strncasecmp_P(const char *, const char *, size_t) __attribute__((__pure__));
extern char *strncat_P(char *, const char *, size_t);
extern char *strncpy_P(char *, const char *, size_t);
extern char *strpbrk_P(const char *__s, const char * __accept) __attribute__((__pure__));
extern const char * strrchr_P(const char *, int __val) __attribute__((__const__));
extern char *strsep_P(char **__sp, const char * __delim);
extern size_t strspn_P(const char *__s, const char * __accept) __attribute__((__pure__));
extern char *strstr_P(const char *, const char *) __attribute__((__pure__));
extern char *strtok_P(char *__s, const char * __delim);
extern char *strtok_rP(char *__s, const char * __delim, char **__last);

extern size_t strlen_PF (uint_farptr_t src) __attribute__((__const__)); /* program memory can't change */
extern size_t strnlen_PF (uint_farptr_t src, size_t len) __attribute__((__const__)); /* program memory can't change */
extern void *memcpy_PF (void *dest, uint_farptr_t src, size_t len);
extern char *strcpy_PF (char *dest, uint_farptr_t src);
extern char *strncpy_PF (char *dest, uint_farptr_t src, size_t len);
extern char *strcat_PF (char *dest, uint_farptr_t src);
extern size_t strlcat_PF (char *dst, uint_farptr_t src, size_t siz);
extern char *strncat_PF (char *dest, uint_farptr_t src, size_t len);
extern int strcmp_PF (const char *s1, uint_farptr_t s2) __attribute__((__pure__));
extern int strncmp_PF (const char *s1, uint_farptr_t s2, size_t n) __attribute__((__pure__));
extern int strcasecmp_PF (const char *s1, uint_farptr_t s2) __attribute__((__pure__));
extern int strncasecmp_PF (const char *s1, uint_farptr_t s2, size_t n) __attribute__((__pure__));
extern char *strstr_PF (const char *s1, uint_farptr_t s2);
extern size_t strlcpy_PF (char *dst, uint_farptr_t src, size_t siz);
extern int memcmp_PF(const void *, uint_farptr_t, size_t) __attribute__((__pure__));


__attribute__((__always_inline__)) static inline size_t strlen_P(const char * s);
static inline size_t strlen_P(const char *s) {
  return __builtin_constant_p(__builtin_strlen(s))
     ? __builtin_strlen(s) : __strlen_P(s);
}




}
# 29 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 30 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/interrupt.h" 1 3
/* Copyright (c) 2002,2005,2007 Marek Michalkiewicz
   Copyright (c) 2007, Dean Camera

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 39 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/interrupt.h" 2 3


/* Auxiliary macro for ISR_ALIAS(). */



/** 
\file 
\@{ 
*/


/** \name Global manipulation of the interrupt flag

    The global interrupt flag is maintained in the I bit of the status
    register (SREG).

    Handling interrupts frequently requires attention regarding atomic
    access to objects that could be altered by code running within an
    interrupt context, see <util/atomic.h>.

    Frequently, interrupts are being disabled for periods of time in
    order to perform certain operations without being disturbed; see
    \ref optim_code_reorder for things to be taken into account with
    respect to compiler optimizations.
*/
# 103 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/interrupt.h" 3
/** \name Macros for writing interrupt handler functions */
# 283 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/interrupt.h" 3
/** \name ISR attributes */
# 342 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/interrupt.h" 3
/* \@} */
# 31 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 2

# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/binary.h" 1
/*
  binary.h - Definitions for binary constants
  Copyright (c) 2006 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 33 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 2


extern "C"{


void yield(void);
# 79 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h"
// undefine stdlib's abs if encountered
# 108 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h"
// avr-libc defines _NOP() since 1.6.2




typedef unsigned int word;



typedef bool boolean;
typedef uint8_t byte;

void init(void);
void initVariant(void);

int atexit(void (*func)()) __attribute__((weak));

void pinMode(uint8_t, uint8_t);
void digitalWrite(uint8_t, uint8_t);
int digitalRead(uint8_t);
int analogRead(uint8_t);
void analogReference(uint8_t mode);
void analogWrite(uint8_t, int);

unsigned long millis(void);
unsigned long micros(void);
void delay(unsigned long);
void delayMicroseconds(unsigned int us);
unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout);
unsigned long pulseInLong(uint8_t pin, uint8_t state, unsigned long timeout);

void shiftOut(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder, uint8_t val);
uint8_t shiftIn(uint8_t dataPin, uint8_t clockPin, uint8_t bitOrder);

void attachInterrupt(uint8_t, void (*)(void), int mode);
void detachInterrupt(uint8_t);

void setup(void);
void loop(void);

// Get the bit location within the hardware port of the given virtual pin.
// This comes from the pins_*.c file for the active board configuration.



// On the ATmega1280, the addresses of some of the port registers are
// greater than 255, so we can't store them in uint8_t's.
extern const uint16_t __attribute__((__progmem__)) port_to_mode_PGM[];
extern const uint16_t __attribute__((__progmem__)) port_to_input_PGM[];
extern const uint16_t __attribute__((__progmem__)) port_to_output_PGM[];

extern const uint8_t __attribute__((__progmem__)) digital_pin_to_port_PGM[];
// extern const uint8_t PROGMEM digital_pin_to_bit_PGM[];
extern const uint8_t __attribute__((__progmem__)) digital_pin_to_bit_mask_PGM[];
extern const uint8_t __attribute__((__progmem__)) digital_pin_to_timer_PGM[];

// Get the bit location within the hardware port of the given virtual pin.
// This comes from the pins_*.c file for the active board configuration.
// 
// These perform slightly better as macros compared to inline functions
//
# 218 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h"
} // extern "C"



# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/WCharacter.h" 1
/*
 WCharacter.h - Character utility functions for Wiring & Arduino
 Copyright (c) 2010 Hernando Barragan.  All right reserved.
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */




# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/ctype.h" 1 3
/* Copyright (c) 2002,2007 Michael Stumpf
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   ctype.h - character conversion macros and ctype macros

  Author : Michael Stumpf
           Michael.Stumpf@t-online.de
*/
# 48 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/ctype.h" 3
extern "C" {


/** \file */
/** \defgroup ctype <ctype.h>: Character Operations
    These functions perform various operations on characters.

    \code #include <ctype.h>\endcode 

*/

/** \name Character classification routines

    These functions perform character classification. They return true or
    false status depending whether the character passed to the function falls
    into the function's classification (i.e. isdigit() returns true if its
    argument is any value '0' though '9', inclusive). If the input is not
    an unsigned char value, all of this function return false.	*/

 /* @{ */

/** \ingroup ctype

    Checks for an alphanumeric character. It is equivalent to <tt>(isalpha(c)
    || isdigit(c))</tt>. */

extern int isalnum(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for an alphabetic character. It is equivalent to <tt>(isupper(c) ||
    islower(c))</tt>. */

extern int isalpha(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks whether \c c is a 7-bit unsigned char value that fits into the
    ASCII character set. */

extern int isascii(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a blank character, that is, a space or a tab. */

extern int isblank(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a control character. */

extern int iscntrl(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a digit (0 through 9). */

extern int isdigit(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for any printable character except space. */

extern int isgraph(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a lower-case character. */

extern int islower(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for any printable character including space. */

extern int isprint(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for any printable character which is not a space or an alphanumeric
    character. */

extern int ispunct(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for white-space characters.  For the avr-libc library, these are:
    space, form-feed ('\\f'), newline ('\\n'), carriage return ('\\r'),
    horizontal tab ('\\t'), and vertical tab ('\\v'). */

extern int isspace(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for an uppercase letter. */

extern int isupper(int __c) __attribute__((__const__));

/** \ingroup ctype

    Checks for a hexadecimal digits, i.e. one of 0 1 2 3 4 5 6 7 8 9 a b c d e
    f A B C D E F. */

extern int isxdigit(int __c) __attribute__((__const__));

/* @} */

/** \name Character convertion routines 

    This realization permits all possible values of integer argument.
    The toascii() function clears all highest bits. The tolower() and
    toupper() functions return an input argument as is, if it is not an
    unsigned char value.	*/

/* @{ */

/** \ingroup ctype

    Converts \c c to a 7-bit unsigned char value that fits into the ASCII
    character set, by clearing the high-order bits.

    \warning Many people will be unhappy if you use this function. This
    function will convert accented letters into random characters. */

extern int toascii(int __c) __attribute__((__const__));

/** \ingroup ctype

    Converts the letter \c c to lower case, if possible. */

extern int tolower(int __c) __attribute__((__const__));

/** \ingroup ctype

    Converts the letter \c c to upper case, if possible. */

extern int toupper(int __c) __attribute__((__const__));

/* @} */


}
# 24 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/WCharacter.h" 2

// WCharacter.h prototypes
inline boolean isAlphaNumeric(int c) __attribute__((always_inline));
inline boolean isAlpha(int c) __attribute__((always_inline));
inline boolean isAscii(int c) __attribute__((always_inline));
inline boolean isWhitespace(int c) __attribute__((always_inline));
inline boolean isControl(int c) __attribute__((always_inline));
inline boolean isDigit(int c) __attribute__((always_inline));
inline boolean isGraph(int c) __attribute__((always_inline));
inline boolean isLowerCase(int c) __attribute__((always_inline));
inline boolean isPrintable(int c) __attribute__((always_inline));
inline boolean isPunct(int c) __attribute__((always_inline));
inline boolean isSpace(int c) __attribute__((always_inline));
inline boolean isUpperCase(int c) __attribute__((always_inline));
inline boolean isHexadecimalDigit(int c) __attribute__((always_inline));
inline int toAscii(int c) __attribute__((always_inline));
inline int toLowerCase(int c) __attribute__((always_inline));
inline int toUpperCase(int c)__attribute__((always_inline));


// Checks for an alphanumeric character. 
// It is equivalent to (isalpha(c) || isdigit(c)).
inline boolean isAlphaNumeric(int c)
{
  return ( isalnum(c) == 0 ? false : true);
}


// Checks for an alphabetic character. 
// It is equivalent to (isupper(c) || islower(c)).
inline boolean isAlpha(int c)
{
  return ( isalpha(c) == 0 ? false : true);
}


// Checks whether c is a 7-bit unsigned char value 
// that fits into the ASCII character set.
inline boolean isAscii(int c)
{
  return ( isascii (c) == 0 ? false : true);
}


// Checks for a blank character, that is, a space or a tab.
inline boolean isWhitespace(int c)
{
  return ( isblank (c) == 0 ? false : true);
}


// Checks for a control character.
inline boolean isControl(int c)
{
  return ( iscntrl (c) == 0 ? false : true);
}


// Checks for a digit (0 through 9).
inline boolean isDigit(int c)
{
  return ( isdigit (c) == 0 ? false : true);
}


// Checks for any printable character except space.
inline boolean isGraph(int c)
{
  return ( isgraph (c) == 0 ? false : true);
}


// Checks for a lower-case character.
inline boolean isLowerCase(int c)
{
  return (islower (c) == 0 ? false : true);
}


// Checks for any printable character including space.
inline boolean isPrintable(int c)
{
  return ( isprint (c) == 0 ? false : true);
}


// Checks for any printable character which is not a space 
// or an alphanumeric character.
inline boolean isPunct(int c)
{
  return ( ispunct (c) == 0 ? false : true);
}


// Checks for white-space characters. For the avr-libc library, 
// these are: space, formfeed ('\f'), newline ('\n'), carriage 
// return ('\r'), horizontal tab ('\t'), and vertical tab ('\v').
inline boolean isSpace(int c)
{
  return ( isspace (c) == 0 ? false : true);
}


// Checks for an uppercase letter.
inline boolean isUpperCase(int c)
{
  return ( isupper (c) == 0 ? false : true);
}


// Checks for a hexadecimal digits, i.e. one of 0 1 2 3 4 5 6 7 
// 8 9 a b c d e f A B C D E F.
inline boolean isHexadecimalDigit(int c)
{
  return ( isxdigit (c) == 0 ? false : true);
}


// Converts c to a 7-bit unsigned char value that fits into the 
// ASCII character set, by clearing the high-order bits.
inline int toAscii(int c)
{
  return toascii (c);
}


// Warning:
// Many people will be unhappy if you use this function. 
// This function will convert accented letters into random 
// characters.

// Converts the letter c to lower case, if possible.
inline int toLowerCase(int c)
{
  return tolower (c);
}


// Converts the letter c to upper case, if possible.
inline int toUpperCase(int c)
{
  return toupper (c);
}
# 223 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/WString.h" 1
/*
  WString.h - String library for Wiring & Arduino
  ...mostly rewritten by Paul Stoffregen...
  Copyright (c) 2009-10 Hernando Barragan.  All right reserved.
  Copyright 2011, Paul Stoffregen, paul@pjrc.com

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdlib.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2007 Joerg Wunsch

   Portions of documentation Copyright (c) 1990, 1991, 1993, 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/
# 27 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/WString.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/string.h" 1 3
/* Copyright (c) 2002,2007 Marek Michalkiewicz
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   string.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
 */
# 28 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/WString.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/ctype.h" 1 3
/* Copyright (c) 2002,2007 Michael Stumpf
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   ctype.h - character conversion macros and ctype macros

  Author : Michael Stumpf
           Michael.Stumpf@t-online.de
*/
# 29 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/WString.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/
# 30 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/WString.h" 2

// When compiling programs with this class, the following gcc parameters
// dramatically increase performance and memory (RAM) efficiency, typically
// with little or no increase in code size.
//     -felide-constructors
//     -std=c++0x

class __FlashStringHelper;


// An inherited class for holding the result of a concatenation.  These
// result objects are assumed to be writable by subsequent concatenations.
class StringSumHelper;

// The string class
class String
{
 // use a function pointer to allow for "if (s)" without the
 // complications of an operator bool(). for more information, see:
 // http://www.artima.com/cppsource/safebool.html
 typedef void (String::*StringIfHelperType)() const;
 void StringIfHelper() const {}

public:
 // constructors
 // creates a copy of the initial value.
 // if the initial value is null or invalid, or if memory allocation
 // fails, the string will be marked as invalid (i.e. "if (s)" will
 // be false).
 String(const char *cstr = "");
 String(const String &str);
 String(const __FlashStringHelper *str);

 String(String &&rval);
 String(StringSumHelper &&rval);

 explicit String(char c);
 explicit String(unsigned char, unsigned char base=10);
 explicit String(int, unsigned char base=10);
 explicit String(unsigned int, unsigned char base=10);
 explicit String(long, unsigned char base=10);
 explicit String(unsigned long, unsigned char base=10);
 explicit String(float, unsigned char decimalPlaces=2);
 explicit String(double, unsigned char decimalPlaces=2);
 ~String(void);

 // memory management
 // return true on success, false on failure (in which case, the string
 // is left unchanged).  reserve(0), if successful, will validate an
 // invalid string (i.e., "if (s)" will be true afterwards)
 unsigned char reserve(unsigned int size);
 inline unsigned int length(void) const {return len;}

 // creates a copy of the assigned value.  if the value is null or
 // invalid, or if the memory allocation fails, the string will be 
 // marked as invalid ("if (s)" will be false).
 String & operator = (const String &rhs);
 String & operator = (const char *cstr);
 String & operator = (const __FlashStringHelper *str);

 String & operator = (String &&rval);
 String & operator = (StringSumHelper &&rval);


 // concatenate (works w/ built-in types)

 // returns true on success, false on failure (in which case, the string
 // is left unchanged).  if the argument is null or invalid, the 
 // concatenation is considered unsucessful.  
 unsigned char concat(const String &str);
 unsigned char concat(const char *cstr);
 unsigned char concat(char c);
 unsigned char concat(unsigned char c);
 unsigned char concat(int num);
 unsigned char concat(unsigned int num);
 unsigned char concat(long num);
 unsigned char concat(unsigned long num);
 unsigned char concat(float num);
 unsigned char concat(double num);
 unsigned char concat(const __FlashStringHelper * str);

 // if there's not enough memory for the concatenated value, the string
 // will be left unchanged (but this isn't signalled in any way)
 String & operator += (const String &rhs) {concat(rhs); return (*this);}
 String & operator += (const char *cstr) {concat(cstr); return (*this);}
 String & operator += (char c) {concat(c); return (*this);}
 String & operator += (unsigned char num) {concat(num); return (*this);}
 String & operator += (int num) {concat(num); return (*this);}
 String & operator += (unsigned int num) {concat(num); return (*this);}
 String & operator += (long num) {concat(num); return (*this);}
 String & operator += (unsigned long num) {concat(num); return (*this);}
 String & operator += (float num) {concat(num); return (*this);}
 String & operator += (double num) {concat(num); return (*this);}
 String & operator += (const __FlashStringHelper *str){concat(str); return (*this);}

 friend StringSumHelper & operator + (const StringSumHelper &lhs, const String &rhs);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, const char *cstr);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, char c);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned char num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, int num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned int num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, long num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned long num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, float num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, double num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, const __FlashStringHelper *rhs);

 // comparison (only works w/ Strings and "strings")
 operator StringIfHelperType() const { return buffer ? &String::StringIfHelper : 0; }
 int compareTo(const String &s) const;
 unsigned char equals(const String &s) const;
 unsigned char equals(const char *cstr) const;
 unsigned char operator == (const String &rhs) const {return equals(rhs);}
 unsigned char operator == (const char *cstr) const {return equals(cstr);}
 unsigned char operator != (const String &rhs) const {return !equals(rhs);}
 unsigned char operator != (const char *cstr) const {return !equals(cstr);}
 unsigned char operator < (const String &rhs) const;
 unsigned char operator > (const String &rhs) const;
 unsigned char operator <= (const String &rhs) const;
 unsigned char operator >= (const String &rhs) const;
 unsigned char equalsIgnoreCase(const String &s) const;
 unsigned char startsWith( const String &prefix) const;
 unsigned char startsWith(const String &prefix, unsigned int offset) const;
 unsigned char endsWith(const String &suffix) const;

 // character acccess
 char charAt(unsigned int index) const;
 void setCharAt(unsigned int index, char c);
 char operator [] (unsigned int index) const;
 char& operator [] (unsigned int index);
 void getBytes(unsigned char *buf, unsigned int bufsize, unsigned int index=0) const;
 void toCharArray(char *buf, unsigned int bufsize, unsigned int index=0) const
  {getBytes((unsigned char *)buf, bufsize, index);}
 const char * c_str() const { return buffer; }

 // search
 int indexOf( char ch ) const;
 int indexOf( char ch, unsigned int fromIndex ) const;
 int indexOf( const String &str ) const;
 int indexOf( const String &str, unsigned int fromIndex ) const;
 int lastIndexOf( char ch ) const;
 int lastIndexOf( char ch, unsigned int fromIndex ) const;
 int lastIndexOf( const String &str ) const;
 int lastIndexOf( const String &str, unsigned int fromIndex ) const;
 String substring( unsigned int beginIndex ) const { return substring(beginIndex, len); };
 String substring( unsigned int beginIndex, unsigned int endIndex ) const;

 // modification
 void replace(char find, char replace);
 void replace(const String& find, const String& replace);
 void remove(unsigned int index);
 void remove(unsigned int index, unsigned int count);
 void toLowerCase(void);
 void toUpperCase(void);
 void trim(void);

 // parsing/conversion
 long toInt(void) const;
 float toFloat(void) const;

protected:
 char *buffer; // the actual char array
 unsigned int capacity; // the array length minus one (for the '\0')
 unsigned int len; // the String length (not counting the '\0')
protected:
 void init(void);
 void invalidate(void);
 unsigned char changeBuffer(unsigned int maxStrLen);
 unsigned char concat(const char *cstr, unsigned int length);

 // copy and move
 String & copy(const char *cstr, unsigned int length);
 String & copy(const __FlashStringHelper *pstr, unsigned int length);

 void move(String &rhs);

};

class StringSumHelper : public String
{
public:
 StringSumHelper(const String &s) : String(s) {}
 StringSumHelper(const char *p) : String(p) {}
 StringSumHelper(char c) : String(c) {}
 StringSumHelper(unsigned char num) : String(num) {}
 StringSumHelper(int num) : String(num) {}
 StringSumHelper(unsigned int num) : String(num) {}
 StringSumHelper(long num) : String(num) {}
 StringSumHelper(unsigned long num) : String(num) {}
 StringSumHelper(float num) : String(num) {}
 StringSumHelper(double num) : String(num) {}
};
# 224 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/HardwareSerial.h" 1
/*
  HardwareSerial.h - Hardware serial library for Wiring
  Copyright (c) 2006 Nicholas Zambetti.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  Modified 28 September 2010 by Mark Sproul
  Modified 14 August 2012 by Alarus
  Modified 3 December 2013 by Matthijs Kooijman
*/
# 225 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/USBAPI.h" 1
/*
  USBAPI.h
  Copyright (c) 2005-2014 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 24 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/USBAPI.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/
# 25 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/USBAPI.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/eeprom.h" 1 3
/* Copyright (c) 2002, 2003, 2004, 2007 Marek Michalkiewicz
   Copyright (c) 2005, 2006 Bjoern Haase
   Copyright (c) 2008 Atmel Corporation
   Copyright (c) 2008 Wouter van Gulik
   Copyright (c) 2009 Dmitry Xmelkov
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 39 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/eeprom.h" 2 3
# 570 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/eeprom.h" 3
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */





/* snaroff@next.com says the NeXT needs this.  */




/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 147 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 157 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* A null pointer constant.  */
# 412 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */






/* Type whose alignment is supported in every context and is at least
   as great as that of any standard type not using alignment
   specifiers.  */
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;






  typedef decltype(nullptr) nullptr_t;
# 571 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/eeprom.h" 2 3


/** \defgroup avr_eeprom <avr/eeprom.h>: EEPROM handling
    \code #include <avr/eeprom.h> \endcode

    This header file declares the interface to some simple library
    routines suitable for handling the data EEPROM contained in the
    AVR microcontrollers.  The implementation uses a simple polled
    mode interface.  Applications that require interrupt-controlled
    EEPROM access to ensure that no time will be wasted in spinloops
    will have to deploy their own implementation.

    \par Notes:

    - In addition to the write functions there is a set of update ones.
    This functions read each byte first and skip the burning if the
    old value is the same with new.  The scaning direction is from
    high address to low, to obtain quick return in common cases.

    - All of the read/write functions first make sure the EEPROM is
    ready to be accessed.  Since this may cause long delays if a
    write operation is still pending, time-critical applications
    should first poll the EEPROM e. g. using eeprom_is_ready() before
    attempting any actual I/O.  But this functions are not wait until
    SELFPRGEN in SPMCSR becomes zero.  Do this manually, if your
    softwate contains the Flash burning.

    - As these functions modify IO registers, they are known to be
    non-reentrant.  If any of these functions are used from both,
    standard and interrupt context, the applications must ensure
    proper protection (e.g. by disabling interrupts before accessing
    them).

    - All write functions force erase_and_write programming mode.
    
    - For Xmega the EEPROM start address is 0, like other architectures.
    The reading functions add the 0x2000 value to use EEPROM mapping into
    data space.
 */


extern "C" {
# 623 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/eeprom.h" 3
/** \def EEMEM
    \ingroup avr_eeprom
    Attribute expression causing a variable to be allocated within the
    .eeprom section.	*/


/** \def eeprom_is_ready
    \ingroup avr_eeprom
    \returns 1 if EEPROM is ready for a new read/write operation, 0 if not.
 */
# 646 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/eeprom.h" 3
/** \def eeprom_busy_wait
    \ingroup avr_eeprom
    Loops until the eeprom is no longer busy.
    \returns Nothing.
 */



/** \ingroup avr_eeprom
    Read one byte from EEPROM address \a __p.
 */
uint8_t __eerd_byte_m2560 (const uint8_t *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read one 16-bit word (little endian) from EEPROM address \a __p.
 */
uint16_t __eerd_word_m2560 (const uint16_t *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read one 32-bit double word (little endian) from EEPROM address \a __p.
 */
uint32_t __eerd_dword_m2560 (const uint32_t *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read one float value (little endian) from EEPROM address \a __p.
 */
float __eerd_float_m2560 (const float *__p) __attribute__((__pure__));

/** \ingroup avr_eeprom
    Read a block of \a __n bytes from EEPROM address \a __src to SRAM
    \a __dst.
 */
void __eerd_block_m2560 (void *__dst, const void *__src, size_t __n);


/** \ingroup avr_eeprom
    Write a byte \a __value to EEPROM address \a __p.
 */
void __eewr_byte_m2560 (uint8_t *__p, uint8_t __value);

/** \ingroup avr_eeprom
    Write a word \a __value to EEPROM address \a __p.
 */
void __eewr_word_m2560 (uint16_t *__p, uint16_t __value);

/** \ingroup avr_eeprom
    Write a 32-bit double word \a __value to EEPROM address \a __p.
 */
void __eewr_dword_m2560 (uint32_t *__p, uint32_t __value);

/** \ingroup avr_eeprom
    Write a float \a __value to EEPROM address \a __p.
 */
void __eewr_float_m2560 (float *__p, float __value);

/** \ingroup avr_eeprom
    Write a block of \a __n bytes to EEPROM address \a __dst from \a __src.
    \note The argument order is mismatch with common functions like strcpy().
 */
void __eewr_block_m2560 (const void *__src, void *__dst, size_t __n);


/** \ingroup avr_eeprom
    Update a byte \a __value to EEPROM address \a __p.
 */
void __eeupd_byte_m2560 (uint8_t *__p, uint8_t __value);

/** \ingroup avr_eeprom
    Update a word \a __value to EEPROM address \a __p.
 */
void __eeupd_word_m2560 (uint16_t *__p, uint16_t __value);

/** \ingroup avr_eeprom
    Update a 32-bit double word \a __value to EEPROM address \a __p.
 */
void __eeupd_dword_m2560 (uint32_t *__p, uint32_t __value);

/** \ingroup avr_eeprom
    Update a float \a __value to EEPROM address \a __p.
 */
void __eeupd_float_m2560 (float *__p, float __value);

/** \ingroup avr_eeprom
    Update a block of \a __n bytes to EEPROM address \a __dst from \a __src.
    \note The argument order is mismatch with common functions like strcpy().
 */
void __eeupd_block_m2560 (const void *__src, void *__dst, size_t __n);


/** \name IAR C compatibility defines	*/
/*@{*/

/** \def _EEPUT
    \ingroup avr_eeprom
    Write a byte to EEPROM. Compatibility define for IAR C.	*/


/** \def __EEPUT
    \ingroup avr_eeprom
    Write a byte to EEPROM. Compatibility define for IAR C.	*/


/** \def _EEGET
    \ingroup avr_eeprom
    Read a byte from EEPROM. Compatibility define for IAR C.	*/


/** \def __EEGET
    \ingroup avr_eeprom
    Read a byte from EEPROM. Compatibility define for IAR C.	*/


/*@}*/


}
# 26 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/USBAPI.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/interrupt.h" 1 3
/* Copyright (c) 2002,2005,2007 Marek Michalkiewicz
   Copyright (c) 2007, Dean Camera

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 27 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/USBAPI.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/util/delay.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2007  Florin-Viorel Petrov
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 42 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/util/delay.h" 3
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 43 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/util/delay.h" 2 3
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/util/delay_basic.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2007 Joerg Wunsch
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */




# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 38 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/util/delay_basic.h" 2 3


static inline void _delay_loop_1(uint8_t __count) __attribute__((always_inline));
static inline void _delay_loop_2(uint16_t __count) __attribute__((always_inline));


/** \file */
/** \defgroup util_delay_basic <util/delay_basic.h>: Basic busy-wait delay loops
    \code
    #include <util/delay_basic.h>
    \endcode

    The functions in this header file implement simple delay loops
    that perform a busy-waiting.  They are typically used to
    facilitate short delays in the program execution.  They are
    implemented as count-down loops with a well-known CPU cycle
    count per loop iteration.  As such, no other processing can
    occur simultaneously.  It should be kept in mind that the
    functions described here do not disable interrupts.

    In general, for long delays, the use of hardware timers is
    much preferrable, as they free the CPU, and allow for
    concurrent processing of other events while the timer is
    running.  However, in particular for very short delays, the
    overhead of setting up a hardware timer is too much compared
    to the overall delay time.

    Two inline functions are provided for the actual delay algorithms.

*/

/** \ingroup util_delay_basic

    Delay loop using an 8-bit counter \c __count, so up to 256
    iterations are possible.  (The value 256 would have to be passed
    as 0.)  The loop executes three CPU cycles per iteration, not
    including the overhead the compiler needs to setup the counter
    register.

    Thus, at a CPU speed of 1 MHz, delays of up to 768 microseconds
    can be achieved.
*/
void
_delay_loop_1(uint8_t __count)
{
 __asm__ volatile (
  "1: dec %0" "\n\t"
  "brne 1b"
  : "=r" (__count)
  : "0" (__count)
 );
}

/** \ingroup util_delay_basic

    Delay loop using a 16-bit counter \c __count, so up to 65536
    iterations are possible.  (The value 65536 would have to be
    passed as 0.)  The loop executes four CPU cycles per iteration,
    not including the overhead the compiler requires to setup the
    counter register pair.

    Thus, at a CPU speed of 1 MHz, delays of up to about 262.1
    milliseconds can be achieved.
 */
void
_delay_loop_2(uint16_t __count)
{
 __asm__ volatile (
  "1: sbiw %0,1" "\n\t"
  "brne 1b"
  : "=w" (__count)
  : "0" (__count)
 );
}
# 44 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/util/delay.h" 2 3
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/math.h" 1 3
/* Copyright (c) 2002,2007-2009 Michael Stumpf

   Portions of documentation Copyright (c) 1990 - 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   math.h - mathematical functions

   Author : Michael Stumpf
            Michael.Stumpf@t-online.de

   __ATTR_CONST__ added by marekm@linux.org.pl for functions
   that "do not examine any values except their arguments, and have
   no effects except the return value", for better optimization by gcc.
 */
# 45 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/util/delay.h" 2 3

/** \file */
/** \defgroup util_delay <util/delay.h>: Convenience functions for busy-wait delay loops
    \code
    #define F_CPU 1000000UL  // 1 MHz
    //#define F_CPU 14.7456E6
    #include <util/delay.h>
    \endcode

    \note As an alternative method, it is possible to pass the
    F_CPU macro down to the compiler from the Makefile.
    Obviously, in that case, no \c \#define statement should be
    used.

    The functions in this header file are wrappers around the basic
    busy-wait functions from <util/delay_basic.h>.  They are meant as
    convenience functions where actual time values can be specified
    rather than a number of cycles to wait for.  The idea behind is
    that compile-time constant expressions will be eliminated by
    compiler optimization so floating-point expressions can be used
    to calculate the number of delay cycles needed based on the CPU
    frequency passed by the macro F_CPU.

    \note In order for these functions to work as intended, compiler
    optimizations <em>must</em> be enabled, and the delay time
    <em>must</em> be an expression that is a known constant at
    compile-time.  If these requirements are not met, the resulting
    delay will be much longer (and basically unpredictable), and
    applications that otherwise do not use floating-point calculations
    will experience severe code bloat by the floating-point library
    routines linked into the application.

    The functions available allow the specification of microsecond, and
    millisecond delays directly, using the application-supplied macro
    F_CPU as the CPU clock frequency (in Hertz).

*/


static inline void _delay_us(double __us) __attribute__((always_inline));
static inline void _delay_ms(double __ms) __attribute__((always_inline));
# 101 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/util/delay.h" 3
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/math.h" 1 3
/* Copyright (c) 2002,2007-2009 Michael Stumpf

   Portions of documentation Copyright (c) 1990 - 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   math.h - mathematical functions

   Author : Michael Stumpf
            Michael.Stumpf@t-online.de

   __ATTR_CONST__ added by marekm@linux.org.pl for functions
   that "do not examine any values except their arguments, and have
   no effects except the return value", for better optimization by gcc.
 */
# 102 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/util/delay.h" 2 3


/**
   \ingroup util_delay

   Perform a delay of \c __ms milliseconds, using _delay_loop_2().

   The macro F_CPU is supposed to be defined to a
   constant defining the CPU clock frequency (in Hertz).

   The maximal possible delay is 262.14 ms / F_CPU in MHz.

   When the user request delay which exceed the maximum possible one,
   _delay_ms() provides a decreased resolution functionality. In this
   mode _delay_ms() will work with a resolution of 1/10 ms, providing
   delays up to 6.5535 seconds (independent from CPU frequency).  The
   user will not be informed about decreased resolution.

   If the avr-gcc toolchain has __builtin_avr_delay_cycles(unsigned long)
   support, maximal possible delay is 4294967.295 ms/ F_CPU in MHz. For
   values greater than the maximal possible delay, overflows results in
   no delay i.e., 0ms.

   Conversion of __us into clock cycles may not always result in integer.
   By default, the clock cycles rounded up to next integer. This ensures that
   the user gets atleast __us microseconds of delay.

   Alternatively, user can define __DELAY_ROUND_DOWN__ and __DELAY_ROUND_CLOSEST__
   to round down and round to closest integer.

   Note: The new implementation of _delay_ms(double __ms) with 
    __builtin_avr_delay_cycles(unsigned long) support is not backward compatible. 
   User can define __DELAY_BACKWARD_COMPATIBLE__ to get a backward compatible delay.
   Also, the backward compatible
   algorithm will be chosen if the code is compiled in a <em>freestanding
   environment</em> (GCC option \c -ffreestanding), as the math functions
   required for rounding are not available to the compiler then.

 */
void
_delay_ms(double __ms)
{
 double __tmp ;



 uint32_t __ticks_dc;
 extern void __builtin_avr_delay_cycles(unsigned long);
 __tmp = ((16000000L) / 1e3) * __ms;
# 159 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/util/delay.h" 3
  //round up by default
  __ticks_dc = (uint32_t)(ceil(fabs(__tmp)));


 __builtin_avr_delay_cycles(__ticks_dc);
# 186 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/util/delay.h" 3
}

/**
   \ingroup util_delay

   Perform a delay of \c __us microseconds, using _delay_loop_1().

   The macro F_CPU is supposed to be defined to a
   constant defining the CPU clock frequency (in Hertz).

   The maximal possible delay is 768 us / F_CPU in MHz.

   If the user requests a delay greater than the maximal possible one,
   _delay_us() will automatically call _delay_ms() instead.  The user
   will not be informed about this case.

   If the avr-gcc toolchain has __builtin_avr_delay_cycles(unsigned long)
   support, maximal possible delay is 4294967.295 us/ F_CPU in MHz. For
   values greater than the maximal possible delay, overflow results in
   no delay i.e., 0us.
  
   Conversion of __us into clock cycles may not always result in integer.
   By default, the clock cycles rounded up to next integer. This ensures that
   the user gets atleast __us microseconds of delay.

   Alternatively, user can define __DELAY_ROUND_DOWN__ and __DELAY_ROUND_CLOSEST__
   to round down and round to closest integer.
 
   Note: The new implementation of _delay_us(double __us) with 
    __builtin_avr_delay_cycles(unsigned long) support is not backward compatible.
   User can define __DELAY_BACKWARD_COMPATIBLE__ to get a backward compatible delay.
   Also, the backward compatible
   algorithm will be chosen if the code is compiled in a <em>freestanding
   environment</em> (GCC option \c -ffreestanding), as the math functions
   required for rounding are not available to the compiler then.

 */
void
_delay_us(double __us)
{
 double __tmp ;



 uint32_t __ticks_dc;
 extern void __builtin_avr_delay_cycles(unsigned long);
 __tmp = ((16000000L) / 1e6) * __us;
# 241 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/util/delay.h" 3
  //round up by default
  __ticks_dc = (uint32_t)(ceil(fabs(__tmp)));


 __builtin_avr_delay_cycles(__ticks_dc);
# 268 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/util/delay.h" 3
}
# 28 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/USBAPI.h" 2

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;

# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 34 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/USBAPI.h" 2

// This definitions is usefull if you want to reduce the EP_SIZE to 16
// at the moment only 64 and 16 as EP_SIZE for all EPs are supported except the control endpoint
# 226 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 2




uint16_t makeWord(uint16_t w);
uint16_t makeWord(byte h, byte l);



unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout = 1000000L);
unsigned long pulseInLong(uint8_t pin, uint8_t state, unsigned long timeout = 1000000L);

void tone(uint8_t _pin, unsigned int frequency, unsigned long duration = 0);
void noTone(uint8_t _pin);

// WMath prototypes
long random(long);
long random(long, long);
void randomSeed(unsigned long);
long map(long, long, long, long, long);



# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/variants/rambo/pins_arduino.h" 1
/*
  pins_arduino.h - Pin definition functions for Arduino
  Part of Arduino - http://www.arduino.cc/

  Copyright (c) 2007 David A. Mellis

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General
  Public License along with this library; if not, write to the
  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
  Boston, MA  02111-1307  USA

  $Id: wiring.h 249 2007-02-03 16:52:51Z mellis $
*/




# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/
# 29 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/variants/rambo/pins_arduino.h" 2






static const uint8_t SS = 53;
static const uint8_t MOSI = 51;
static const uint8_t MISO = 50;
static const uint8_t SCK = 52;

static const uint8_t SDA = 20;
static const uint8_t SCL = 21;
static const uint8_t LED_BUILTIN = 13;

static const uint8_t A0 = 54;
static const uint8_t A1 = 55;
static const uint8_t A2 = 56;
static const uint8_t A3 = 57;
static const uint8_t A4 = 58;
static const uint8_t A5 = 59;
static const uint8_t A6 = 60;
static const uint8_t A7 = 61;
static const uint8_t A8 = 62;
static const uint8_t A9 = 63;
static const uint8_t A10 = 64;
static const uint8_t A11 = 65;
static const uint8_t A12 = 66;
static const uint8_t A13 = 67;
static const uint8_t A14 = 68;
static const uint8_t A15 = 69;

// A majority of the pins are NOT PCINTs, SO BE WARNED (i.e. you cannot use them as receive pins)
// Only pins available for RECEIVE (TRANSMIT can be on any pin):
// (I've deliberately left out pin mapping to the Hardware USARTs - seems senseless to me)
// Pins: 10, 11, 12, 13,  50, 51, 52, 53,  62, 63, 64, 65, 66, 67, 68, 69
# 250 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 2
# 277 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h" 2

  /**
   * Set ENDSTOPPULLUPS for unused endstop switches
   */
# 305 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  /**
   * Axis lengths
   */




  /**
   * CoreXY and CoreXZ
   */
# 323 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  /**
   * SCARA
   */





  /**
   * AUTOSET LOCATIONS OF LIMIT SWITCHES
   */
# 349 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  /**
   * Auto Bed Leveling
   */

    // Boundaries for probing based on set limits
# 363 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  /**
   * Sled Options
   */




  /**
   * Z Safe Homing dependencies
   */
# 388 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  /**
   * Enable MECHANICAL_PROBE for Z_PROBE_ALLEN_KEY, for older configs
   */




  /**
   * Avoid double-negatives for enabling features
   */




  /**
   * MAX_STEP_FREQUENCY differs for TOSHIBA
   */






  // MS1 MS2 Stepper Driver Microstepping mode table






  /**
   * Advance calculated values
   */
# 430 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  /**
   * Set defaults for missing (newer) options
   */
# 446 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  // Power Signal Control Definitions
  // By default use ATX definition
# 460 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  /**
   * Temp Sensor defines
   */
# 526 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  /**
   * Flags for PID handling
   */



  /**
   * ARRAY_BY_EXTRUDERS based on EXTRUDERS
   */
# 547 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  /**
   * Z_DUAL_ENDSTOPS endstop reassignment
   */
# 588 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  /**
   * Shorthand for pin tests, used wherever needed
   */
# 676 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  /**
   * Helper Macros for heaters and extruder fan
   */
# 698 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Conditionals.h"
  /**
   * Up to 3 PWM fans
   */
# 702 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration_adv.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * SanityCheck.h
 *
 * Test configuration values for errors at compile-time.
 */



/**
 * Due to the high number of issues related with old versions of Arduino IDE
 * we are now warning our users to update their toolkits. In a future Marlin
 * release we will stop supporting old IDE versions and will require user
 * action to proceed with compilation in such environments.
 */




/**
 * Marlin release, version and default string
 */
# 76 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
/**
 * Dual Stepper Drivers
 */




/**
 * Progress Bar
 */
# 98 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
/**
 * Babystepping
 */
# 113 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
/**
 * Filament Change with Extruder Runout Prevention
 */




/**
 * Options only for EXTRUDERS > 1
 */
# 147 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
/**
 * Limited number of servos
 */
# 165 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
/**
 * Servo deactivation depends on servo endstops
 */




/**
 * Required LCD language
 */




/**
 * Bed Heating Options - PID vs Limit Switching
 */




/**
 * Mesh Bed Leveling
 */
# 203 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
/**
 * Probes
 */

/**
 * A probe needs a pin
 */
# 218 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
/**
  * Require one kind of probe
  */




// To do: Fail with more than one probe defined

/**
 * Auto Bed Leveling
 */


  /**
   * Require a Z min pin
   */
# 245 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
  /**
   * Require a Z probe pin if Z_MIN_PROBE_ENDSTOP is enabled.
   */
# 266 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
  /**
   * Check if Probe_Offset * Grid Points is greater than Probing Range
   */


      // Be sure points are in the right order





      // Make sure probing points are reachable
# 309 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
/**
 * Filament Width Sensor
 */





/**
 * ULTIPANEL encoder
 */
# 328 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
/**
 * Delta has limited bed leveling options
 */
# 347 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
/**
 * Allen Key Z probe requires Auto Bed Leveling grid and Delta
 */




/**
 * Dual X Carriage requirements
 */
# 369 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
/**
 * Make sure auto fan pins don't conflict with the fan pin
 */
# 402 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
/**
 * Test Heater, Temp Sensor, and Extruder Pins; Sensor Type must also be set.
 */
# 455 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
/**
 * Endstops
 */
# 468 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/SanityCheck.h"
/**
 * Warnings for old configurations
 */
# 703 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration_adv.h" 2
# 1153 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/thermistortables.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */




# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */




/**
 * Compiler warning on unused variable.
 */


# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/math.h" 1 3
/* Copyright (c) 2002,2007-2009 Michael Stumpf

   Portions of documentation Copyright (c) 1990 - 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   math.h - mathematical functions

   Author : Michael Stumpf
            Michael.Stumpf@t-online.de

   __ATTR_CONST__ added by marekm@linux.org.pl for functions
   that "do not examine any values except their arguments, and have
   no effects except the return value", for better optimization by gcc.
 */
# 32 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdio.h" 1 3
/* Copyright (c) 2002, 2005, 2007 Joerg Wunsch
   All rights reserved.

   Portions of documentation Copyright (c) 1990, 1991, 1993
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/






# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 45 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdio.h" 2 3
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stdarg.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 36 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stdarg.h" 3 4
/* Define __gnuc_va_list.  */



typedef __builtin_va_list __gnuc_va_list;


/* Define the standard macros for the user,
   if this invocation was from the user program.  */
# 55 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stdarg.h" 3 4
/* Define va_list, if desired, from __gnuc_va_list. */
/* We deliberately do not define va_list when called from
   stdio.h, because ANSI C says that stdio.h is not supposed to define
   va_list.  stdio.h needs to have access to that data type, 
   but must not use that name.  It should use the name __gnuc_va_list,
   which is safe because it is reserved for the implementation.  */
# 85 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stdarg.h" 3 4
/* The macro _VA_LIST_ is the same thing used by this file in Ultrix.
   But on BSD NET2 we must not test or define or undef it.
   (Note that the comments in NET 2's ansi.h
   are incorrect for _VA_LIST_--see stdio.h!)  */

/* The macro _VA_LIST_DEFINED is used in Windows NT 3.5  */

/* The macro _VA_LIST is used in SCO Unix 3.2.  */

/* The macro _VA_LIST_T_H is used in the Bull dpx2  */

/* The macro __va_list__ is used by BeOS.  */

typedef __gnuc_va_list va_list;
# 46 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdio.h" 2 3



# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 157 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* A null pointer constant.  */
# 412 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/lib/gcc/avr/4.8.1/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 50 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdio.h" 2 3

/** \file */
/** \defgroup avr_stdio <stdio.h>: Standard IO facilities
    \code #include <stdio.h> \endcode

    <h3>Introduction to the Standard IO facilities</h3>

    This file declares the standard IO facilities that are implemented
    in \c avr-libc.  Due to the nature of the underlying hardware,
    only a limited subset of standard IO is implemented.  There is no
    actual file implementation available, so only device IO can be
    performed.  Since there's no operating system, the application
    needs to provide enough details about their devices in order to
    make them usable by the standard IO facilities.

    Due to space constraints, some functionality has not been
    implemented at all (like some of the \c printf conversions that
    have been left out).  Nevertheless, potential users of this
    implementation should be warned: the \c printf and \c scanf families of functions, although
    usually associated with presumably simple things like the
    famous "Hello, world!" program, are actually fairly complex
    which causes their inclusion to eat up a fair amount of code space.
    Also, they are not fast due to the nature of interpreting the
    format string at run-time.  Whenever possible, resorting to the
    (sometimes non-standard) predetermined conversion facilities that are
    offered by avr-libc will usually cost much less in terms of speed
    and code size.

    <h3>Tunable options for code size vs. feature set</h3>

    In order to allow programmers a code size vs. functionality tradeoff,
    the function vfprintf() which is the heart of the printf family can be
    selected in different flavours using linker options.  See the
    documentation of vfprintf() for a detailed description.  The same
    applies to vfscanf() and the \c scanf family of functions.

    <h3>Outline of the chosen API</h3>

    The standard streams \c stdin, \c stdout, and \c stderr are
    provided, but contrary to the C standard, since avr-libc has no
    knowledge about applicable devices, these streams are not already
    pre-initialized at application startup.  Also, since there is no
    notion of "file" whatsoever to avr-libc, there is no function
    \c fopen() that could be used to associate a stream to some device.
    (See \ref stdio_note1 "note 1".)  Instead, the function \c fdevopen()
    is provided to associate a stream to a device, where the device
    needs to provide a function to send a character, to receive a
    character, or both.  There is no differentiation between "text" and
    "binary" streams inside avr-libc.  Character \c \\n is sent
    literally down to the device's \c put() function.  If the device
    requires a carriage return (\c \\r) character to be sent before
    the linefeed, its \c put() routine must implement this (see
    \ref stdio_note2 "note 2").

    As an alternative method to fdevopen(), the macro
    fdev_setup_stream() might be used to setup a user-supplied FILE
    structure.

    It should be noted that the automatic conversion of a newline
    character into a carriage return - newline sequence breaks binary
    transfers.  If binary transfers are desired, no automatic
    conversion should be performed, but instead any string that aims
    to issue a CR-LF sequence must use <tt>"\r\n"</tt> explicitly.

    For convenience, the first call to \c fdevopen() that opens a
    stream for reading will cause the resulting stream to be aliased
    to \c stdin.  Likewise, the first call to \c fdevopen() that opens
    a stream for writing will cause the resulting stream to be aliased
    to both, \c stdout, and \c stderr.  Thus, if the open was done
    with both, read and write intent, all three standard streams will
    be identical.  Note that these aliases are indistinguishable from
    each other, thus calling \c fclose() on such a stream will also
    effectively close all of its aliases (\ref stdio_note3 "note 3").

    It is possible to tie additional user data to a stream, using
    fdev_set_udata().  The backend put and get functions can then
    extract this user data using fdev_get_udata(), and act
    appropriately.  For example, a single put function could be used
    to talk to two different UARTs that way, or the put and get
    functions could keep internal state between calls there.

    <h3>Format strings in flash ROM</h3>

    All the \c printf and \c scanf family functions come in two flavours: the
    standard name, where the format string is expected to be in
    SRAM, as well as a version with the suffix "_P" where the format
    string is expected to reside in the flash ROM.  The macro
    \c PSTR (explained in \ref avr_pgmspace) becomes very handy
    for declaring these format strings.

    \anchor stdio_without_malloc
    <h3>Running stdio without malloc()</h3>

    By default, fdevopen() requires malloc().  As this is often
    not desired in the limited environment of a microcontroller, an
    alternative option is provided to run completely without malloc().

    The macro fdev_setup_stream() is provided to prepare a
    user-supplied FILE buffer for operation with stdio.

    <h4>Example</h4>

    \code
    #include <stdio.h>

    static int uart_putchar(char c, FILE *stream);

    static FILE mystdout = FDEV_SETUP_STREAM(uart_putchar, NULL,
                                             _FDEV_SETUP_WRITE);

    static int
    uart_putchar(char c, FILE *stream)
    {

      if (c == '\n')
        uart_putchar('\r', stream);
      loop_until_bit_is_set(UCSRA, UDRE);
      UDR = c;
      return 0;
    }

    int
    main(void)
    {
      init_uart();
      stdout = &mystdout;
      printf("Hello, world!\n");

      return 0;
    }
    \endcode

    This example uses the initializer form FDEV_SETUP_STREAM() rather
    than the function-like fdev_setup_stream(), so all data
    initialization happens during C start-up.

    If streams initialized that way are no longer needed, they can be
    destroyed by first calling the macro fdev_close(), and then
    destroying the object itself.  No call to fclose() should be
    issued for these streams.  While calling fclose() itself is
    harmless, it will cause an undefined reference to free() and thus
    cause the linker to link the malloc module into the application.

    <h3>Notes</h3>

    \anchor stdio_note1 \par Note 1:
    It might have been possible to implement a device abstraction that
    is compatible with \c fopen() but since this would have required
    to parse a string, and to take all the information needed either
    out of this string, or out of an additional table that would need to be
    provided by the application, this approach was not taken.

    \anchor stdio_note2 \par Note 2:
    This basically follows the Unix approach: if a device such as a
    terminal needs special handling, it is in the domain of the
    terminal device driver to provide this functionality.  Thus, a
    simple function suitable as \c put() for \c fdevopen() that talks
    to a UART interface might look like this:

    \code
    int
    uart_putchar(char c, FILE *stream)
    {

      if (c == '\n')
        uart_putchar('\r');
      loop_until_bit_is_set(UCSRA, UDRE);
      UDR = c;
      return 0;
    }
    \endcode

    \anchor stdio_note3 \par Note 3:
    This implementation has been chosen because the cost of maintaining
    an alias is considerably smaller than the cost of maintaining full
    copies of each stream.  Yet, providing an implementation that offers
    the complete set of standard streams was deemed to be useful.  Not
    only that writing \c printf() instead of <tt>fprintf(mystream, ...)</tt>
    saves typing work, but since avr-gcc needs to resort to pass all
    arguments of variadic functions on the stack (as opposed to passing
    them in registers for functions that take a fixed number of
    parameters), the ability to pass one parameter less by implying
    \c stdin or stdout will also save some execution time.
*/



/*
 * This is an internal structure of the library that is subject to be
 * changed without warnings at any time.  Please do *never* reference
 * elements of it beyond by using the official interfaces provided.
 */
struct __file {
 char *buf; /* buffer pointer */
 unsigned char unget; /* ungetc() buffer */
 uint8_t flags; /* flags, see below */
# 261 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdio.h" 3
 int size; /* size of buffer */
 int len; /* characters read or written so far */
 int (*put)(char, struct __file *); /* function to write one char to device */
 int (*get)(struct __file *); /* function to read one char from device */
 void *udata; /* User defined and accessible data. */
};



/*@{*/
/**
   \c FILE is the opaque structure that is passed around between the
   various standard IO functions.
*/


/**
   Stream that will be used as an input stream by the simplified
   functions that don't take a \c stream argument.

   The first stream opened with read intent using \c fdevopen()
   will be assigned to \c stdin.
*/


/**
   Stream that will be used as an output stream by the simplified
   functions that don't take a \c stream argument.

   The first stream opened with write intent using \c fdevopen()
   will be assigned to both, \c stdin, and \c stderr.
*/


/**
   Stream destined for error output.  Unless specifically assigned,
   identical to \c stdout.

   If \c stderr should point to another stream, the result of
   another \c fdevopen() must be explicitly assigned to it without
   closing the previous \c stderr (since this would also close
   \c stdout).
*/


/**
   \c EOF declares the value that is returned by various standard IO
   functions in case of an error.  Since the AVR platform (currently)
   doesn't contain an abstraction for actual files, its origin as
   "end of file" is somewhat meaningless here.
*/


/** This macro inserts a pointer to user defined data into a FILE
    stream object.

    The user data can be useful for tracking state in the put and get
    functions supplied to the fdevopen() function. */


/** This macro retrieves a pointer to user defined data from a FILE
    stream object. */
# 361 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdio.h" 3
/**
 * Return code for an error condition during device read.
 *
 * To be used in the get function of fdevopen().
 */


/**
 * Return code for an end-of-file condition during device read.
 *
 * To be used in the get function of fdevopen().
 */
# 397 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdio.h" 3
extern "C" {



/*
 * Doxygen documentation can be found in fdevopen.c.
 */

extern struct __file *__iob[];
# 416 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdio.h" 3
/* New prototype for avr-libc 1.4 and above. */
extern struct __file *fdevopen(int (*__put)(char, struct __file*), int (*__get)(struct __file*));




/**
   This function closes \c stream, and disallows and further
   IO to and from it.

   When using fdevopen() to setup the stream, a call to fclose() is
   needed in order to free the internal resources allocated.

   If the stream has been set up using fdev_setup_stream() or
   FDEV_SETUP_STREAM(), use fdev_close() instead.

   It currently always returns 0 (for success).
*/
extern int fclose(struct __file *__stream);

/**
   This macro frees up any library resources that might be associated
   with \c stream.  It should be called if \c stream is no longer
   needed, right before the application is going to destroy the
   \c stream object itself.

   (Currently, this macro evaluates to nothing, but this might change
   in future versions of the library.)
*/






/**
   \c vfprintf is the central facility of the \c printf family of
   functions.  It outputs values to \c stream under control of a
   format string passed in \c fmt.  The actual values to print are
   passed as a variable argument list \c ap.

   \c vfprintf returns the number of characters written to \c stream,
   or \c EOF in case of an error.  Currently, this will only happen
   if \c stream has not been opened with write intent.

   The format string is composed of zero or more directives: ordinary
   characters (not \c %), which are copied unchanged to the output
   stream; and conversion specifications, each of which results in
   fetching zero or more subsequent arguments.  Each conversion
   specification is introduced by the \c % character.  The arguments must
   properly correspond (after type promotion) with the conversion
   specifier.  After the \c %, the following appear in sequence:

   - Zero or more of the following flags:
      <ul>
      <li> \c # The value should be converted to an "alternate form".  For
            c, d, i, s, and u conversions, this option has no effect.
            For o conversions, the precision of the number is
            increased to force the first character of the output
            string to a zero (except if a zero value is printed with
            an explicit precision of zero).  For x and X conversions,
            a non-zero result has the string `0x' (or `0X' for X
            conversions) prepended to it.</li>
      <li> \c 0 (zero) Zero padding.  For all conversions, the converted
            value is padded on the left with zeros rather than blanks.
            If a precision is given with a numeric conversion (d, i,
            o, u, i, x, and X), the 0 flag is ignored.</li>
      <li> \c - A negative field width flag; the converted value is to be
            left adjusted on the field boundary.  The converted value
            is padded on the right with blanks, rather than on the
            left with blanks or zeros.  A - overrides a 0 if both are
            given.</li>
      <li> ' ' (space) A blank should be left before a positive number
            produced by a signed conversion (d, or i).</li>
      <li> \c + A sign must always be placed before a number produced by a
            signed conversion.  A + overrides a space if both are
            used.</li>
      </ul>
      
   -   An optional decimal digit string specifying a minimum field width.
       If the converted value has fewer characters than the field width, it
       will be padded with spaces on the left (or right, if the left-adjustment
       flag has been given) to fill out the field width.
   -   An optional precision, in the form of a period . followed by an
       optional digit string.  If the digit string is omitted, the
       precision is taken as zero.  This gives the minimum number of
       digits to appear for d, i, o, u, x, and X conversions, or the
       maximum number of characters to be printed from a string for \c s
       conversions.
   -   An optional \c l or \c h length modifier, that specifies that the
       argument for the d, i, o, u, x, or X conversion is a \c "long int"
       rather than \c int. The \c h is ignored, as \c "short int" is
       equivalent to \c int.
   -   A character that specifies the type of conversion to be applied.

   The conversion specifiers and their meanings are:

   - \c diouxX The int (or appropriate variant) argument is converted
           to signed decimal (d and i), unsigned octal (o), unsigned
           decimal (u), or unsigned hexadecimal (x and X) notation.
           The letters "abcdef" are used for x conversions; the
           letters "ABCDEF" are used for X conversions.  The
           precision, if any, gives the minimum number of digits that
           must appear; if the converted value requires fewer digits,
           it is padded on the left with zeros.
   - \c p  The <tt>void *</tt> argument is taken as an unsigned integer,
           and converted similarly as a <tt>%\#x</tt> command would do.
   - \c c  The \c int argument is converted to an \c "unsigned char", and the
           resulting character is written.
   - \c s  The \c "char *" argument is expected to be a pointer to an array
           of character type (pointer to a string).  Characters from
           the array are written up to (but not including) a
           terminating NUL character; if a precision is specified, no
           more than the number specified are written.  If a precision
           is given, no null character need be present; if the
           precision is not specified, or is greater than the size of
           the array, the array must contain a terminating NUL
           character.
   - \c %  A \c % is written.  No argument is converted.  The complete
           conversion specification is "%%".
   - \c eE The double argument is rounded and converted in the format
           \c "[-]d.ddde�dd" where there is one digit before the
           decimal-point character and the number of digits after it
           is equal to the precision; if the precision is missing, it
           is taken as 6; if the precision is zero, no decimal-point
           character appears.  An \e E conversion uses the letter \c 'E'
           (rather than \c 'e') to introduce the exponent.  The exponent
           always contains two digits; if the value is zero,
           the exponent is 00.
   - \c fF The double argument is rounded and converted to decimal notation
           in the format \c "[-]ddd.ddd", where the number of digits after the
           decimal-point character is equal to the precision specification.
           If the precision is missing, it is taken as 6; if the precision
           is explicitly zero, no decimal-point character appears.  If a
           decimal point appears, at least one digit appears before it.
   - \c gG The double argument is converted in style \c f or \c e (or
           \c F or \c E for \c G conversions).  The precision
           specifies the number of significant digits.  If the
           precision is missing, 6 digits are given; if the precision
           is zero, it is treated as 1.  Style \c e is used if the
           exponent from its conversion is less than -4 or greater
           than or equal to the precision.  Trailing zeros are removed
           from the fractional part of the result; a decimal point
           appears only if it is followed by at least one digit.
   - \c S  Similar to the \c s format, except the pointer is expected to
           point to a program-memory (ROM) string instead of a RAM string.

   In no case does a non-existent or small field width cause truncation of a
   numeric field; if the result of a conversion is wider than the field
   width, the field is expanded to contain the conversion result.

   Since the full implementation of all the mentioned features becomes
   fairly large, three different flavours of vfprintf() can be
   selected using linker options.  The default vfprintf() implements
   all the mentioned functionality except floating point conversions.
   A minimized version of vfprintf() is available that only implements
   the very basic integer and string conversion facilities, but only
   the \c # additional option can be specified using conversion
   flags (these flags are parsed correctly from the format
   specification, but then simply ignored).  This version can be
   requested using the following \ref gcc_minusW "compiler options":

   \code
   -Wl,-u,vfprintf -lprintf_min
   \endcode

   If the full functionality including the floating point conversions
   is required, the following options should be used:

   \code
   -Wl,-u,vfprintf -lprintf_flt -lm
   \endcode

   \par Limitations:
   - The specified width and precision can be at most 255.

   \par Notes:
   - For floating-point conversions, if you link default or minimized
     version of vfprintf(), the symbol \c ? will be output and double
     argument will be skiped. So you output below will not be crashed.
     For default version the width field and the "pad to left" ( symbol
     minus ) option will work in this case.
   - The \c hh length modifier is ignored (\c char argument is
     promouted to \c int). More exactly, this realization does not check
     the number of \c h symbols.
   - But the \c ll length modifier will to abort the output, as this
     realization does not operate \c long \c long arguments.
   - The variable width or precision field (an asterisk \c * symbol)
     is not realized and will to abort the output.

 */

extern int vfprintf(struct __file *__stream, const char *__fmt, va_list __ap);

/**
   Variant of \c vfprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int vfprintf_P(struct __file *__stream, const char *__fmt, va_list __ap);

/**
   The function \c fputc sends the character \c c (though given as type
   \c int) to \c stream.  It returns the character, or \c EOF in case
   an error occurred.
*/
extern int fputc(int __c, struct __file *__stream);



/* putc() function implementation, required by standard */
extern int putc(int __c, struct __file *__stream);

/* putchar() function implementation, required by standard */
extern int putchar(int __c);



/**
   The macro \c putc used to be a "fast" macro implementation with a
   functionality identical to fputc().  For space constraints, in
   \c avr-libc, it is just an alias for \c fputc.
*/


/**
   The macro \c putchar sends character \c c to \c stdout.
*/


/**
   The function \c printf performs formatted output to stream
   \c stdout.  See \c vfprintf() for details.
*/
extern int printf(const char *__fmt, ...);

/**
   Variant of \c printf() that uses a \c fmt string that resides
   in program memory.
*/
extern int printf_P(const char *__fmt, ...);

/**
   The function \c vprintf performs formatted output to stream
   \c stdout, taking a variable argument list as in vfprintf().

   See vfprintf() for details.
*/
extern int vprintf(const char *__fmt, va_list __ap);

/**
   Variant of \c printf() that sends the formatted characters
   to string \c s.
*/
extern int sprintf(char *__s, const char *__fmt, ...);

/**
   Variant of \c sprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int sprintf_P(char *__s, const char *__fmt, ...);

/**
   Like \c sprintf(), but instead of assuming \c s to be of infinite
   size, no more than \c n characters (including the trailing NUL
   character) will be converted to \c s.

   Returns the number of characters that would have been written to
   \c s if there were enough space.
*/
extern int snprintf(char *__s, size_t __n, const char *__fmt, ...);

/**
   Variant of \c snprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int snprintf_P(char *__s, size_t __n, const char *__fmt, ...);

/**
   Like \c sprintf() but takes a variable argument list for the
   arguments.
*/
extern int vsprintf(char *__s, const char *__fmt, va_list ap);

/**
   Variant of \c vsprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int vsprintf_P(char *__s, const char *__fmt, va_list ap);

/**
   Like \c vsprintf(), but instead of assuming \c s to be of infinite
   size, no more than \c n characters (including the trailing NUL
   character) will be converted to \c s.

   Returns the number of characters that would have been written to
   \c s if there were enough space.
*/
extern int vsnprintf(char *__s, size_t __n, const char *__fmt, va_list ap);

/**
   Variant of \c vsnprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int vsnprintf_P(char *__s, size_t __n, const char *__fmt, va_list ap);
/**
   The function \c fprintf performs formatted output to \c stream.
   See \c vfprintf() for details.
*/
extern int fprintf(struct __file *__stream, const char *__fmt, ...);

/**
   Variant of \c fprintf() that uses a \c fmt string that resides
   in program memory.
*/
extern int fprintf_P(struct __file *__stream, const char *__fmt, ...);

/**
   Write the string pointed to by \c str to stream \c stream.

   Returns 0 on success and EOF on error.
*/
extern int fputs(const char *__str, struct __file *__stream);

/**
   Variant of fputs() where \c str resides in program memory.
*/
extern int fputs_P(const char *__str, struct __file *__stream);

/**
   Write the string pointed to by \c str, and a trailing newline
   character, to \c stdout.
*/
extern int puts(const char *__str);

/**
   Variant of puts() where \c str resides in program memory.
*/
extern int puts_P(const char *__str);

/**
   Write \c nmemb objects, \c size bytes each, to \c stream.
   The first byte of the first object is referenced by \c ptr.

   Returns the number of objects successfully written, i. e.
   \c nmemb unless an output error occured.
 */
extern size_t fwrite(const void *__ptr, size_t __size, size_t __nmemb,
         struct __file *__stream);

/**
   The function \c fgetc reads a character from \c stream.  It returns
   the character, or \c EOF in case end-of-file was encountered or an
   error occurred.  The routines feof() or ferror() must be used to
   distinguish between both situations.
*/
extern int fgetc(struct __file *__stream);



/* getc() function implementation, required by standard */
extern int getc(struct __file *__stream);

/* getchar() function implementation, required by standard */
extern int getchar(void);



/**
   The macro \c getc used to be a "fast" macro implementation with a
   functionality identical to fgetc().  For space constraints, in
   \c avr-libc, it is just an alias for \c fgetc.
*/


/**
   The macro \c getchar reads a character from \c stdin.  Return
   values and error handling is identical to fgetc().
*/


/**
   The ungetc() function pushes the character \c c (converted to an
   unsigned char) back onto the input stream pointed to by \c stream.
   The pushed-back character will be returned by a subsequent read on
   the stream.

   Currently, only a single character can be pushed back onto the
   stream.
   
   The ungetc() function returns the character pushed back after the
   conversion, or \c EOF if the operation fails.  If the value of the
   argument \c c character equals \c EOF, the operation will fail and
   the stream will remain unchanged.
*/
extern int ungetc(int __c, struct __file *__stream);

/**
   Read at most <tt>size - 1</tt> bytes from \c stream, until a
   newline character was encountered, and store the characters in the
   buffer pointed to by \c str.  Unless an error was encountered while
   reading, the string will then be terminated with a \c NUL
   character.

   If an error was encountered, the function returns NULL and sets the
   error flag of \c stream, which can be tested using ferror().
   Otherwise, a pointer to the string will be returned.  */
extern char *fgets(char *__str, int __size, struct __file *__stream);

/**
   Similar to fgets() except that it will operate on stream \c stdin,
   and the trailing newline (if any) will not be stored in the string.
   It is the caller's responsibility to provide enough storage to hold
   the characters read.  */
extern char *gets(char *__str);

/**
   Read \c nmemb objects, \c size bytes each, from \c stream,
   to the buffer pointed to by \c ptr.

   Returns the number of objects successfully read, i. e.
   \c nmemb unless an input error occured or end-of-file was
   encountered.  feof() and ferror() must be used to distinguish
   between these two conditions.
 */
extern size_t fread(void *__ptr, size_t __size, size_t __nmemb,
        struct __file *__stream);

/**
   Clear the error and end-of-file flags of \c stream.
 */
extern void clearerr(struct __file *__stream);


/* fast inlined version of clearerr() */



/**
   Test the end-of-file flag of \c stream.  This flag can only be cleared
   by a call to clearerr().
 */
extern int feof(struct __file *__stream);


/* fast inlined version of feof() */



/**
   Test the error flag of \c stream.  This flag can only be cleared
   by a call to clearerr().
 */
extern int ferror(struct __file *__stream);


/* fast inlined version of ferror() */



extern int vfscanf(struct __file *__stream, const char *__fmt, va_list __ap);

/**
   Variant of vfscanf() using a \c fmt string in program memory.
 */
extern int vfscanf_P(struct __file *__stream, const char *__fmt, va_list __ap);

/**
   The function \c fscanf performs formatted input, reading the
   input data from \c stream.

   See vfscanf() for details.
 */
extern int fscanf(struct __file *__stream, const char *__fmt, ...);

/**
   Variant of fscanf() using a \c fmt string in program memory.
 */
extern int fscanf_P(struct __file *__stream, const char *__fmt, ...);

/**
   The function \c scanf performs formatted input from stream \c stdin.

   See vfscanf() for details.
 */
extern int scanf(const char *__fmt, ...);

/**
   Variant of scanf() where \c fmt resides in program memory.
 */
extern int scanf_P(const char *__fmt, ...);

/**
   The function \c vscanf performs formatted input from stream
   \c stdin, taking a variable argument list as in vfscanf().

   See vfscanf() for details.
*/
extern int vscanf(const char *__fmt, va_list __ap);

/**
   The function \c sscanf performs formatted input, reading the
   input data from the buffer pointed to by \c buf.

   See vfscanf() for details.
 */
extern int sscanf(const char *__buf, const char *__fmt, ...);

/**
   Variant of sscanf() using a \c fmt string in program memory.
 */
extern int sscanf_P(const char *__buf, const char *__fmt, ...);
# 938 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdio.h" 3
static __inline__ int fflush(struct __file *stream __attribute__((unused)))
{
 return 0;
}



}


/*@}*/

/*
 * The following constants are currently not used by avr-libc's
 * stdio subsystem.  They are defined here since the gcc build
 * environment expects them to be here.
 */
# 33 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/stdlib.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2007 Joerg Wunsch

   Portions of documentation Copyright (c) 1990, 1991, 1993, 1994
   The Regents of the University of California.

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

  $Id$
*/
# 34 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/string.h" 1 3
/* Copyright (c) 2002,2007 Marek Michalkiewicz
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   string.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
 */
# 35 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/inttypes.h" 1 3
/* Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2005, Carlos Lamas
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 36 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2

# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/util/delay.h" 1 3
/* Copyright (c) 2002, Marek Michalkiewicz
   Copyright (c) 2004,2005,2007 Joerg Wunsch
   Copyright (c) 2007  Florin-Viorel Petrov
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 38 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/pgmspace.h" 1 3
/* Copyright (c) 2002-2007  Marek Michalkiewicz
   Copyright (c) 2006, Carlos Lamas
   Copyright (c) 2009-2010, Jan Waclawek
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/*
   pgmspace.h

   Contributors:
     Created by Marek Michalkiewicz <marekm@linux.org.pl>
     Eric B. Weddington <eric@ecentral.com>
     Wolfgang Haidinger <wh@vmars.tuwien.ac.at> (pgm_read_dword())
     Ivanov Anton <anton@arc.com.ru> (pgm_read_float())
 */

/** \file */
/** \defgroup avr_pgmspace <avr/pgmspace.h>: Program Space Utilities
    \code
    #include <avr/io.h>
    #include <avr/pgmspace.h>
    \endcode

    The functions in this module provide interfaces for a program to access
    data stored in program space (flash memory) of the device.  In order to
    use these functions, the target device must support either the \c LPM or
    \c ELPM instructions.

    \note These functions are an attempt to provide some compatibility with
    header files that come with IAR C, to make porting applications between
    different compilers easier.  This is not 100% compatibility though (GCC
    does not have full support for multiple address spaces yet).

    \note If you are working with strings which are completely based in ram,
    use the standard string functions described in \ref avr_string.

    \note If possible, put your constant tables in the lower 64 KB and use
    pgm_read_byte_near() or pgm_read_word_near() instead of
    pgm_read_byte_far() or pgm_read_word_far() since it is more efficient that
    way, and you can still use the upper 64K for executable code.
    All functions that are suffixed with a \c _P \e require their
    arguments to be in the lower 64 KB of the flash ROM, as they do
    not use ELPM instructions.  This is normally not a big concern as
    the linker setup arranges any program space constants declared
    using the macros from this header file so they are placed right after
    the interrupt vectors, and in front of any executable code.  However,
    it can become a problem if there are too many of these constants, or
    for bootloaders on devices with more than 64 KB of ROM.
    <em>All these functions will not work in that situation.</em>

    \note For <b>Xmega</b> devices, make sure the NVM controller
    command register (\c NVM.CMD or \c NVM_CMD) is set to 0x00 (NOP)
    before using any of these functions.
*/
# 39 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/eeprom.h" 1 3
/* Copyright (c) 2002, 2003, 2004, 2007 Marek Michalkiewicz
   Copyright (c) 2005, 2006 Bjoern Haase
   Copyright (c) 2008 Atmel Corporation
   Copyright (c) 2008 Wouter van Gulik
   Copyright (c) 2009 Dmitry Xmelkov
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 40 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/interrupt.h" 1 3
/* Copyright (c) 2002,2005,2007 Marek Michalkiewicz
   Copyright (c) 2007, Dean Camera

   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */
# 41 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2


# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/fastio.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
  This code contributed by Triffid_Hunter and modified by Kliment
  why double up on these macros? see http://gcc.gnu.org/onlinedocs/cpp/Stringification.html
*/




# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/tools/avr/avr/include/avr/io.h" 1 3
/* Copyright (c) 2002,2003,2005,2006,2007 Marek Michalkiewicz, Joerg Wunsch
   Copyright (c) 2007 Eric B. Weddington
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:

   * Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.

   * Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.

   * Neither the name of the copyright holders nor the names of
     contributors may be used to endorse or promote products derived
     from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE. */

/* $Id$ */

/** \file */
/** \defgroup avr_io <avr/io.h>: AVR device-specific IO definitions
    \code #include <avr/io.h> \endcode

    This header file includes the apropriate IO definitions for the
    device that has been specified by the <tt>-mmcu=</tt> compiler
    command-line switch.  This is done by diverting to the appropriate
    file <tt>&lt;avr/io</tt><em>XXXX</em><tt>.h&gt;</tt> which should
    never be included directly.  Some register names common to all
    AVR devices are defined directly within <tt>&lt;avr/common.h&gt;</tt>,
    which is included in <tt>&lt;avr/io.h&gt;</tt>,
    but most of the details come from the respective include file.

    Note that this file always includes the following files:
    \code 
    #include <avr/sfr_defs.h>
    #include <avr/portpins.h>
    #include <avr/common.h>
    #include <avr/version.h>
    \endcode
    See \ref avr_sfr for more details about that header file.

    Included are definitions of the IO register set and their
    respective bit values as specified in the Atmel documentation.
    Note that inconsistencies in naming conventions,
    so even identical functions sometimes get different names on
    different devices.

    Also included are the specific names useable for interrupt
    function definitions as documented
    \ref avr_signames "here".

    Finally, the following macros are defined:

    - \b RAMEND
    <br>
    The last on-chip RAM address.
    <br>
    - \b XRAMEND
    <br>
    The last possible RAM location that is addressable. This is equal to 
    RAMEND for devices that do not allow for external RAM. For devices 
    that allow external RAM, this will be larger than RAMEND.
    <br>
    - \b E2END
    <br>
    The last EEPROM address.
    <br>
    - \b FLASHEND
    <br>
    The last byte address in the Flash program space.
    <br>
    - \b SPM_PAGESIZE
    <br>
    For devices with bootloader support, the flash pagesize
    (in bytes) to be used for the \c SPM instruction. 
    - \b E2PAGESIZE
    <br>
    The size of the EEPROM page.
    
*/
# 32 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/fastio.h" 2

/**
  utility functions
*/





/**
  magic I/O routines
  now you can simply SET_OUTPUT(STEP); WRITE(STEP, 1); WRITE(STEP, 0);
*/

/// Read a pin

/// write to a pin
// On some boards pins > 0x100 are used. These are not converted to atomic actions. An critical section is needed.
# 68 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/fastio.h"
/// toggle a pin


/// set pin as input

/// set pin as output


/// check if pin is an input

/// check if pin is an output


/// check if pin is an timer


//  why double up on these macros? see http://gcc.gnu.org/onlinedocs/cpp/Stringification.html

/// Read a pin wrapper

/// Write to a pin wrapper


/// toggle a pin wrapper


/// set pin as input wrapper

/// set pin as output wrapper


/// check if pin is an input wrapper

/// check if pin is an output wrapper


/// check if pin is an timer wrapper


// Shorthand


/**
  ports and functions

  added as necessary or if I feel like it- not a comprehensive list!
*/
# 955 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/fastio.h"
  // UART



  // SPI





  // TWI (I2C)



  // timers and PWM
# 986 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/fastio.h"
  // change for your board


  /**
  pins
  */
# 44 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Configuration.h
 *
 * Basic settings such as:
 *
 * - Type of electronics
 * - Type of temperature sensor
 * - Printer geometry
 * - Endstop configuration
 * - LCD controller
 * - Extra features
 *
 * Advanced settings can be found in Configuration_adv.h
 *
 */
# 45 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/pins.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
# 46 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2





# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 52 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2

typedef unsigned long millis_t;

// Arduino < 1.0.0 does not define this, so we need to do it ourselves
# 64 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h"
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/MarlinSerial.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
  HardwareSerial.h - Hardware serial library for Wiring
  Copyright (c) 2006 Nicholas Zambetti.  All right reserved.

  Modified 28 September 2010 by Mark Sproul
*/



# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
# 33 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/MarlinSerial.h" 2
# 44 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/MarlinSerial.h"
// The presence of the UBRRH register is used to detect a UART.




// These are macros to build serial port register names for the selected SERIAL_PORT (C preprocessor
// requires two levels of indirection to expand macro values properly)







// Registers used by MarlinSerial class (these are expanded
// depending on selected serial port
# 82 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/MarlinSerial.h"
// Define constants and variables for buffering incoming serial data.  We're
// using a ring buffer (I think), in which rx_buffer_head is the index of the
// location to which to write the next incoming character and rx_buffer_tail
// is the index of the location from which to read.
// 256 is the max limit due to uint8_t head and tail. Use only powers of 2. (...,16,32,64,128,256)







struct ring_buffer {
  unsigned char buffer[128];
  volatile uint8_t head;
  volatile uint8_t tail;
};


  extern ring_buffer rx_buffer;


class MarlinSerial { //: public Stream

  public:
    MarlinSerial();
    void begin(long);
    void end();
    int peek(void);
    int read(void);
    void flush(void);

    __attribute__((always_inline)) inline uint8_t available(void) {
      unsigned char _sreg = (*(volatile uint8_t *)((0x3F) + 0x20)); __asm__ __volatile__ ("cli" ::: "memory");;
        uint8_t h = rx_buffer.head;
        uint8_t t = rx_buffer.tail;
      (*(volatile uint8_t *)((0x3F) + 0x20)) = _sreg;;
      return (uint8_t)(128 + h - t) & (128 - 1);
    }

    __attribute__((always_inline)) inline void write(uint8_t c) {
      while (!((((*(volatile uint8_t *)(0xC0)) /* defines M_UCSRxA to be UCSRnA where n is the serial port number*/)&(1 << (5)))!=0))
        ;
      (*(volatile uint8_t *)(0XC6)) = c;
    }

    __attribute__((always_inline)) inline void checkRx(void) {
      if (((((*(volatile uint8_t *)(0xC0)) /* defines M_UCSRxA to be UCSRnA where n is the serial port number*/)&(1 << (7)))!=0)) {
        unsigned char c = (*(volatile uint8_t *)(0XC6));
        unsigned char _sreg = (*(volatile uint8_t *)((0x3F) + 0x20)); __asm__ __volatile__ ("cli" ::: "memory");;
          uint8_t h = rx_buffer.head;
          uint8_t i = (uint8_t)(h + 1) & (128 - 1);

          // if we should be storing the received character into the location
          // just before the tail (meaning that the head would advance to the
          // current location of the tail), we're about to overflow the buffer
          // and so we don't write the character or advance the head.
          if (i != rx_buffer.tail) {
            rx_buffer.buffer[h] = c;
            rx_buffer.head = i;
          }
        (*(volatile uint8_t *)((0x3F) + 0x20)) = _sreg;;
      }
    }

  private:
    void printNumber(unsigned long, uint8_t);
    void printFloat(double, uint8_t);

  public:
    __attribute__((always_inline)) inline void write(const char* str) { while (*str) write(*str++); }
    __attribute__((always_inline)) inline void write(const uint8_t* buffer, size_t size) { while (size--) write(*buffer++); }
    __attribute__((always_inline)) inline void print(const String& s) { for (int i = 0; i < (int)s.length(); i++) write(s[i]); }
    __attribute__((always_inline)) inline void print(const char* str) { write(str); }

    void print(char, int = 0);
    void print(unsigned char, int = 0);
    void print(int, int = 10);
    void print(unsigned int, int = 10);
    void print(long, int = 10);
    void print(unsigned long, int = 10);
    void print(double, int = 2);

    void println(const String& s);
    void println(const char[]);
    void println(char, int = 0);
    void println(unsigned char, int = 0);
    void println(int, int = 10);
    void println(unsigned int, int = 10);
    void println(long, int = 10);
    void println(unsigned long, int = 10);
    void println(double, int = 2);
    void println(void);
};

extern MarlinSerial customizedSerial;


// Use the UART for Bluetooth in AT90USB configurations
# 65 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2

# 1 "/home/aleph/phabricator_firmware/marlin-ssh/ArduinoAddons/Arduino_1.6.x/hardware/arduino/avr/cores/arduino/WString.h" 1
/*
  WString.h - String library for Wiring & Arduino
  ...mostly rewritten by Paul Stoffregen...
  Copyright (c) 2009-10 Hernando Barragan.  All right reserved.
  Copyright 2011, Paul Stoffregen, paul@pjrc.com

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 67 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2

# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/stopwatch.h" 1
/*
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */




# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/macros.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
# 27 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/stopwatch.h" 2

// Print debug messages with M111 S2 (Uses 156 bytes of PROGMEM)
//#define DEBUG_STOPWATCH

enum StopwatchState {
  STPWTCH_STOPPED,
  STPWTCH_RUNNING,
  STPWTCH_PAUSED
};

/**
 * @brief Stopwatch class
 * @details This class acts as a timer proving stopwatch functionality including
 * the ability to pause the running time counter.
 */
class Stopwatch {
  private:
    StopwatchState state;
    uint16_t accumulator;
    uint32_t startTimestamp;
    uint32_t stopTimestamp;

  public:
    /**
     * @brief Class constructor
     */
    Stopwatch();

    /**
     * @brief Stops the stopwatch
     * @details Stops the running timer, it will silently ignore the request if
     * no timer is currently running.
     */
    void stop();

    /**
     * @brief Pauses the stopwatch
     * @details Pauses the running timer, it will silently ignore the request if
     * no timer is currently running.
     */
    void pause();

    /**
     * @brief Starts the stopwatch
     * @details Starts the timer, it will silently ignore the request if the
     * timer is already running.
     */
    void start();

    /**
     * @brief Resets the stopwatch
     * @details Resets all settings to their default values.
     */
    void reset();

    /**
     * @brief Checks if the timer is running
     * @details Returns true if the timer is currently running, false otherwise.
     * @return bool
     */
    bool isRunning();

    /**
     * @brief Checks if the timer is paused
     * @details Returns true if the timer is currently paused, false otherwise.
     * @return bool
     */
    bool isPaused();

    /**
     * @brief Gets the running time
     * @details Returns the total number of seconds the timer has been running.
     * @return uint16_t
     */
    uint16_t duration();
# 112 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/stopwatch.h"
};
# 69 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h" 2
# 91 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h"
extern const char errormagic[] __attribute__((__progmem__));
extern const char echomagic[] __attribute__((__progmem__));
# 108 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h"
void serial_echopair_P(const char* s_P, int v);
void serial_echopair_P(const char* s_P, long v);
void serial_echopair_P(const char* s_P, float v);
void serial_echopair_P(const char* s_P, double v);
void serial_echopair_P(const char* s_P, unsigned long v);
__attribute__((always_inline)) inline void serial_echopair_P(const char* s_P, bool v) { serial_echopair_P(s_P, (int)v); }
__attribute__((always_inline)) inline void serial_echopair_P(const char* s_P, void *v) { serial_echopair_P(s_P, (unsigned long)v); }

// Things to write to serial from Program memory. Saves 400 to 2k of RAM.
__attribute__((always_inline)) inline void serialprintPGM(const char* str) {
  char ch;
  while ((ch = (__extension__({ uint16_t __addr16 = (uint16_t)((uint16_t)(str)); uint8_t __result; __asm__ __volatile__ ( "lpm %0, Z" "\n\t" : "=r" (__result) : "z" (__addr16) ); __result; })))) {
    customizedSerial.write(ch);
    str++;
  }
}

void idle(



);

void manage_inactivity(bool ignore_stepper_queue = false);
# 202 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h"
/**
 * The axis order in all axis related arrays is X, Y, Z, E
 */


/**
 * Axis indices as enumerated constants
 *
 * A_AXIS and B_AXIS are used by COREXY printers
 * X_HEAD and Y_HEAD is used for systems that don't have a 1:1 relationship between X_AXIS and X Head movement, like CoreXY bots.
 */
enum AxisEnum {X_AXIS = 0, A_AXIS = 0, Y_AXIS = 1, B_AXIS = 1, Z_AXIS = 2, C_AXIS = 2, E_AXIS = 3, X_HEAD = 4, Y_HEAD = 5, Z_HEAD = 5};

enum EndstopEnum {X_MIN = 0, Y_MIN = 1, Z_MIN = 2, Z_MIN_PROBE = 3, X_MAX = 4, Y_MAX = 5, Z_MAX = 6, Z2_MIN = 7, Z2_MAX = 8};

void enable_all_steppers();
void disable_all_steppers();

void FlushSerialRequestResend();
void ok_to_send();

void reset_bed_level();
void prepare_move();
void kill(const char*);





/**
 * Debug flags - not yet widely applied
 */
enum DebugFlags {
  DEBUG_NONE = 0,
  DEBUG_ECHO = (1 << (0)), ///< Echo commands in order as they are processed
  DEBUG_INFO = (1 << (1)), ///< Print messages for code that has debug output
  DEBUG_ERRORS = (1 << (2)), ///< Not implemented
  DEBUG_DRYRUN = (1 << (3)), ///< Ignore temperature setting and E movement commands
  DEBUG_COMMUNICATION = (1 << (4)), ///< Not implemented
  DEBUG_LEVELING = (1 << (5)) ///< Print detailed output for homing and leveling
};
extern uint8_t marlin_debug_flags;


extern bool Running;
inline bool IsRunning() { return Running; }
inline bool IsStopped() { return !Running; }

bool enqueue_and_echo_command(const char* cmd, bool say_ok=false); //put a single ASCII command at the end of the current buffer or return false when it is full
void enqueue_and_echo_command_now(const char* cmd); // enqueue now, only return when the command has been enqueued
void enqueue_and_echo_commands_P(const char* cmd); //put one or many ASCII commands at the end of the current buffer, read from flash

void prepare_arc_move(char isclockwise);
void clamp_to_software_endstops(float target[3]);

extern millis_t previous_cmd_ms;
inline void refresh_cmd_timeout() { previous_cmd_ms = millis(); }


  void setPwmFrequency(uint8_t pin, int val);







extern bool axis_relative_modes[];
extern int feedrate_multiplier;
extern bool volumetric_enabled;
extern int extruder_multiplier[1]; // sets extrude multiply factor (in percent) for each extruder individually
extern float filament_size[1]; // cross-sectional area of filament (in millimeters), typically around 1.75 or 2.85, 0 disables the volumetric calculations for the extruder.
extern float volumetric_multiplier[1]; // reciprocal of cross-sectional area of filament (in square millimeters), stored this way to reduce computational burden in planner
extern float current_position[4];
extern float home_offset[3]; // axis[n].home_offset
extern bool rxbuf_filled;
extern float sw_endstop_min[3]; // axis[n].sw_endstop_min
extern float sw_endstop_max[3]; // axis[n].sw_endstop_max
extern bool axis_known_position[3]; // axis[n].is_known
extern bool axis_homed[3]; // axis[n].is_homed
# 327 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h"
  extern float zprobe_zoffset;







  extern float extrude_min_temp;



  extern int fanSpeeds[1];
# 357 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h"
  extern int lpq_len;
# 367 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.h"
// Print job timer
extern Stopwatch print_job_timer;

// Handling multiple extruders pins
extern uint8_t active_extruder;







  void print_heaterstates();


extern void calculate_volumetric_multipliers();
# 27 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/thermistortables.h" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/macros.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
# 28 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/thermistortables.h" 2
# 196 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/thermistortables.h"
const short temptable_5[][2] __attribute__((__progmem__)) = {
  // ATC Semitec 104GT-2 (Used in ParCan)
  // Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
  // Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
  {1 * 16, 713},
  {17 * 16, 300}, //top rating 300C
  {20 * 16, 290},
  {23 * 16, 280},
  {27 * 16, 270},
  {31 * 16, 260},
  {37 * 16, 250},
  {43 * 16, 240},
  {51 * 16, 230},
  {61 * 16, 220},
  {73 * 16, 210},
  {87 * 16, 200},
  {106 * 16, 190},
  {128 * 16, 180},
  {155 * 16, 170},
  {189 * 16, 160},
  {230 * 16, 150},
  {278 * 16, 140},
  {336 * 16, 130},
  {402 * 16, 120},
  {476 * 16, 110},
  {554 * 16, 100},
  {635 * 16, 90},
  {713 * 16, 80},
  {784 * 16, 70},
  {846 * 16, 60},
  {897 * 16, 50},
  {937 * 16, 40},
  {966 * 16, 30},
  {986 * 16, 20},
  {1000 * 16, 10},
  {1010 * 16, 0}
};
# 279 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/thermistortables.h"
const short temptable_7[][2] __attribute__((__progmem__)) = {
  {1 * 16, 941},
  {19 * 16, 362},
  {37 * 16, 299}, //top rating 300C
  {55 * 16, 266},
  {73 * 16, 245},
  {91 * 16, 229},
  {109 * 16, 216},
  {127 * 16, 206},
  {145 * 16, 197},
  {163 * 16, 190},
  {181 * 16, 183},
  {199 * 16, 177},
  {217 * 16, 171},
  {235 * 16, 166},
  {253 * 16, 162},
  {271 * 16, 157},
  {289 * 16, 153},
  {307 * 16, 149},
  {325 * 16, 146},
  {343 * 16, 142},
  {361 * 16, 139},
  {379 * 16, 135},
  {397 * 16, 132},
  {415 * 16, 129},
  {433 * 16, 126},
  {451 * 16, 123},
  {469 * 16, 121},
  {487 * 16, 118},
  {505 * 16, 115},
  {523 * 16, 112},
  {541 * 16, 110},
  {559 * 16, 107},
  {577 * 16, 105},
  {595 * 16, 102},
  {613 * 16, 99},
  {631 * 16, 97},
  {649 * 16, 94},
  {667 * 16, 92},
  {685 * 16, 89},
  {703 * 16, 86},
  {721 * 16, 84},
  {739 * 16, 81},
  {757 * 16, 78},
  {775 * 16, 75},
  {793 * 16, 72},
  {811 * 16, 69},
  {829 * 16, 66},
  {847 * 16, 62},
  {865 * 16, 59},
  {883 * 16, 55},
  {901 * 16, 51},
  {919 * 16, 46},
  {937 * 16, 41},
  {955 * 16, 35},
  {973 * 16, 27},
  {991 * 16, 17},
  {1009 * 16, 1},
  {1023 * 16, 0} //to allow internal 0 degrees C
};
# 1084 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/thermistortables.h"
// Pt1000 and Pt100 handling
//
// Rt=R0*(1+a*T+b*T*T) [for T>0]
// a=3.9083E-3, b=-5.775E-7
# 1187 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/thermistortables.h"
//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
# 1210 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/thermistortables.h"
//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
# 1233 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/thermistortables.h"
//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
# 1256 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/thermistortables.h"
//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
# 1276 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/thermistortables.h"
//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
# 1154 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Configuration.h" 2
# 38 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.ino.cpp" 2
# 1 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/pins.h" 1
/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
# 39 "/home/aleph/phabricator_firmware/marlin-ssh/Marlin/obj/sketch/Marlin.ino.cpp" 2
