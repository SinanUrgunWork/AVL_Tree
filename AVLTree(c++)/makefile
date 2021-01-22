derlecalistir: program calistir

program: AVLTree.o AVLNode.o Stack.o kisi.o main.o
	g++ ./lib/AVLTree.o ./lib/AVLNode.o  ./lib/Stack.o ./lib/kisi.o  ./lib/main.o -o ./bin/program
AVLNode.o:
	g++ -I "./include" -c ./src/AVLNode.cpp -o ./lib/AVLNode.o
kisi.o:
	g++ -I "./include" -c ./src/kisi.cpp -o ./lib/kisi.o
AVLTree.o:
	g++ -I "./include" -c ./src/AVLTree.cpp -o ./lib/AVLTree.o
Stack.o:
	g++ -I "./include" -c ./src/Stack.cpp -o ./lib/Stack.o
main.o:
	g++ -I "./include" -c ./src/main.cpp -o ./lib/main.o
calistir:
	./bin/program.exe