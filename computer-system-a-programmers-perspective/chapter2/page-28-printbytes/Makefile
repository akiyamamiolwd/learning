objects = main.o page-28-printbytes.o
pageh = page-28-printbytes

printbytes : $(objects)
	gcc -o printbytes $(objects)
main.o : $(pageh).h
	gcc -c main.c
page-28-printbytes.o : $(pageh).h
	gcc -c $(pageh).c

.PHONY : clean 
clean :
	rm printbytes $(objects)
