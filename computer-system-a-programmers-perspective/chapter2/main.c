#include <stdio.h>
#include <string.h>
#include "page-28-printbytes.h"

/**
 * function main is the entrance of the program from the cmd.
 * @param argc means the count of the args.
 * @param argv is the pointer of the array of the args.
 * @command -h for help
 */
int main(int argc, char* argv){
	int i = 0;
	while(argv[i]){
		bool needHelp = strcmp("-h", argv[i]);
		if(needHelp){
				printf("This is a program for test show bytes of some type");
		}
	}
	int x = 10;
	int* y = &x;
	float z = 9.0;
	printf("the value of the int type variable x : %d", x);
	show_int(x);
	printf("the value of the float type variable z : %f", z);
	show_float(z);
	printf("the value of the x\'s pointer type variable y : %h", y);
	show_pointer(y);
	
	return 0;
}