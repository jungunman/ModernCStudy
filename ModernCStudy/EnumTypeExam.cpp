//#include <iostream>
//
///*
//����ü(enumerated types)�� ���ο� Ÿ���� �����ϸ鼭 ���ÿ� �� Ÿ���� ���� �� �ִ� ������ ������� ���� ����մϴ�.
//�̷��� ����ü�� �̿��ϸ� ���α׷��� �������� ��������, ������ ���ϴ� ���� �ǹ̸� �ο��� �� �ֽ��ϴ�.
//�̶� ������� ���� ������� ������ 0���� ���۵Ǹ�, �� ������ �ٷ� ���� ��������� 1��ŭ �����Ǹ� ���ǵ˴ϴ�.
//����ü�� enum Ű���带 ����Ͽ� �����մϴ�.
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
//    std::cout << "������ ������ �Է��� �ּ��� : " << std::endl;
//    std::cout << "(SUNNY=0, CLOUD=10, RAIN=20, SNOW=30)" << std::endl;
//    std::cin >> input;
//
//    wt = (Weather)input;
//
//    switch (wt)
//    {
//    case SUNNY:
//        std::cout << "������ ������ ���� ���ƿ�!";
//        break;
//    case CLOUD:
//        std::cout << "������ ������ �帮�׿�!";
//        break;
//    case RAIN:
//        std::cout << "������ ������ �� �ַ��ַ� ���׿�!";
//        break;
//    case SNOW:
//        std::cout << "������ ������ �Ͼ� ���� ������!";
//        break;
//    default:
//        std::cout << "��Ȯ�� ������� �Է��� �ּ���!";
//        break;
//    }
//    std::cout << std::endl << "����ü Weather�� �� ������� " << SUNNY << ", " << CLOUD << ", " << RAIN << ", " << SNOW << "�Դϴ�.";
//    return 0;
//
//}