/* ************************************************************************
 * Copyright (C) 2017 VeNSeY Technology
 * ************************************************************************/

/** @file vensey_test_main.c
 This file defines the main application
 
 @project       VeNSeY Board 
 @author	Mürsel Yildiz
 @date		2017-03-21 (YYY-MM-DD)
**************************************************************************/

/* **************************************************************************
 * HEADER FILE INCLUDES
 **************************************************************************/
#include "nooli_server_main.h"

/***************************************************************************
 * CONSTANTS
 ***************************************************************************/

/***************************************************************************
 * GLOBAL VARIABLES
 ***************************************************************************/

/***************************************************************************
 * LOCAL TYPE DEFINITIONS
 ***************************************************************************/

/***************************************************************************
 * LOCAL VARIABLES
 ***************************************************************************/

/***************************************************************************
 * MACROS
 ***************************************************************************/

/***************************************************************************
 * FUNCTION DEFINITIONS
 ***************************************************************************/

/**
 * @brief This function initializes the main operation
 * @param argc Argument count
 * @param argv Argument array
 * @return int to exit from main.
 ****************************************************************************/
int main (int argc, char *argv[])
{
	/*
	 * printing the hello world statement. 
	 */
	printf("Hello World from test application written in C");
	
	/*
	 * operation is finished, return... 
	 */ 
	return 0;
}
