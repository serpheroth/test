
CPP = g++ 

# Uncomment to turn on debugging:
CPPFLAGS = -g -DDEBUG

#LIBRARIES =  -framework GLUT -framework OpenGL -framework CoreServices -lobjc
LIBRARIES =  -framework GLUT -framework OpenGL 

default: all

all: test 

.C.o:
	$(CPP) -c $(CPPFLAGS) $(INCLUDES) $<

test: test.cpp
	$(CPP) -o test $(CPPFLAGS) test.cpp \
        $(LDFLAGS) $(LIBRARIES)
clean:
	rm *.o