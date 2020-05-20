/*************************************************************************\
* Copyright (c) 2019 European Spallation Source ERIC
* ecmc is distributed subject to a Software License Agreement found
* in file LICENSE that is included with this distribution. 
*
*  ecmcPvDefs.h
*
*  Created on: May 12, 2020
*      Author: anderssandstrom
*
\*************************************************************************/

#ifndef ECMC_PV_DEFS_H_
#define ECMC_PV_DEFS_H_

#define ECMC_IOC_STARTED_STATE 16

#define ECMC_PV_TIME_BETWEEN_RECONNECT 2

#define ECMC_PV_REG_ERROR 1
#define ECMC_PV_GET_ERROR 2
#define ECMC_PV_PUT_ERROR 3
#define ECMC_PV_MON_ERROR 4
#define ECMC_PV_HANDLE_OUT_OF_RANGE 5
#define ECMC_PV_IOC_NOT_STARTED 6
#define ECMC_PV_BUSY 7
#define ECMC_PV_TYPE_NOT_SUPPORTED 8

#define ECMC_PV_PLC_CMD_PV_REG_ASYNC "pv_reg_async"
#define ECMC_PV_PLC_CMD_PV_GET_ASYNC "pv_get_async"
#define ECMC_PV_PLC_CMD_PV_PUT_ASYNC "pv_put_async"
#define ECMC_PV_PLC_CMD_PV_GET_VALUE "pv_value"
#define ECMC_PV_PLC_CMD_PV_GET_BUSY "pv_busy"
#define ECMC_PV_PLC_CMD_PV_GET_ERR "pv_err"
#define ECMC_PV_PLC_CMD_PV_RST_ERR "pv_rst"
#define ECMC_PV_PLC_CMD_PV_GET_CONNECTED "pv_connected"

#endif  /* ECMC_PV_DEFS_H_ */
