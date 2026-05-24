#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point a(2, 5);
	Point b(9, 5);
	Point c(3, 2);

	// Punkt wewnątrz trójkąta - powinien zwrócić 1 (true)
	Point p1(5, 4);
	std::cout << "Punkt (5, 4) wewnątrz: " << bsp(a, b, c, p1) << std::endl;

	// Punkt wyraźnie na zewnątrz (po prawej) - powinien zwrócić 0 (false)
	Point p2(10, 5);
	std::cout << "Punkt (10, 5) na zewnątrz: " << bsp(a, b, c, p2) << std::endl;

	// Punkt na krawędzi AB - powinien zwrócić 0 (false, bo na krawędzi)
	Point p3(5, 5);
	std::cout << "Punkt (5, 5) na krawędzi AB: " << bsp(a, b, c, p3) << std::endl;

	// Punkt poniżej trójkąta - powinien zwrócić 0 (false)
	Point p4(5, 1);
	std::cout << "Punkt (5, 1) poniżej: " << bsp(a, b, c, p4) << std::endl;

	// Punkt w wierzchołku - powinien zwrócić 0 (false, bo na wierzchołku)
	Point p5(2, 5);
	std::cout << "Punkt (2, 5) w wierzchołku A: " << bsp(a, b, c, p5) << std::endl;

	return 0;
}