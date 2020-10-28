//#include <iostream>
//#include <string>

//struct book {
//	std::string bookname;
//	std::string content;
//	int price;
//};
//
//int main()
//{
//	struct book web_book;
//	//초기화1 -> 리스트 형식(중괄호)으로 초기화 가능
//	web_book = {"아무개","아무 내용", 18000 };
//
//	//초기화2 -> 멤버 변수에 접근하여 초기화 가능.
//	/*web_book.bookname = "아무책";
//	web_book.content = "이런 내용이 들어있습니다.";
//	web_book.price = 19000;*/
//
//	std::cout << web_book.bookname << " : " << web_book.content << " : " << web_book.price << std::endl;
//
//
//}

//C++11부터는 구조체 변수를 초기화할 때에 대입 연산자(=)를 생략할 수 있으나, narrowing은 지원하지 않습니다. 
	//narrowing cast란 다음 예제와 같이 초기화를 통해 발생하는 암시적인 데이터의 손실을 의미합니다.
	//???뭔소리고! naarowing cast?