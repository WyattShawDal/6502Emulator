#include <stdio.h>
#include "emulator.h"


int main(int argc, char* argv[])
{
	printf("Project Started August 12th\n");
	printf("Test Change Please Ignore.\n");
	
	emulator *em = new_emulator();
	em->status.bits = 0xFF;
	printf("Emulator status = %2X", em->status.bits);
	return 0;
}
