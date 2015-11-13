objects=errno.o terrno.o
test:$(objects)
	gcc -o $@ $^
.c.o:
	gcc -c $<
clean:
	-rm $(objects)
