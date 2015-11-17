objects=tstdarg.o
test:$(objects)
	gcc -o $@ $^
.c.o:
	gcc -Wall -c -g $<
clean:
	-rm $(objects)
