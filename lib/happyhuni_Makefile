# Makefile template
# 프로젝트 root 폴더 지정
PROJ_ROOT = .
 
include $(PROJ_ROOT)/happyhuni_IncludePre.mk

# 서브 디렉토리 목록입니다. 
SUB_DIRS = 
$(info SUB_DIRS = ${SUB_DIRS})
 
# 링킹할 때 사용되는 링커 이름입니다.
LIB_NAME = basic# Example
$(info LIB_NAME = ${LIB_NAME})
 
# 공유 라이브러리 여부를 나타냅니다. (IS_SHARED = 1 이면 공유 라이브러리)
IS_SHARED = # 1
# 공유 라이브러리 버전입니다. \
	soname은 lib$(LIB_NAME).so.$(MAJOR_VERSION) 으로 지정됩니다. \
	실제이름은 lib$(LIB_NAME).so.$(MAJOR_VERSION).$(MINOR_VERSION) 으로 지정됩니다.
MAJOR_VERSION = 1# 1
MINOR_VERSION = 0# 0
 
# 라이브러리 소스 파일들의 목록입니다.
#LIB_SRCS = # LibSource1.c LibSource2.c ...
#LIB_SRCS := $(shell find -L ${ROOT_SRC_DIR} -type f \( -iname "*.c" -o -iname "*.cpp" -o -iname "*.s" \) -exec basename {} \; )	# Abstract Only file name include extension(using shell command)
#LIB_SRCS := $(shell find -L ${ROOT_SRC_DIR} -type f \( -iname "*.c" -o -iname "*.cpp" -o -iname "*.s" \) )							# Abstract file location using extension(using shell command)
#LIB_SRCS = $(notdir $(wildcard $(ROOT_SRC_DIR)/*.c))
LIB_SRCS := $(shell find -L ${ROOT_SRC_DIR} -type f \( -iname "*.c" -o -iname "*.cpp" -o -iname "*.s" \) )
$(info LIB_SRCS = ${LIB_SRCS})

# 라이브러리를 사용하는 실행 파일들의 소스 파일 목록입니다.
#APP_SRCS = # TargetBin1.c TargetBin2.c ...
#APP_SRCS := $(shell find -L test -type f \( -iname "*.c" -o -iname "*.cpp" -o -iname "*.s" \) -exec basename {} \; )	# Abstract Only file name include extension(using shell command)
#APP_SRCS := $(shell find -L test -type f \( -iname "*.c" -o -iname "*.cpp" -o -iname "*.s" \) )							# Abstract file location using extension(using shell command)
#APP_SRCS = $(notdir $(wildcard $(TEST_DIR)/*.c))
APP_SRCS := $(shell find -L ${ROOT_APP_DIR} -type f \( -iname "*.c" -o -iname "*.cpp" -o -iname "*.s" \) )
$(info APP_SRCS = ${APP_SRCS})
 
# 의존성 규칙에 포함시킬 라이브러리 목록입니다.
DEPEND_LIBS = # -lLibrary1 -lLibrary2
$(info DEPEND_LIBS = ${DEPEND_LIBS})
 
# 외부 시스템 라이브러리 목록입니다.
LIBS += # -lExtLibrary1 -lExtLibrary2
$(info LIBS = ${LIBS})
 
include $(PROJ_ROOT)/happyhuni_IncludePost.mk
