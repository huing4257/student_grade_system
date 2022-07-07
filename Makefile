student: main.o USER.o
	g++ $^ -o student
main.o : main.cpp USER.hpp
	g++ -c $^
USER.o : USER.cpp USER.hpp
	g++ -c $^
clean: 
	rm student main.o USER.o USER.hpp.gch