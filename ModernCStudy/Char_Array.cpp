//#include <iostream>
//
//
//int main()
//{
//	const int size = 20;
//	char name[size];
//	char address[size];
//
//	//std::cout << "�̸��� �Է��ϼ��� : ";
//	//std::cin >> name;
//	//std::cout << "�ּҸ� �Է��ϼ��� : ";
//	//std::cin >> address;
//
//	////���� �߻�. ���� �Ұ�, 20�ڰ� �Ѿ�� ���� �߻� (����, ���͸� null���ڿ��� �޾Ƶ���) \0 <-null ���ڿ�
//	//std::cout << "�̸��� : " << name << ", �ּҴ� : " << address << "�Դϴ�."<< std::endl;
//
//	//std::cout << "�̸��� �Է��ϼ��� : ";
//	//std::cin.get(name, size).get();
//	//std::cout << "�ּҸ� �Է��ϼ��� : ";
//	//std::cin.get(address, size).get();
//
//
//	////���� ���� �ذ�, 20�ڰ� �Ѿ�� ������ ������ �߻�.
//	//std::cout << "�̸��� : " << name << ", �ּҴ� : " << address << "�Դϴ�." << std::endl;
//
//	std::cout << "�̸��� �Է��ϼ��� : ";
//	std::cin.get(name, size).ignore(size,'\n');
//	std::cout << "�ּҸ� �Է��ϼ��� : ";
//	std::cin.get(address, size).ignore(size, '\n');
//
//	std::cout << "�̸��� : " << name << ", �ּҴ� : " << address << "�Դϴ�." << std::endl;
//
//}