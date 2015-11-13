objects=tctype.o isalnum.o isalpha.o iscntrl.o isdigit.o isgraph.o islower.o isprint.o ispunct.o isspace.o isupper.o isxdigit.o tolower.o toupper.o xctype.o xtolower.o xtoupper.o
t2:$(objects)
	gcc -o $@ $^
.c.o:
	gcc -c $<
clean:
	-rm t2 $(objects)
