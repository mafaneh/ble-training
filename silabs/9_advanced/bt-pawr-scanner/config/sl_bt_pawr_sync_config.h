/***************************************************************************//**
 * @file
 * @brief Bluetooth PAwR Synchronizer configuration
 *******************************************************************************
 * # License
 * <b>Copyright 2023 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from the
 * use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software in a
 *    product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

#ifndef SL_BT_PAWR_SYNC_CONFIG_H
#define SL_BT_PAWR_SYNC_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

// <h> Bluetooth PAwR Synchronizer Configuration

// <o SL_BT_CONFIG_MAX_PAWR_SYNCHRONIZERS> Max number of PAwR synchronizers <0-255>
// <i> Default: 1
// <i> Define the number of periodic synchronizing instances that the application needs to use concurrently for Periodic Advertising with Responses. This number must not exceed the number of periodic advertising synchronization instances configured by SL_BT_CONFIG_MAX_PERIODIC_SYNC in the component "bluetooth_feature_periodic_sync".
#define SL_BT_CONFIG_MAX_PAWR_SYNCHRONIZERS     (1)

// </h> End Bluetooth PAwR Synchronizer Configuration

// <<< end of configuration section >>>

#endif // SL_BT_PAWR_SYNC_CONFIG_H