main-1: main-1.cpp 
	@g++ -std=c++11 main-1.cpp -o main-1
	@./main-1

main-3: main-3.cpp 
	@g++ -std=c++11 main-3.cpp -o main-3
	@./main-3

main-2: main-2.cpp 
	@g++ -std=c++11 main-2.cpp -o main-2
	@./main-2

clear: 
	@rm -f main-1 main-2 main-3