//#include <iostream>
//
///*
//    ����ü�� ������ �ұ�Ģ���̸�, �̸� �� �� ���� �پ��� Ÿ���� �����͸� ������ �� �ִ� Ÿ����.
//    Ű����� union���� ����� �� ������, ��� ��� ������ �ϳ��� �޸� ������ ������. �׷��� ������ �� ���� �ϳ��� ��� ������ ��� ����.
//    ���� ū ��� ������ ũ��� �޸𸮸� �Ҵ����.
//    ���� ũ��� ������ �迭 ��ҿ� �پ��� ũ���� �����͸� ���� ����.
//    �׸� ���� �ڷ� : http://tcpschool.com/cpp/cpp_struct_unionEnum
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
//    std::cout << "var.a �� ũ��" << sizeof(var.a)<<std::endl;
//    std::cout << "var.b �� ũ��" << sizeof(var.b) << std::endl;
//    std::cout << "var.c �� ũ��" << sizeof(var.c) << std::endl;
//    std::cout << "var�� ũ��" << sizeof(var) << std::endl;
//
//    std::cout << "var.a �� �ּ� : " << &var.a << std::endl;//(2)
//    std::cout << "var.b �� �ּ� : " << &var.b << std::endl;
//    std::cout << "var.c �� �ּ� : " << &var.c<< std::endl;
//    std::cout << "var �� �ּ� : " << &var << std::endl;
//
//    return 0;
//}
//
///*
//    (1) -> int���ε� �� 16������ �����ϴ°�?
//    (2) -> ���� �ּҸ� �����ϴ� ��Ȯ���ϴµ� �� char ���ڿ��� �����°�? ���� �ּҰ� �ƴѰ�?
//*/