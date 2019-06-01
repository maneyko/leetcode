CC = g++
CFLAGS = -Wall -std=c++11

SRCS = $(wildcard *.cpp)

PROGS = $(patsubst %.cpp,%,$(SRCS))

all: $(PROGS)

%: %.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o *[0-9]$
