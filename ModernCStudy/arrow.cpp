
//#include <iostream>
//
//using namespace std;
//
//struct Prop
//{
//	int savings;
//	int loan;
//};
//
//
//
//int CalcProperty(Prop*);
//
//
//
//int main(void)
//
//{
//
//    int hong_prop;
//
//    Prop hong = { 10000000, 4000000 };
//
//
//
//    hong_prop = CalcProperty(&hong); // ����ü�� ��� ������ �Լ��� �μ��� ������
//
//
//
//    cout << "ȫ�浿�� ����� ���� " << hong.savings << "���� ���� " << hong.loan
//
//        << "���� ������ �� " << hong_prop << "���Դϴ�.";
//
//    return 0;
//
//}
//
//
//
//int CalcProperty(Prop* money)
//{
//
//    money->savings = 100;
//    return (money->savings - money->loan);
//}