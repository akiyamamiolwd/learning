#include <stdio.h>
#include "../h/page-28-printbytes.h"
/**
 * typedef is a keyword to rename a data type for easy reading.
 * here 
 * a byte_pointer refers to a pointer of a unsigned char, its value is the address of the unsigned char variable.
 */

void show_bytes(byte_pointer start, int len){
	int i;
	for(i = 0; i < len; i++){
		printf(" %.2x", start[i]);
	}
	printf("\n");
}

void show_int(int x){
	printf("the bytes of the int type variable : ");
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
	printf("the bytes of the float type variable : ");
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
	printf("the bytes of the pointer type variable : ");
        show_bytes((byte_pointer) &x, sizeof(void *));
}
