// Copyright 2022 Cássio Ávila (@toniz4)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define DIRECT_PINS {{A5,  A6, A7,  B0,  B1}, \
                     {A0,  A1, A2,  A3,  A4}, \
                     {B4,  B3, A15, A8,  B15}, \
                     {B5,  B8, B9,  NO_PIN, NO_PIN}}

#define DIRECT_PINS_RIGHT {{B12, B13, B14, B15, A8}, \
                           {A15, B3,  B4,  B5,  B8}, \
                           {A7,  A6,  A5,  A4,  A3}, \
                           {A0,  A1,  A2,  NO_PIN, NO_PIN}}

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN B6     // USART TX pin
#define SERIAL_USART_RX_PIN B7     // USART RX pin

/* Top left key on left half */
#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0
/* Top right key on right half */
#define BOOTMAGIC_LITE_ROW_RIGHT    4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 5

#define TAPPING_TERM 200
/* #define SPLIT_HAND_PIN B10 */
/* #define	SPLIT_HAND_PIN_LOW_IS_LEFT */

/* #define SERIAL_USART_PIN_SWAP */

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
