//#include <iostream>
//
//
//int main()
//{
//	const int size = 20;
//	char name[size];
//	char address[size];
//
//	//std::cout << "이름을 입력하세요 : ";
//	//std::cin >> name;
//	//std::cout << "주소를 입력하세요 : ";
//	//std::cin >> address;
//
//	////문제 발생. 띄어쓰기 불가, 20자가 넘어가면 오류 발생 (띄어쓰기, 엔터를 null문자열로 받아들임) \0 <-null 문자열
//	//std::cout << "이름은 : " << name << ", 주소는 : " << address << "입니다."<< std::endl;
//
//	//std::cout << "이름을 입력하세요 : ";
//	//std::cin.get(name, size).get();
//	//std::cout << "주소를 입력하세요 : ";
//	//std::cin.get(address, size).get();
//
//
//	////띄어쓰기 문제 해결, 20자가 넘어가는 오류는 여전히 발생.
//	//std::cout << "이름은 : " << name << ", 주소는 : " << address << "입니다." << std::endl;
//
//	std::cout << "이름을 입력하세요 : ";
//	std::cin.get(name, size).ignore(size,'\n');
//	std::cout << "주소를 입력하세요 : ";
//	std::cin.get(address, size).ignore(size, '\n');
//
//	std::cout << "이름은 : " << name << ", 주소는 : " << address << "입니다." << std::endl;
//
//}