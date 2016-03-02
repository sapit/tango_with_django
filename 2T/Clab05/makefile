CC= gcc
EXE = myprog
DEBUGFLAGS = -g
OPTCFLAGS = -O2

myprog: main.o bubble.o
	$(CC) $(LDFLAGS) -o myprog main.o bubble.o

main.o:	main.c
	$(CC) $(OPTCFLAGS) $(DEBUGFLAGS) -c $<

bubble.o: bubble.c 
	$(CC) $(OPTCFLAGS) $(DEBUGFLAGS) -c $<

opt: $(EXE)
debug: $(EXE)


.PHONY: clean
clean:
	rm *.o
