CC = gcc 
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
TARGET = hsh 
SRCS = simple.c strat.c pront.c path.c func_tok.c func_control.c free_tab.c fin.c exit.c
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)
