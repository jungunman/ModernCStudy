//#include <iostream>
//
//
//
//void Local(int*);
//
//int main(void)
//{
//    int var = 10;
//    
//    //std::cout << "변수 var의 초깃값은 " << var << "입니다." << std::endl;
//
//    std::cout << "메인 var의 값은 " << &var << "입니다.";
//    Local(&var);
//    //std::cout << "Local() 함수 호출 후 변수 var의 값은 " << var << "입니다.";
//    return 0;
//
//}
//
//
//void Local(int* num)
//{
//    std::cout << "함수 내 num의 값은 " << &num << " : "<< *num << "입니다.";
//}