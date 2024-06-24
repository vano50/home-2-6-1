#include <iostream> 
#include <string>
#include "Function.h"



int main(int argc, char** argv) {

	setlocale(LC_ALL, "Russian");

	int x;
	int y;
	int q;
	int z;

	std::cout << "Введите первое число: " << std::endl;
	std::cin >> x;
	std::cout << "Введите второе число: " << std::endl;
	std::cin >> y;
	std::cout << "Введите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): " << std::endl;
	std::cin >> q;

	if (q == 1) {
		std::cout << sum(x, y);
	}
	if (q == 2) {
		std::cout << sub(x, y);
	}
	if (q == 3) {
		std::cout << mul(x, y);
	}
	if (q == 4) {
		std::cout << divv(x, y);
	}
	if (q == 5) {
		std::cout << deg(x, y);
				
	}

	

	return 0;	

}
