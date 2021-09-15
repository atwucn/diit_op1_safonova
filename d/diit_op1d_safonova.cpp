#include <iostream>

int main() {
	// 1. Ask N
	std::cout << "input n: ";
	double n;
	std::cin >> n;

	// 2. Print table
	std::cout << "inch | cm " << std::endl;

	// for
	for (int i = 10; i <= n; i++) {
		std::cout << i << " | " << i * 2.54 << std::endl;
	}

	// while
	int i = 10;
	while (i <= n) {
		std::cout << i << " | " << i * 2.54 << std::endl;
		i++;
	}

	// do while
	i = 10;
	do {
		std::cout << i << " | " << i * 2.54 << std::endl;
		i++;

	} while (i <= n);

	system("pause");
}