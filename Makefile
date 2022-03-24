pa3: main.o Account.o Money.o
	g++ -o pa3 main.o Account.o Money.o

Account.o: Account.cpp Account.h
	g++ -c Account.cpp

Money.o: Money.cpp Money.h
	g++ -c Money.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o pa3