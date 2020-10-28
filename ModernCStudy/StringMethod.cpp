//#include <iostream>
//#include <string>
//
//
//int main()
//{
//
//	//length() 메소드와 size() 메소드
//	//length() == 문자열의 길이
//	//size() == 해당 string 객체가 메모리에서 실제 사용하고 있는 크기.
//
//	std::string str1;
//	std::string str2 = "C++ Programming";
//	std::string str3;
//
//	/*std::cout << "문자열 str1의 길이는 " << str1.length() << "입니다." << std::endl;
//	std::cout << "문자열 str1의 사이즈는 " << str1.size() << "입니다." << std::endl;
//	std::cout << "문자열 str2의 길이는 " << str2.length() << "입니다." << std::endl;
//	std::cout << "문자열 str2의 사이즈는 " << str2.size() << "입니다." << std::endl;*/
//
//
//	//append() 메소드
//	//하나의 문자열 끝에 다른 문자열 추가.
//	str1.append("C++ Programming");
//	str2.append("COOL!@", 1, 4);
//	str3.append(4, 'X');
//
//	/*std::cout << str1 << std::endl;
//	std::cout << str2 << std::endl;
//	std::cout << str3 << std::endl;*/
//
//	//find() 메소드
//	//특정 문자열을 찾아 그 시작위치를 반환하는 메소드
//	//찾지못하면 string::size_type의 string::npos라는 상수를 반환
//	/*std::cout << str1.find("Pro") << std::endl;
//	std::cout << str2.find('o') << std::endl;
//
//	if (str1.find("Pro", 5) != std::string::npos)
//	{
//		std::cout << "해당 문자열을 찾음";
//	}
//	else
//	{
//		std::cout << "해당 문자열 없음.";
//	}*/
//
//	//compare()메소드
//	//두 문자열 간의 내용을 비교.
//	/*str1 = "ABC";
//	str2 = "ABD";
//
//	if (str1.compare(str2) == 0)
//	{
//		std::cout << str1 << "이" << str2 << "과 같습니다.";
//	}
//	else if(str1.compare(str2) < 0)
//	{
//		std::cout << str1 << " 이 " << str2 << "보다 사전 편찬 순으로 앞에 있음.";
//	}
//	else
//	{
//		std::cout << str1 << "이" << str2 << "보다 사전 편찬 순으로 뒤에 있음.";
//	}*/
//
//	//replace()메소드
//	//특정 문자열을 찾아 다른 문자열로 변환
//	//str1 = "C++ is very nice!";
//	//str2 = "nice";
//	//str3 = "awesome";
//
//	////궁금증 size_type이라는 string타입이 아면 왜 find 값을 대입할 수 없는가?
//	//std::string::size_type index = str1.find(str2);
//	//if (index != std::string::npos)
//	//{
//	//	str1.replace(index, str2.length(), str3);
//	//}
//	//std::cout << str1 << std::endl;
//
//	//capacity() 메소드와 max_size() 메소드
//	//capacity() 메소드는 해당 문자열이 재대입(reallocation)받지 않고 저장할 수 있는 최대 문자열의 길이를 반환합니다.
//	//max_size() 메소드는 해당 문자열이 최대한 대입받으면 가질 수 있는 최대 문자열의 길이를 반환합니다.
//	std::string str = "C++ Programming";
//
//	std::cout << "문자열 str의 length는 " << str.length() << "입니다." << std::endl;
//	std::cout << "문자열 str의 capacity는 " << str.capacity() << "입니다." << std::endl;
//	std::cout << "문자열 str의 max_size는 " << str.max_size() << "입니다.";
//
//
//
//
//}