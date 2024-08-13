#pragma once

#define BYTES ((2<<16) - 1)
#define WORDS ((2<<15) - 1)

typedef enum opcodes
{
	BRK,
	BPL,
	JSR
	//.... CONTINUE LATER
}ops;


typedef union machine_status
{
	char carry		:1; //bit 0?
	char zero		:1;
	char intdisable :1;
	char decmode	:1; //binary coded decimal mode 
	char break_com	:1;
	char padding	:1; //ignored
	char overflow	:1; // bit 7?
	char negative	:1;	//set of operation was negative
	char bits;			// allow user to print the bits of the PSW in one operation
}psw;

typedef union emulator_memory
{
	unsigned char bytes[BYTES];
	unsigned short words[WORDS];
}memory;


typedef struct emulatorData
{
	unsigned short program_counter;
	unsigned char stack_pointer; //S
	unsigned char accumulator; //A
	unsigned char idx_reg_x;
	unsigned char idx_reg_y;
	psw status; //P
	memory device_mem;

}emulator;



emulator *new_emulator(void);
