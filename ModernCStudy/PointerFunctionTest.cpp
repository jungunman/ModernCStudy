//#include <iostream>
//
//double sum(double, double);
//double sub(double, double);
//double mul(double, double);
//double div(double, double);
//double big(double, double);
//double small(double, double);
//double calculator(double, double, double(*func)(double, double));
//
//int main(void)
//{
//
//	double (*calc)(double, double) = nullptr;
//	double num1 = 3, num2 = 4, result = 0;
//	char oper = '+';
//	std::cin >> oper;
//
//	switch (oper)
//	{
//	case '+':
//		calc = sum;
//		break;
//	case '-':
//		calc = sub;
//		break;
//	case '*':
//		calc = mul;
//		break;
//	case '/':
//		calc = div;
//		break;
//	case 'b':
//		calc = big;
//		break;
//	case 's':
//		calc = small;
//		break;
//	default:
//		std::cout << "사칙연산(+, -, *, /)과 'b','s'만 지원한다."<< std::endl;
//		break;
//	}
//
//	result = calculator(num1, num2, calc);
//	std::cout << "결과 값 : " << result << std::endl;
//
//}
//
//double sum(double num1, double num2)
//{
//	return num1 + num2;
//}
//double sub(double num1, double num2)
//{
//	return num1 - num2;
//}
//double mul(double num1, double num2)
//{
//	return num1 * num2;
//}
//double div(double num1, double num2)
//{
//	return num1 / num2;
//}
//double big(double num1, double num2)
//{
//	if (num1 < num2) {
//		return num2;
//	}
//	else
//	{
//		return num1;
//	}
//}
//double small(double num1, double num2)
//{
//	if (num1 < num2) {
//		return num1;
//	}
//	else
//	{
//		return num2;
//	}
//}
//
//double calculator(double num1, double num2, double (*calc)(double, double))
//{
//	return calc(num1, num2);
//}