SOURCE_DIR = ./src
CFILES   = $(shell find $(SOURCE_DIR) -name '*.c')
CPPFILES = $(shell find $(SOURCE_DIR) -name '*.cpp')
OBJFILES = $(CFILES:.c=.o) $(CPPFILES:.cpp=.o)
OUT      = main

LOADLIBES = -lm -lsfml-graphics -lsfml-window -lsfml-system -lpam
CXXFLAGS = -Wall -O2 -g

CC = g++

$(OUT): $(OBJFILES)

run: $(OUT)
	./$(OUT)

.PHONY: clean
clean:
	rm -f $(OBJFILES) $(OUT)
