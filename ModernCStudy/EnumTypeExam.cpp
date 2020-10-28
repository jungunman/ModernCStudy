//#include <iostream>
//
///*
//열거체(enumerated types)는 새로운 타입을 선언하면서 동시에 그 타입이 가질 수 있는 정수형 상숫값도 같이 명시합니다.
//이러한 열거체를 이용하면 프로그램의 가독성이 높아지고, 변수가 지니는 값에 의미를 부여할 수 있습니다.
//이때 상숫값을 따로 명시하지 않으면 0부터 시작되며, 그 다음은 바로 앞의 상숫값보다 1만큼 증가되며 정의됩니다.
//열거체는 enum 키워드를 사용하여 선언합니다.
//*/
//enum Weather { SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30 };
//
//
//
//int main(void)
//
//{
//    int input;
//    Weather wt;
//
//    std::cout << "오늘의 날씨를 입력해 주세요 : " << std::endl;
//    std::cout << "(SUNNY=0, CLOUD=10, RAIN=20, SNOW=30)" << std::endl;
//    std::cin >> input;
//
//    wt = (Weather)input;
//
//    switch (wt)
//    {
//    case SUNNY:
//        std::cout << "오늘의 날씨는 아주 맑아요!";
//        break;
//    case CLOUD:
//        std::cout << "오늘의 날씨는 흐리네요!";
//        break;
//    case RAIN:
//        std::cout << "오늘의 날씨는 비가 주룩주룩 오네요!";
//        break;
//    case SNOW:
//        std::cout << "오늘의 날씨는 하얀 눈이 내려요!";
//        break;
//    default:
//        std::cout << "정확한 상숫값을 입력해 주세요!";
//        break;
//    }
//    std::cout << std::endl << "열거체 Weather의 각 상숫값은 " << SUNNY << ", " << CLOUD << ", " << RAIN << ", " << SNOW << "입니다.";
//    return 0;
//
//}