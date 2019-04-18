CXX=g++
CXXFLAGS = -I.
LIBS = -lm -lgtest -lpthread -lgtest_main

DEPS = romanConverter.hpp

OBJ = romanConverter.o main.o

%.o: %.c (DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

testa_romano: $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f *.o *~ core *~ 