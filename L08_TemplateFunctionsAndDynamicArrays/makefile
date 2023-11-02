math: arrayManager.o main.o fraction.o 
	g++ -o math arrayManager.o main.o fraction.o 

main.o: arrayManager.h fraction.h main.cpp helpers.h
	g++ -c main.cpp

arrayManager.o: arrayManager.h arrayManager.cpp fraction.h
	g++ -c arrayManager.cpp

fraction.o: fraction.h fraction.cpp
	g++ -c fraction.cpp

clean:
	rm *.o math