CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=basicMath.o power.o
FLAGS= -Wall -g

all: mymathd mymaths mains maind	
mains: $(OBJECTS_MAIN) libmyMath.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
maind: $(OBJECTS_MAIN) libmyMath.so
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
mymathd: $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)
mymaths: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)	
basicMath.o: basicMath.c myMath.h 
	$(CC) $(FLAGS) -fPIC -c basicMath.c
power.o: power.c  
	$(CC) $(FLAGS) -fPIC -c power.c
main.o: main.c myMath.h   
	$(CC) $(FLAGS) -fPIC -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.out *.so mains maind 
