//#include <iostream>
//#include <string>
//
//
//int main()
//{
//
//	//length() �޼ҵ�� size() �޼ҵ�
//	//length() == ���ڿ��� ����
//	//size() == �ش� string ��ü�� �޸𸮿��� ���� ����ϰ� �ִ� ũ��.
//
//	std::string str1;
//	std::string str2 = "C++ Programming";
//	std::string str3;
//
//	/*std::cout << "���ڿ� str1�� ���̴� " << str1.length() << "�Դϴ�." << std::endl;
//	std::cout << "���ڿ� str1�� ������� " << str1.size() << "�Դϴ�." << std::endl;
//	std::cout << "���ڿ� str2�� ���̴� " << str2.length() << "�Դϴ�." << std::endl;
//	std::cout << "���ڿ� str2�� ������� " << str2.size() << "�Դϴ�." << std::endl;*/
//
//
//	//append() �޼ҵ�
//	//�ϳ��� ���ڿ� ���� �ٸ� ���ڿ� �߰�.
//	str1.append("C++ Programming");
//	str2.append("COOL!@", 1, 4);
//	str3.append(4, 'X');
//
//	/*std::cout << str1 << std::endl;
//	std::cout << str2 << std::endl;
//	std::cout << str3 << std::endl;*/
//
//	//find() �޼ҵ�
//	//Ư�� ���ڿ��� ã�� �� ������ġ�� ��ȯ�ϴ� �޼ҵ�
//	//ã�����ϸ� string::size_type�� string::npos��� ����� ��ȯ
//	/*std::cout << str1.find("Pro") << std::endl;
//	std::cout << str2.find('o') << std::endl;
//
//	if (str1.find("Pro", 5) != std::string::npos)
//	{
//		std::cout << "�ش� ���ڿ��� ã��";
//	}
//	else
//	{
//		std::cout << "�ش� ���ڿ� ����.";
//	}*/
//
//	//compare()�޼ҵ�
//	//�� ���ڿ� ���� ������ ��.
//	/*str1 = "ABC";
//	str2 = "ABD";
//
//	if (str1.compare(str2) == 0)
//	{
//		std::cout << str1 << "��" << str2 << "�� �����ϴ�.";
//	}
//	else if(str1.compare(str2) < 0)
//	{
//		std::cout << str1 << " �� " << str2 << "���� ���� ���� ������ �տ� ����.";
//	}
//	else
//	{
//		std::cout << str1 << "��" << str2 << "���� ���� ���� ������ �ڿ� ����.";
//	}*/
//
//	//replace()�޼ҵ�
//	//Ư�� ���ڿ��� ã�� �ٸ� ���ڿ��� ��ȯ
//	//str1 = "C++ is very nice!";
//	//str2 = "nice";
//	//str3 = "awesome";
//
//	////�ñ��� size_type�̶�� stringŸ���� �Ƹ� �� find ���� ������ �� ���°�?
//	//std::string::size_type index = str1.find(str2);
//	//if (index != std::string::npos)
//	//{
//	//	str1.replace(index, str2.length(), str3);
//	//}
//	//std::cout << str1 << std::endl;
//
//	//capacity() �޼ҵ�� max_size() �޼ҵ�
//	//capacity() �޼ҵ�� �ش� ���ڿ��� �����(reallocation)���� �ʰ� ������ �� �ִ� �ִ� ���ڿ��� ���̸� ��ȯ�մϴ�.
//	//max_size() �޼ҵ�� �ش� ���ڿ��� �ִ��� ���Թ����� ���� �� �ִ� �ִ� ���ڿ��� ���̸� ��ȯ�մϴ�.
//	std::string str = "C++ Programming";
//
//	std::cout << "���ڿ� str�� length�� " << str.length() << "�Դϴ�." << std::endl;
//	std::cout << "���ڿ� str�� capacity�� " << str.capacity() << "�Դϴ�." << std::endl;
//	std::cout << "���ڿ� str�� max_size�� " << str.max_size() << "�Դϴ�.";
//
//
//
//
//}