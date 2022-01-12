# IncludePre.mk
 
CC = gcc
AR = ar         # Static Library Archiving tools. The GNU ar program creates, modifies, and extracts from archives.
RANLIB = ranlib # ranlib generates an index to the contents of an archive and stores it in the archive.
RM = rm
MV = mv
MKDIR = mkdir
MAKE = make
LN = ln
STRIP = strip

SRC_DIR_NAME = src
INC_DIR_NAME = include

APP_DIR_NAME = app

OUT_DIR_NAME = out
OUT_LIB_DIR_NAME = lib
# Set Path
ROOT_SRC_DIR = $(PROJ_ROOT)/$(SRC_DIR_NAME)
$(info  ROOT_SRC_DIR = ${ROOT_SRC_DIR})
INC_DIRS = -I$(PROJ_ROOT)/$(INC_DIR_NAME)
$(info INC_DIRS  = ${INC_DIRS})

ROOT_APP_DIR = $(PROJ_ROOT)/$(APP_DIR_NAME)
$(info ROOT_APP_DIR  = ${ROOT_APP_DIR})

ROOT_OUT_DIR = $(PROJ_ROOT)/$(OUT_DIR_NAME)
$(info ROOT_OUT_DIR = ${ROOT_OUT_DIR})
ROOT_LIB_DIR = $(ROOT_OUT_DIR)/$(OUT_LIB_DIR_NAME)
$(info ROOT_LIB_DIR = ${ROOT_LIB_DIR})
 
ifeq ($(RELEASE), 1)
OBJS_DIR_NAME = release
DBG_FLAGS = -O2 -DNDEBUG
else
OBJS_DIR_NAME = debug
DBG_FLAGS = -g -O0 -DDEBUG
endif
$(info OBJS_DIR_NAME = ${OBJS_DIR_NAME})

OBJS_DIR = $(PROJ_ROOT)/$(OBJS_DIR_NAME)
$(info OBJS_DIR = ${OBJS_DIR})
 
DEPEND_FILE = $(OBJS_DIR)/depend_file
$(info DEPEND_FILE = ${DEPEND_FILE})
 
LIB_DIRS = -L$(ROOT_LIB_DIR)/$(OBJS_DIR_NAME)
$(info LIB_DIRS = ${LIB_DIRS})
