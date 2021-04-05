CC = gcc
CFLAG = -Wall -Wextra -g -o

.PHONY: clean
.PHONY: all

all: 1 2 3

1: 
	$(CC) main2_1.c -o main2_1

2: 
	$(CC) main2_2.c -o main2_2

3: 
	$(CC) main2_3.c -o main2_3

git:
	git add -A
	git commit -m "$m"
	git push

clean:
	rm -f *.o *.so main2_1 main2_2 main2_3