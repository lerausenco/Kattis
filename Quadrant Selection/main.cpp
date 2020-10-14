#include <iostream>

int main(){

	int x, y = 0;

	std::cin >> x;
	std::cin >> y;

	if (x > 0 && y > 0) {
		std::cout << 1 << std::endl;
	}

	if (x < 0 && y > 0){
		std::cout << 2 << std::endl;
	}

	if (x < 0 && y < 0){
		std::cout << 3 << std::endl;
	}

	if (x > 0 && y < 0){
		std::cout << 4 << std::endl;
	}
	std::cin.get();
	return 0;
	
}
