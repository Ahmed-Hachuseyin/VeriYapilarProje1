all: Derle Bagla Calistir
Derle:	
	g++ -c -I "./include" ./src/Dugum.cpp -o ./lib/Dugum.o
	g++ -c -I "./include" ./src/TekYonluListe.cpp -o ./lib/TekYonluListe.o
	g++ -c -I "./include" ./src/AdreslerDugumu.cpp -o ./lib/AdreslerDugumu.o
	g++ -c -I "./include" ./src/AdreslereTut.cpp -o ./lib/AdreslereTut.o
	g++ -c -I "./include" ./src/Test.cpp -o ./lib/Test.o
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
Bagla:
	g++ ./lib/Dugum.o ./lib/TekYonluListe.o ./lib/AdreslerDugumu.o ./lib/AdreslereTut.o ./lib/Test.o ./lib/main.o -o ./bin/program
Calistir:
	./bin/program