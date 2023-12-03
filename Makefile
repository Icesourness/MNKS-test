CC = g++

FLAGS = -std=c++17 -Wall -Wextra -Werror -o main

FILES = main.cpp fun.cpp

all: build
	./main

build: $(FILES)
	$(CC) $(FLAGS) $(FILES)

rebuild: clean build

clean:
	rm -f main