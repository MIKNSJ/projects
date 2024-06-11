COMP=g++
FLAGS?=-g -Wall -pedantic -Wextra -static-libstdc++

all: blank parts

blank:
	$(COMP) $(FLAGS) -o blank blank.cpp

parts:
	# $(COMP) $(FLAGS) -c helper.cpp
	# $(COMP) $(FLAGS) -c construct.cpp
	# $(COMP) $(FLAGS) -c input.cpp
	# $(COMP) $(FLAGS) -c construct.cpp operation.cpp
	$(COMP) $(FLAGS) helper.cpp input.cpp construct.cpp operation.cpp -o svd svd.cpp
	# $(COMP) $(FLAGS) helper.cpp input.cpp construct.cpp operation.cpp -o test test.cpp
	
test:
	$(COMP) $(FLAGS) helper.cpp input.cpp construct.cpp -o test test.cpp

clean:
	rm *.o
	# del *.o, if windows