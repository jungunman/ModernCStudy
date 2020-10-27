#include <iostream>

int main()
{

	int num1 = 100;
	double num2 = 3.14;

	int* pointer_num1 = &num1;
	double* pointer_num2 = &num2;


	std::cout << "pointer_num1 의 값은 " << sizeof(pointer_num1) << "입니다." << std::endl;
	std::cout << "pointer_num2 의 값은 " << sizeof(pointer_num2) << "입니다." << std::endl;
	std::cout << "pointer_num1 의 주소 값은" << pointer_num1 << "이구요 ";
	std::cout << "pointer_num1 의 주소에 들어있는 값은 " << *pointer_num1 << "입니다." << std::endl;
	std::cout << "pointer_num2 의 주소 값은" << pointer_num2 << "이구요 ";
	std::cout << "pointer_num2 의 주소에 들어있는 값은 " << *pointer_num2 << "입니다." << std::endl;
}