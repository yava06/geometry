FLAGS := -std=c99

all: main
	gcc main.c -o main $(FLAGS)
