CXX := g++
CXXFLAGS := -std=c++23 -march=native -O2 -Wall -Werror -Wextra -pedantic

TARGET := hangman

SRC := src/hangman.cpp
OBJ := $(SRC:.cpp=.o)

all := $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -f $(TARGET) $(OBJ)
