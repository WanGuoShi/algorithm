objects=tlimits.o
test:$(objects)
		gcc -o $@ $^
.c.o:
		gcc -Wall -c $<
clean:
		-rm $(objects)
