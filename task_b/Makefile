CC = gcc
CFLAG = -Wall -Wextra -g -o

task1:
	$(CC) main2_1.c -o proc1

task2:
	$(CC) main1_2.c -L. -l Hello -o hello2

task3: hello_ariel.h main1_3.c lib
	$(CC) main1_3.c -fPIC -ldl -o hello3

lib:
	$(CC) -o libHello.so -shared -fPIC hello_ariel.c
  
exportlib:
	export LD_LIBRARY_PATH=.

echolib:
	echo $LD_LIBRARY_PATH

git:
	git add -A
	git commit -m "$m"
	git push

clean:
	rm -f *.o hello1 hello2 hello3