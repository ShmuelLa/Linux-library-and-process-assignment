CC = gcc
CFLAG = -Wall -Wextra -g -o

.PHONY: clean
.PHONY: all

all: lib 1 2 3 

1: 
	$(CC) hello_ariel.c main1_1.c -o main1_1

2:
	$(CC) main1_2.c -L. -l Hello -o main1_2

3: hello_ariel.h main1_3.c lib
	$(CC) main1_3.c -fPIC -ldl -o main1_3

lib:
	$(CC) -o libHello.so -shared -fPIC hello_ariel.c
  
exportlib:
	export LD_LIBRARY_PATH=.

echolib:
	echo $$LD_LIBRARY_PATH

git:
	git add -A
	git commit -m "$m"
	git push

clean:
	rm -f *.o *.so main1_1 main1_2 main1_3