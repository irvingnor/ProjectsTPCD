all:
	g++ -c tercia.cpp
	g++ -c encriptador.cpp
	g++ main.cpp -o main encriptador.o tercia.o -ltbb
clean:
	rm encriptador.o
	rm tercia.o
