//#include <iostream>
//
//struct Prop {
//
//	int savings;
//	int loan;
//
//};
//
////복사본이 아닌 주소 하나만을 전달하므로 빠르다는 장점이 있으나
////함수에서 원본 구조체에 직접 접근하기 때문에, 원본 데이터 측면에서 매우 위험.
////그래서 받는 인자를 const 키워드를 사용해 상수로 만들어라. 함수내에서 바꿀 수 없도록.
//int CalcPro(const Prop* prop) {
//
//	//밑의 식이 상수로 변경전에는 실행이 잘됐다.
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
//	std::cout << "적금 : " << hong.savings << "원 에서 대출 :" << hong.loan << "원을 제외한 금액은 " << hong_prop << "원 입니다." << std::endl;
//
//
//}