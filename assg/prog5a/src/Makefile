SRCS=$(filter-out main.cpp,$(wildcard *.cpp))
OBJS=$(SRCS:.cpp=.o)

all: warp

test:
	echo $(OBJS)

warp: $(OBJS)
	g++ main.cpp $^ -o $@

%.o: %.cpp
	g++ $^ -c

clean:
	$(RM) $(OBJS)
