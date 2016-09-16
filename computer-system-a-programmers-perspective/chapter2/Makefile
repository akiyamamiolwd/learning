objects = main.o page-28-printbytes.o
pageh = page-28-printbytes.h
cc = gcc
printbytes : $(objects)
	cc -o $(objects)
main.o : pageh
page-28-printbytes.o : pageh

.PHONY : clean 
clean :
	rm printbytes $(objects)