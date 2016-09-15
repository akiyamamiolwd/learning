#include <stdio.h>

/**
 * typedef is a keyword to rename a data type for easy reading.
 * here 
 * a byte_pointer refers to a pointer of a unsigned char, its value is the address of the unsigned char variable.
 */
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len){
	int i;
	for(i = 0; i < len; i++)
		printf(" %.2x", start[i]);
	printf("\n");
}

void show_int(inx x){
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
        show_byte((byte_pointer) &x, sizeof(void *));
}
