/*
********************************************************************************************
*
*				  Copyright (c): 2014 - 2014 + 5, Aaron.sun
*							   All rights reserved.
*
* FileName: ..\Driver\Uart\UartDevice.h
* Owner: Aaron.sun
* Date: 2014.2.14
* Time: 13:53:19
* Desc: Uart Device Class
* History:
*	 <author>	 <date> 	  <time>	 <version>	   <Desc>
* Aaron.sun     2014.2.14     13:53:19   1.0
********************************************************************************************
*/

#ifndef __DRIVER_UART_UARTDEVICE_H__
#define __DRIVER_UART_UARTDEVICE_H__

/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #include define
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #define / #typedef define
*
*---------------------------------------------------------------------------------------------------------------------
*/
typedef rk_err_t (* pUartTx_complete)(void* buffer);      //tx callback funciton


typedef struct _UART_DEV_ARG
{
    uint32 dwBitRate;
    uint32 dwBitWidth;
    
}UART_DEV_ARG;


/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   global variable declare
*
*---------------------------------------------------------------------------------------------------------------------
*/


/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   API Declare
*
*---------------------------------------------------------------------------------------------------------------------
*/
HDC UartDev_Create(uint32 DevID, void *arg);
rk_size_t UartDev_Read(HDC dev, void* buffer, uint32 size);
rk_size_t UartDev_Write(HDC dev,const void* buffer, uint32 size, uint8 mode, pUartTx_complete Tx_complete);

#endif
