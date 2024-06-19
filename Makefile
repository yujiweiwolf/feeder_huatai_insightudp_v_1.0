# Time-stamp: <[Makefile] modified by Guangxu Pan on 2021-02-18 11:19:07 Thursday>

BASEDIR := $(shell pwd)
SRCDIR  := src
LIBDIR  := lib
BINDIR  := bin
INSTALLDIR := $(HOME)/sys/lib
vpath %.h $(SRCDIR)
vpath %.c $(SRCDIR)
vpath %.cc $(SRCDIR)
vpath %.cpp $(SRCDIR)
vpath % $(SRCDIR)

# --------------------------------------------------
# mode: debug/release
MODE = release

# --------------------------------------------------
# base settings
# --------------------------------------------------
CC  = gcc
CXX = g++
AR  = ar
LD  = ld

# Extra flags to give to the C compiler.
CFLAGS   = -Wall -fPIC
# Extra flags to give to the C++ compiler.
CXXFLAGS = -Wall -fPIC -std=c++17
ARFLAGS  = crs
LDFLAGS  = 
# Library flags or names given to compilers when they are supposed to invoke the linker, 'ld'.
LDLIBS   =

ifeq ($(MODE), release)
CFLAGS += -O2 -s
CXXFLAGS += -O2 -s
else
CFLAGS += -g
CXXFLAGS += -g
endif

# --------------------------------------------------
I = -I. -I$(SRCDIR) -Ilib/udp_v1.10.0/include/mdc_gateway_client/include  -Ilib/udp_v1.10.0/include/mdc_gateway_client/protobuf
L = -L$(BINDIR) -Llib/udp_v1.10.0/lib

LIBS_COMMON = -lcoral -lswordfish -lx -lstdc++fs -lyaml-cpp -lclickhouse-cpp-lib-static
LIBS_COMMON += -lboost_date_time -lboost_filesystem -lboost_regex -lboost_system  -lboost_chrono -lboost_log -lboost_program_options -lboost_thread -lboost_iostreams -lz
LIBS_COMMON += -lprotobuf -lprotobuf-lite -lsodium -lzmq -lssl -lcrypto -liconv -lpthread -ldl

# --------------------------------------------------
ifneq ($(MAKECMDGOALS), clean)
%.d: %.cc
	$(CC) -MM $(CXXFLAGS) $(I) $< | sed 's,^$(*F).o[\s:]*,$*.o $@: ,g' > $@

%.o: %.cc
	$(CXX) $(CXXFLAGS) $(I) -c $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(I) -c $< -o $@

endif

# ######################################################################
APP = huatai_insightudp_feeder
all: $(APP)
#all: $(APP) image save
.PHONY : all

.PHONY: clean
clean: 
	-@find . -type f -regextype egrep -regex ".*\.(log|o|d|pyc|pyo|docker.tar.gz)$$" -exec rm -rf \{\} \;
	-@find bin -type f -name "core" -exec rm -rf \{\} \;
	-@find bin -type f -name $(APP) -exec rm -rf \{\} \;

.PHONY: image
image:
	@echo "[$(APP)] build docker image ..."
	@tag=`cd bin; ./$(APP) -v`; [ -z $$tag ] && tag="v0.0.0"; \
	img="$(APP):$$tag"; \
	docker rmi $$(docker images --filter "dangling=true" -q) >/dev/null 2>&1; \
	docker build -t $$img .
	@echo "[$(APP)] build docker image ok"

.PHONY: save
save:
	@echo "[$(APP)] save docker image ..."
	@tag=`cd bin; ./$(APP) -v`; [ -z $$tag ] && tag="v0.0.0"; \
	img="$(APP):$$tag"; \
	docker rmi $$(docker images --filter "dangling=true" -q) >/dev/null 2>&1; \
	rm -rf "$(APP)_$$tag.docker.tar.gz"; \
	docker save $$img > $(APP)_$$tag.docker.tar && gzip $(APP)_$$tag.docker.tar;
	@echo "[$(APP)] save docker image ok"

# ==================================================

# --------------------------------------------------
# bin: huatai_insightudp_feeder
# --------------------------------------------------
SRC_INSIGHT_FEEDER := $(wildcard src/insight_feeder/*.cc)
BIN_INSIGHT_FEEDER  = huatai_insightudp_feeder
LIB_INSIGHT_FEEDER = -lprotobuf -lprotobuf-lite -lfeeder -laeron_client_shared -laeron_driver -lACE -lACE_SSL -lmdc_gateway_client $(LIBS_COMMON)

OBJ_INSIGHT_FEEDER := $(SRC_INSIGHT_FEEDER:%.cc=%.o)
$(BIN_INSIGHT_FEEDER): $(OBJ_INSIGHT_FEEDER)
	@echo ">>> build $(BIN_INSIGHT_FEEDER) ..."
	-@mkdir -p bin >/dev/null 2>&1
	-@cp -rf lib/udp_v1.10.0/lib/*.so* bin/ >/dev/null 2>&1
	-@cd bin; ln -s libACE.so.6.4.3 libACE.so >/dev/null 2>&1
	-@cd bin; ln -s libACE_SSL.so.6.4.3 libACE_SSL.so >/dev/null 2>&1
	-@cd bin; ln -s libssl.so.10 libssl.so >/dev/null 2>&1
	-@cd bin; ln -s libcrypto.so.10 libcrypto.so >/dev/null 2>&1
	$(CXX) $(CXXFLAGS) $(L) -o $@ $^ $(LIB_INSIGHT_FEEDER)
	@mv $@ $(BINDIR)
	@echo ">>> build $(BIN_INSIGHT_FEEDER) ok"

# --------------------------------------------------
# bin: test
# --------------------------------------------------
SRC_TEST := $(wildcard src/test/*.cc)
BIN_TEST  = test
LIB_TEST = $(LIBS_COMMON)

OBJ_TEST := $(SRC_TEST:%.cc=%.o)
$(BIN_TEST): $(OBJ_TEST)
	@echo ">>> build $(BIN_TEST) ..."
	$(CXX) $(CXXFLAGS) $(L) -o $@ $^ $(LIB_TEST)
	@mv $@ $(BINDIR)
	@echo ">>> build $(BIN_TEST) ok"

# ##################################################

