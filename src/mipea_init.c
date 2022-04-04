/* 
** Purpose: Generic entry point function for MIPEA library
**
** Notes:
**   None
**
** License:
**   Written by David McComas, licensed under the copyleft GNU
**   General Public License (GPL). 
**
*/

/*
** Includes
*/

#include "cfe.h"

/*
** Exported Functions
*/

/******************************************************************************
** Entry function
**
*/
uint32 PI_IOLIB_Init(void)
{

   OS_printf("PI_IOLIB Initialized. Version 1.0.0\n");
   
   return OS_SUCCESS;

} /* End PI_IOLIB_Init() */

