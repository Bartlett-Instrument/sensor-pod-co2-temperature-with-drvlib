/*
 * error_codes.h
 *
 *  Created on: Sep 24, 2015
 *      Author: steve
 */

#ifndef CB15024DB_ERROR_CODES_H_
#define CB15024DB_ERROR_CODES_H_

#include <stdint.h>
//#include "driverlib.h"

// +-------------------------+
// | Macros                  |
// +-------------------------+

#define    Set_Error_Idle_Mismatch			ERROR_VALUE = 49  //mode is idle but op_mode firing
#define    Set_Error_Firing_Mismatch		ERROR_VALUE = 50 // mode is firing but op_mode is idle
#define    Highest_Error_Value		65		//record the highest error value that appears in the above description table

#define Error_0                 ERROR_VALUE == 0
#define Error_1                 ERROR_VALUE == 1
#define Error_2                 ERROR_VALUE == 2
#define Error_3                 ERROR_VALUE == 3
#define Error_4                 ERROR_VALUE == 4
#define Error_5                 ERROR_VALUE == 5
#define Error_6                 ERROR_VALUE == 6
#define Error_7                 ERROR_VALUE == 7
#define Error_8                 ERROR_VALUE == 8
#define Error_DASH              ERROR_VALUE == 9
#define Error_D                 ERROR_VALUE == 10
#define Error_E                 ERROR_VALUE == 11
#define Error_A                 (ERROR_VALUE >= 58 && ERROR_VALUE <=62)
#define Error_P                 ERROR_VALUE == 13
#define Error_R                 ERROR_VALUE == 14
#define Error_BOARD_TEMP        ERROR_VALUE == 15
#define LOCK_Error              ERROR_VALUE == 16
#define A2D_Error_CHIP          ERROR_VALUE == 17
#define A2D_Error_BB            ERROR_VALUE == 18
#define SPI_Error               ERROR_VALUE == 19
#define Write_Busy_Error        ERROR_VALUE == 20
#define A2D_Error_TIMEOUT       ERROR_VALUE == 21
#define Thermocouple_Error      ERROR_VALUE == 22
#define Error_I                 ERROR_VALUE == 23
#define Error_Division_Zero     ERROR_VALUE == 24
#define Error_Stuck             ERROR_VALUE == 25
#define Error_N                 ERROR_VALUE == 26
#define Error_A2D_Data          ERROR_VALUE == 27
#define Error_D1                ERROR_VALUE == 31
#define Error_D2                ERROR_VALUE == 32
#define Error_D3                ERROR_VALUE == 33
#define Error_DX                ERROR_VALUE == 34
//#define complete                ERROR_VALUE == 35 *** removed, not an error code, 'Complete' is handled by opmode
#define Error_TC_Failed			ERROR_VALUE == 36    //fail and firing stopped, or all 3 failed

#define Cap_Coup_Not_firing     ERROR_VALUE == 37
#define Illegal_Cone_Corr       ERROR_VALUE == 38
#define WDT                     ERROR_VALUE == 39
#define Amps_Not_Firing         ERROR_VALUE == 40
#define Illegal_Ceramic_Spd     ERROR_VALUE == 41
#define Error_6all              ERROR_VALUE == 42
#define Error_6Z12            ERROR_VALUE == 43
#define Error_6Z2             ERROR_VALUE == 44
#define Error_6Z3             ERROR_VALUE == 45
#define Error_6Z1             ERROR_VALUE == 46
#define Error_6Z32            ERROR_VALUE == 47
#define Error_6Z13            ERROR_VALUE == 48
#define Error_Idle_Mismatch           ERROR_VALUE == 49
#define Error_Firing_Mismatch           ERROR_VALUE == 50
#define Error_OLD_STAGE_OOB           ERROR_VALUE == 51
#define NL_Cal_TO           ERROR_VALUE == 52
#define FL_Cal_TO           ERROR_VALUE == 53
#define Error_1_Lid_Open		ERROR_VALUE == 54 // error 1 occurred with lid open
#define Error_3_Lid_Open		ERROR_VALUE == 55 // error 3 occurred with lid open
#define Error_5_Lid_Open		ERROR_VALUE == 56 // error 5 occurred with lid open
#define Error_8_Lid_Open		ERROR_VALUE == 57 // error 8 occurred with lid open
#define Error_AT                ERROR_VALUE == 58 // settings error - temperature above max, bad cone correlate or ramp rate 0
#define Error_AU                ERROR_VALUE == 59 // settings error - user program number out of range
#define Error_AO                ERROR_VALUE == 60 // settings error - offset out of range
#define Error_AP                ERROR_VALUE == 61 // settings error - max program temp too high
#define Error_AG                ERROR_VALUE == 62 // settings error - glass setting out of range
#define Error_Soft_WDT          ERROR_VALUE == 63 // soft watch dog error
#define Error_Temp_Deviation    ERROR_VALUE == 64 // temperature deviation error
#define Error_Burn_Ignition		ERROR_VALUE == 65 // burn out ignition error


#define No_Error                ERROR_VALUE == 0xff


