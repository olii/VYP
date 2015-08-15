CXX=g++
CXXFLAGS=-std=c++11 -Wall -Wextra -Wno-unused-function -c -I$(ROOT) $(CUSTOM_CXXFLAGS)

OBJ_DIR=$(ROOT)/objs/$(MODULE)
OBJ_FILES=$(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRC_FILES))

RM=rm -rf
