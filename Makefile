CC = /usr/bin/clang++
CFLAGS = -std=c++17 -stdlib=libc++ -g
SRCS = main.cpp multi.cpp extra.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = arqui1

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

clean_o:
	rm -f $(OBJS)