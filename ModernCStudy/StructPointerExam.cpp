//#include <iostream>
//
//struct Prop {
//
//	int savings;
//	int loan;
//
//};
//
////���纻�� �ƴ� �ּ� �ϳ����� �����ϹǷ� �����ٴ� ������ ������
////�Լ����� ���� ����ü�� ���� �����ϱ� ������, ���� ������ ���鿡�� �ſ� ����.
////�׷��� �޴� ���ڸ� const Ű���带 ����� ����� ������. �Լ������� �ٲ� �� ������.
//int CalcPro(const Prop* prop) {
//
//	//���� ���� ����� ���������� ������ �ߵƴ�.
//	//prop->savings = 20000;
//
//	return (prop->savings - prop->loan);
//}
//
//
//
//int main()
//{
//
//	int hong_prop;
//	struct Prop hong = { 10000, 30000 };
//
//	hong_prop = CalcPro(&hong);
//
//	std::cout << "���� : " << hong.savings << "�� ���� ���� :" << hong.loan << "���� ������ �ݾ��� " << hong_prop << "�� �Դϴ�." << std::endl;
//
//
//}