#
# Typing 'make' will create the executable file.
#
# define some Makefile variables for the compiler and compiler flags
# to use Makefile variables later in the Makefile: $()
#
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
#
SHELL := /bin/bash
#MAIN_FILES := $(patsubst %.cpp, %.exe,$(wildcard *.cpp))
SOURCES += 
HEADERS = $(SOURCES:.cpp=.h)
HEADERS += log.h

OBJECTS = $(SOURCES:.cpp=.o)
CC = g++
CFLAGS  = -g -Wall
CFLAGS += -std=c++0x
MAINS = main.cpp
TESTS = 
EXECUTABLES = $(MAINS:.cpp=.exe)
EXECUTABLES += $(TESTS:.cpp=.exe)
INCLUDES = -iquotedata -iquoteutility
vpath %.cpp utility/
vpath %.h utility/
vpath %.cpp data/
vpath %.h data/
vpath %.cpp test/

.SUFFIXES: 
.SUFFIXES: .cpp .exe .o .h

all : PHONY $(EXECUTABLES) $(OBJECTS) $(SOURCES) $(HEADERS)
	@printf -- "--------------MAKE COMPLETED--------------\n\n"

main.exe : main.cpp $(OBJECTS) log.h
	@echo "----------Making $@ from $< (from main.exe)--------------------"
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJECTS) $< -o $@
	@echo "-------------Done----------------------------------------"

%.exe : %.cpp
	@echo "----------Making $@ from $< (from .cpp.exe)--------------------"	
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJECTS) $< -o $@
	@echo "-------------Done----------------------------------------"

%.o : %.cpp %.h
	@echo "----------Making $@ from $< (from .cpp.o)--------------------"	
	$(CC) -c $(CFLAGS) $(INCLUDES) $<
	@echo "-------------Done----------------------------------------"

#Intro message
PHONY: 
	@printf "\n\n**************STARTING MAKE*************\n"
	@echo In: `pwd`

# To start over from scratch, type 'make clean'.  This
# removes the executable file, as well as old .o object
# files and *~ backup files:
#
clean:
	rm -f *.exe *.o *~
	rm -rf *.log *.aux

