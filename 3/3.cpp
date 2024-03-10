#include <iostream>

int main()
{
	int Max, n;
	std::cin >> Max;
	for (int i = 1; i <= 6; i++) {
		std::cin >> n;
		if (n > Max) { Max = n; }
	}
	std::cout << Max;





}