#define Set_Error_0             ERROR_VALUE = 0
#define Set_Error_1             ERROR_VALUE = 1
#define Set_Error_2             ERROR_VALUE = 2
#define Set_Error_3             ERROR_VALUE = 3
#define Set_Error_4             ERROR_VALUE = 4
#define Set_Error_5             ERROR_VALUE = 5
#define Set_Error_6             ERROR_VALUE = 6
#define Set_Error_7             ERROR_VALUE = 7
#define Set_Error_8             ERROR_VALUE = 8
#define Set_Error_DASH          ERROR_VALUE = 9
#define Set_Error_D             ERROR_VALUE = 10
#define Set_Error_E             ERROR_VALUE = 11
#define Set_Error_A             ERROR_VALUE = 12
#define Set_Error_P             ERROR_VALUE = 13
#define Set_Error_R             ERROR_VALUE = 14
#define Set_Error_BOARD_TEMP    ERROR_VALUE = 15
#define Set_Ext_Osc_Error       ERROR_VALUE = 16
#define Set_A2D_Error_CHIP      ERROR_VALUE = 17
#define Set_A2D_Error_BB        ERROR_VALUE = 18
#define Set_SPI_Error           ERROR_VALUE = 19
#define Set_Write_Busy_Error    ERROR_VALUE = 20
#define Set_A2D_Error_TIMEOUT   ERROR_VALUE = 21
#define Set_Thermocouple_Error  ERROR_VALUE = 22
#define Set_Int_Osc_Error       ERROR_VALUE = 23
#define Set_Error_Division_Zero ERROR_VALUE = 24
#define Set_Error_Stuck         ERROR_VALUE = 25
#define Set_Error_N             ERROR_VALUE = 26
#define Set_Error_A2D_Data      ERROR_VALUE = 27
#define Set_Error_D1            ERROR_VALUE = 31
#define Set_Error_D2            ERROR_VALUE = 32
#define Set_Error_D3            ERROR_VALUE = 33
#define Set_Error_DX            ERROR_VALUE = 34
//#define Set_Complete            ERROR_VALUE = 35 *** removed, not an error code, 'Complete' is handled by opmode
#define Set_Error_TC_Failed		ERROR_VALUE = 36  //set to fail and firing stopped

#define Set_Cap_Coup_Not_firing ERROR_VALUE = 37
#define Set_Illegal_Cone_Corr   ERROR_VALUE = 38
#define Set_WDT                 ERROR_VALUE = 39
#define Set_Amps_Not_Firing     ERROR_VALUE = 40
#define Set_Illegal_Ceramic_Spd     ERROR_VALUE = 41
#define Set_Error_6all              ERROR_VALUE = 42
#define Set_Error_6Z12            ERROR_VALUE = 43
#define Set_Error_6Z2             ERROR_VALUE = 44
#define Set_Error_6Z3             ERROR_VALUE = 45
#define Set_Error_6Z1            ERROR_VALUE = 46
#define Set_Error_6Z32           ERROR_VALUE = 47
#define Set_Error_6Z13           ERROR_VALUE = 48
#define Set_Error_Idle_Mismatch           ERROR_VALUE = 49  //mode is idle but op_mode firing
#define Set_Error_Firing_Mismatch           ERROR_VALUE = 50 // mode is firing but op_mode is idle
#define Set_Error_OLD_STAGE_OOB           ERROR_VALUE = 51
#define Set_NL_Cal_TO           ERROR_VALUE = 52
#define Set_FL_Cal_TO           ERROR_VALUE = 53
#define Set_Error_1_Lid_Open		ERROR_VALUE = 54 // error 1 occurred with lid open
#define Set_Error_3_Lid_Open		ERROR_VALUE = 55 // error 3 occurred with lid open
#define Set_Error_5_Lid_Open		ERROR_VALUE = 56 // error 5 occurred with lid open
#define Set_Error_8_Lid_Open		ERROR_VALUE = 57 // error 8 occurred with lid open
#define Set_Error_AT                ERROR_VALUE = 58 // settings error - temperature above max or bad cone correlate
#define Set_Error_AU                ERROR_VALUE = 59 // settings error - user program number out of range
#define Set_Error_AO                ERROR_VALUE = 60 // settings error - offset out of range
#define Set_Error_AP                ERROR_VALUE = 61 // settings error - max program temp too high
#define Set_Error_AG                ERROR_VALUE = 62 // settings error - glass setting out of range
#define Set_Error_Soft_WDT          ERROR_VALUE = 63 // soft watch dog error
#define Set_Error_Temp_Deviation    ERROR_VALUE = 64 // temperature deviation error
#define Set_Error_Burn_Ignition		ERROR_VALUE = 65 // burn out ignition error

#define Set_No_Error            ERROR_VALUE = 0xff
#define ALLOWABLE_RAM_ERROR     2

#define Temp_Dev_Error_Block_Time	30	//temperature deviation error is blocked for this number of seconds after going to idle


// +-------------------------+
// | Type definitions        |
// +-------------------------+

// structure for error descriptions
typedef struct {
    char *brief;	//brief description
    char *verbose;	//long description
} error_desc;


// +-------------------------+
// | Global variable externed       |
// +-------------------------+

extern uint8_t ERROR_VALUE;     //ff is no error. last_error_values hold value on eeprom

// +-------------------------+
// | Global constants        |
// +-------------------------+

extern const error_desc ERROR_STR[];

// +-------------------------+
// | Functions               |
// +-------------------------+

void get_error_string(char *str, uint8_t str_len, uint8_t error);


#endif /* CB15024DB_ERROR_CODES_H_ */
