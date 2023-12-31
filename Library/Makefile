#*******************************************************************
# *  MAKEFILE FOR CREATING STATIC AND DYNAMIC LIBRARY
#-----------------------
# *  Author:  Khaled El-Sayed (@t0ti20)
# *  Created:  30.12.2023
# *  File:  Makefile
# *  Module:  Global
# *  Description:  Makefile for creating a Static And Dynamic library
#*******************************************************************
#*****************************************
#---------   Configurations    -----------
#****************************************/
# Target library Name
LIB_NAME = mylibrary
# Build Directory
BUILD_DIR = Build
# Compiler
CC = gcc
# Archiver
AR = ar
# Compiler Flags
CFLAGS = -Wall -Werror -pedantic -std=c11
# Linker Flags
LDFLAGS = -shared
# Archiver Flags
AFLAGS = rcs
#External Include Directories
INCS= 
#*****************************************
#----------   Source Files    ------------
#****************************************/
SRCPP_FILES=$(shell find $(SOURCEDIR) -name '*.cpp')
SRC_FILES=$(shell find $(SOURCEDIR) -name '*.c')
SRS_FILES=$(shell find $(SOURCEDIR) -name '*.s')
OBJ_FILES= $(SRCPP_FILES:.cpp=.o) $(SRC_FILES:.c=.o) $(SRS_FILES:.s=.o)
INCS+=$(shell find $(SOURCEDIR) -name '*.h' -exec dirname {} \; | uniq | sed 's/^/-I /')
#*****************************************
#---------   Build Targets    ------------
#****************************************/
.PHONY: all clean static dynamic
# Default Make
all: static dynamic
#*****************************************
#Compile And Assimble CPP Files 
$(BUILD_DIR)/%.o: %.cpp
	@$(CC) $(CFLAGS) $(INCS) -c $< -o $@
#Compile And Assimble C Files 
$(BUILD_DIR)/%.o: %.c
	@$(CC) $(CFLAGS) $(INCS) -c $< -o $@
#Assimble Assimply Files
$(BUILD_DIR)/%.o: %.s
	@$(CC) $(CFLAGS) $(INCS) -c $< -o $@
#*****************************************
# Build Dynamic Library
static: $(BUILD_DIR)/lib$(LIB_NAME).a
	@echo "========= Done Creating Static Library ========"
$(BUILD_DIR)/lib$(LIB_NAME).a: $(OBJ_FILES)
	@mkdir -p $(BUILD_DIR)
	@$(AR) rcs $@ $^
#*****************************************
# Build Static Library
dynamic: $(BUILD_DIR)/lib$(LIB_NAME).so
	@echo "========= Done Creating Dynamic Library ========"
$(BUILD_DIR)/lib$(LIB_NAME).so: $(OBJ_FILES)
	@mkdir -p $(BUILD_DIR)
	@$(CC) $(CFLAGS) $(INCS) $(LDFLAGS) -o $@ $^
#*****************************************
clean:
	@rm -rf $(BUILD_DIR)
	@echo "========= Done Cleaning Library ========"
#********************************************************************
# *  END OF FILE:  Makefile
#********************************************************************
