CrossReference : main.o Print.o Scanner.o Token.o Tree.o LinkedList.o
	g++ -Wall  main.o Print.o Scanner.o Token.o Tree.o LinkedList.o  -o CrossReference

main.o : main.cpp common.h Print.h Scanner.h Token.h Tree.h LinkedList.h
	g++ -c -Wall main.cpp -o main.o

Print.o : Print.cpp common.h Print.h Scanner.h Token.h Tree.h LinkedList.h
	g++ -c -Wall Print.cpp -o Print.o

Scanner.o : Scanner.cpp common.h Print.h Scanner.h Token.h Tree.h LinkedList.h
	g++ -c -Wall Scanner.cpp -o Scanner.o
    
Token.o : Token.cpp common.h Print.h Scanner.h Token.h Tree.h LinkedList.h
	g++ -c -Wall Token.cpp -o Token.o
    
Tree.o : Tree.cpp common.h Print.h Scanner.h Token.h Tree.h LinkedList.h
	g++ -c -Wall Tree.cpp -o Tree.o
    
LinkedList.o : LinkedList.cpp common.h Print.h Scanner.h Token.h Tree.h LinkedList.h
	g++ -c -Wall LinkedList.cpp -o LinkedList.o