all: example

example: example.c stdstring.c
	gcc $^ -o $@

test: test.c stdstring.c
	gcc $^ -o $@	

clean:
	rm -f ./example ./test