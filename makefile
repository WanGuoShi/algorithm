vpath %.h include  #vpath 指定搜索路径
vpath %.c src/string_to_int
vpath %.c unit_test

objects = string_to_int.o test_str2int.o 
test: test_main.c $(objects)
	gcc -I include $^ -o test -lcheck 

all: $(objects)
$(objects): %.o: %.c
	gcc -c -I include $< -o $@

.PHONY: clean
clean:
	rm *.o test
