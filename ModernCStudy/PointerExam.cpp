#include <iostream>

int main()
{

	int num1 = 100;
	double num2 = 3.14;

	int* pointer_num1 = &num1;
	double* pointer_num2 = &num2;


	std::cout << "pointer_num1 �� ���� " << sizeof(pointer_num1) << "�Դϴ�." << std::endl;
	std::cout << "pointer_num2 �� ���� " << sizeof(pointer_num2) << "�Դϴ�." << std::endl;
	std::cout << "pointer_num1 �� �ּ� ����" << pointer_num1 << "�̱��� ";
	std::cout << "pointer_num1 �� �ּҿ� ����ִ� ���� " << *pointer_num1 << "�Դϴ�." << std::endl;
	std::cout << "pointer_num2 �� �ּ� ����" << pointer_num2 << "�̱��� ";
	std::cout << "pointer_num2 �� �ּҿ� ����ִ� ���� " << *pointer_num2 << "�Դϴ�." << std::endl;
}