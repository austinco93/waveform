CC=gcc
FILES= mazetest.c queue.c wavefront.c
OBJS= ${FILES:.c=.o}

mazetest: $(OBJS)
	$(CC) -o mazetest $(OBJS)

clean:
	rm -r mazetest $(OBJS)

# dependency list

$(OBJS): queue.h wavefront.h


