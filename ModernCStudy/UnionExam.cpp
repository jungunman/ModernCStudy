//#include <iostream>
//
///*
//    공용체는 순서가 불규칙적이며, 미리 알 수 없는 다양한 타입의 데이터를 저장할 수 있는 타입임.
//    키워드는 union으로 사용할 수 있으며, 모든 멤버 변수가 하나의 메모리 공간을 공유함. 그렇기 때문에 한 번에 하나의 멤버 변수만 사용 가능.
//    제일 큰 멤버 변수의 크기로 메모리를 할당받음.
//    같은 크기로 구성된 배열 요소에 다양한 크기의 데이터를 저장 가능.
//    그림 참고 자료 : http://tcpschool.com/cpp/cpp_struct_unionEnum
//*/
//
//
//union ShareData
//
//{
//    unsigned char a;
//    unsigned short b;
//    unsigned int c;
//};
//
//
//
//int main(void)
//{
//    ShareData var;
//    var.c = 0x12345678; //(1)
//    std::cout << std::hex;
//    std::cout << var.a << std::endl;
//    std::cout << var.b << std::endl;
//    std::cout << var.c << std::endl;
//
//    std::cout << "var.a 의 크기" << sizeof(var.a)<<std::endl;
//    std::cout << "var.b 의 크기" << sizeof(var.b) << std::endl;
//    std::cout << "var.c 의 크기" << sizeof(var.c) << std::endl;
//    std::cout << "var의 크기" << sizeof(var) << std::endl;
//
//    std::cout << "var.a 의 주소 : " << &var.a << std::endl;//(2)
//    std::cout << "var.b 의 주소 : " << &var.b << std::endl;
//    std::cout << "var.c 의 주소 : " << &var.c<< std::endl;
//    std::cout << "var 의 주소 : " << &var << std::endl;
//
//    return 0;
//}
//
///*
//    (1) -> int형인데 왜 16진수로 대입하는가?
//    (2) -> 같은 주소를 공유하는 지확인하는데 왜 char 문자열만 깨지는가? 같은 주소가 아닌가?
//*/