COMPILER = g++
CXXFLAGS = -Wall -Wextra -std=c++11
SOURCE_DIR = ./src

SOURCE_FILES = $(wildcard $(SOURCE_DIR)/*.cpp)
OBJECT_FILES = $(patsubst $(SOURCE_DIR)/%.cpp,%.o,$(SOURCE_FILES))
LIBRARY = libcalculator_lib.a
EXECUTABLE = calculator

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECT_FILES) $(LIBRARY)
	$(COMPILER) $(CXXFLAGS) -o $@ $(OBJECT_FILES) -L. -lcalculator_lib

%.o: $(SOURCE_DIR)/%.cpp
	$(COMPILER) $(CXXFLAGS) -c -o $@ $<

$(LIBRARY): $(OBJECT_FILES)
	ar rcs $@ $^

clean:
	rm -rf $(EXECUTABLE) $(LIBRARY) $(OBJECT_FILES)
