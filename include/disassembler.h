#ifndef DISASSEMBLER_H
#define DISASSEMBLER_H

/*
 * Disassembles a single op and prints it to stdout
 */
int disassemble8080op(unsigned char *codebuffer, int pc);

/*
 * Disassembles 8080 machine code and prints it to stdout
 */
int disassemble8080file(char* filename);

#endif
