#include "emulator.h"
#include <stdio.h>
#include <stdlib.h>




emulator *new_emulator(void)
{
	emulator* new = calloc(1, sizeof(emulator*));
	if(new == NULL)
	{
		printf("PROG FAILED WHEN ALLOCATING NEW EMULATOR\n");
	}
	return new;
}
