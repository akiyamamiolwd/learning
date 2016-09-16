#ifndef PRINT_BYTES
#define PRINT_BYTES

typedef unsigned char *byte_pointer;

extern void show_bytes(byte_pointer start, int len);
extern void show_int(int x);
extern void show_float(float x);
extern void show_pointer(void *x);

#endif
