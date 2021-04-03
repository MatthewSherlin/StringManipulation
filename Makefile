#Simple Makefile for 3 excersises
#Homework 2
#make run to create executables for each function using ./[name]

run:
	gcc -o compare compareString.c
	gcc -o copy copyString.c
	gcc -o concat concatString.c

clean:  
	-rm $(objects)compare copy concat

