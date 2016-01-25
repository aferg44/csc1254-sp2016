SRCS=$(filter-out args.cpp,$(wildcard *.cpp))
OBJS=$(SRCS:.cpp=)

all: $(OBJS)

args.o: args.cpp
	g++ args.cpp -c

% : %.cpp
	g++ -g $^ args.o -o $@

clean:
	$(RM) $(OBJS)
