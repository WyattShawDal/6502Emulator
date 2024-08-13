#include "emulator.h"


typedef enum opcodes
{
	BRK,
	BPL,
	JSR
	//.... CONTINUE LATER
}ops;


typedef union machine_status
{
	char carry		:1;
	char zero		:1;
	char intdisable :1;
	char decmode	:1;
	char break_com	:1;
	char overflow	:1;
	char negative	:1;	//set of operation was negative
	char bits;			// allow user to print the bits of the PSW in one operation
}psw;


typedef struct emulatorData
{
	unsigned short program_counter;
	unsigned char stack_pointer;
	unsigned char accumulator;
	unsigned char idx_reg_x;
	unsigned char idx_reg_y;
	psw status;

}emulator;
