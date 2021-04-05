CC = gcc
CFLAG = -Wall -Wextra -g -o

git:
	git add -A
	git commit -m "$m"
	git push

clean:
	rm -f *.o 