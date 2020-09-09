

REQUIRED=AFTPClient
CPP=g++
OBJECTS= aftp_main.o
SRC= aftp_main.cpp

all: $(REQUIRED)
$(REQUIRED): $(OBJECTS)
	$(CPP) $(OBJECTS) `wx-config --libs --cxxflags` -o $(REQUIRED)


%.o:%.cpp
	$(CPP) -c `wx-config --cppflags` $<  -o$@
