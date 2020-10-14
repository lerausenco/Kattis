
#include <iostream>


int main(){

	int N, W, H = 0;
	std::cin >> N >> W >> H;

	int maxLength = W*W + H*H;

	int L = 0;

	while (N!=0){
		std::cin >> L;
		if (L*L <= maxLength){
			std::cout << "DA" << std::endl;
		} else {
			std::cout << "NE" << std::endl;
		}
		N--;
	}
	std::cin.get();
	return 0;
	
}