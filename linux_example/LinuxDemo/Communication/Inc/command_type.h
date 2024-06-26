/*
 * command_type.h
 *
 *  Created on: Apr 25, 2024
 *      Author: Jinming
 */

#ifndef INC_COMMAND_TYPE_H_
#define INC_COMMAND_TYPE_H_

enum
{
	SENSOR_CHECKED_DATA = 0,
	SENSOR_ORIGIN_DATA,

	HOST_SET_BASE_DATA = 0x80,
	HOST_READ_BASE_DATA,
	HOST_SENSOR_DATA_TYPE_SET,
	HOST_SENSOR_SCAN_FRE_SET,
	HOST_SENSOR_SCAN_FRE_GET,
};

#endif /* INC_COMMAND_TYPE_H_ */
