NAME = $(notdir $(shell pwd))
SRCS = $(shell find . -name '*.c')
INC_PATH += $(shell pwd)/../include
include $(AM_HOME)/Makefile
