
#include <iostream>

int reverse(int n){
	int rem = 0;
	int rev = 0;

	while (n!= 0){
	rem = n%10;
	rev = rev * 10 + rem;
	n /= 10;
		}
	return rev;
}

int main()
{
	int A, B = 0;

	std::cin >> A >> B;
	
	A = reverse(A);
	B = reverse(B);

	if (A > B){
		std::cout << A;
	} else {
		std::cout << B;
	}
	std::cin.get();
	return 0;
}

