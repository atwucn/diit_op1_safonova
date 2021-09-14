
#include <iostream>

int main() {
	// 1. Ask age.
	std::cout << "input age: ";

	int age;
	std::cin >> age;
	// 2. Separate last digit.
	int last_digit = age % 10;
	// 3. Choose case.
	char* case_ = nullptr;

	char case1[] = "rik";// 1
	char case2[] = "roky";// 2,3,4
	char case3[] = "rokiv";//5,6,7,8,9,0)
	
	if (last_digit == 1) {
		case_ = case1;
	} else if (last_digit <= 4) {
		case_ = case2;
	} else {
		case_ = case3;
	}
	// 4. Print case.
	std::cout << "case = " << case_ << std::endl;
}

