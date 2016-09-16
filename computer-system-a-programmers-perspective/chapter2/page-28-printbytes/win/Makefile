homepath = ..
hpath = $(homepath)\h
cpath = $(homepath)\c
page = page-28-printbytes
objects = main.o $(page).o

printbytes : $(objects)
	gcc -m64 -o printbytes.exe $(objects)
main.o : $(hpath)\$(page).h
	gcc -m64 -c $(cpath)\main.c -o .\main.o
page-28-printbytes.o : $(hpath)\$(page).h
	gcc -m64 -c $(cpath)\$(page).c -o .\$(page).o

.PHONY : clean 
clean :
	rm printbytes.exe $(objects)
