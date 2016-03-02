CC= gcc
EXE = myprog
LDFLAGS = -lm
DEBUGFLAGS = -g
OPTCFLAGS = -O2

myprog: main.o simulation.o
	$(CC) -o myprog main.o simulation.o $(LDFLAGS)

main.o:	main.c
	$(CC) $(OPTCFLAGS) $(DEBUGFLAGS) -c $< $(LDFLAGS)

simulation.o: simulation.c 
	$(CC) $(OPTCFLAGS) $(DEBUGFLAGS) -c $< $(LDFLAGS)



.PHONY: clean
clean:
	rm *.o
