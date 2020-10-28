/*
	데이터 영역과 스택 영역에 할당되는 메모리의 크기는 컴파일 타임(compile time)에 미리 결정되나,
	힙 영영의 크기는 프로그램이 실행되는 도중인 Run time에 사용자가 직접 결정
	Run time에 메모리를 할당받는 것을 메모리의 동적할당(dynamic allocation)이라고 함.

	C에서는 molloc()함수 등의 라이브러리 함수를 제공하여 이러한 작업을 수행할 수 있게 함.
	c++에서는 New연산자와 Delete 연산자를 통해 제공.
*/

#include <iostream>

void newdelete()
{
	/*
		# NEW 연산자
		타입* 포인터이름 = new 타입;
		메모리가 부족할 경우 new는 Null 포인터를 반환.
		new는 free store이라 불리는 memory pool(메모리 공간)에 객체를 위한 메모리를 할당받음.
		(1) new를 통해 할당 받은 메모리는 따로 이름이 없으므로 해당 포인터로만 접근할 수 있음.
	*/
	/*
		#Delete 연산자
		delete 포인터이름;
		C언어에서는 free()함수를 이용하여 동적으로 할당받은 메모리를 다시 운영체제로 반환.
		c++에서는 Delete 연산자를 사용하여, 반환.
	*/

	int* ptr_int = new int;
	*ptr_int = 100;

	double* ptr_double = new double;
	*ptr_double = 3.14;

	std::cout << "int형 숫자 값 : " << *ptr_int << "이고,\n int형 숫자의 메모리 주소는 " << ptr_int << "입니다." << std::endl;
	std::cout << "double형 숫자 값 : " << *ptr_double << "이고,\n double형 숫자의 메모리 주소는 " << ptr_double << "입니다." << std::endl;//(2)

	delete ptr_int;
	delete ptr_double; 

	/* 포인터를 삭제하고 접근하려 했으나 Throw로 오류를 던져 개판이 됨. ㅇㅇ..;;; 조심 빨간줄 그이고 난리남
	std::cout << "2 : int형 숫자 값 : " << *ptr_int << "이고,\n int형 숫자의 메모리 주소는 " << ptr_int << "입니다." << std::endl;
	std::cout << "2 : double형 숫자 값 : " << *ptr_double << "이고,\n double형 숫자의 메모리 주소는 " << ptr_double << "입니다." << std::endl;*/
	
}


/*
* (1) -> 변수를 만들고 그것을 포인터로 만들어서 받은 것이 아니기 때문에 포인터로만 접근이 가능하다는 것인가요?
* (2) -> 메모리 주소를 출력할 때 16진수 0x01005354처럼 받고 싶은데 0082DC98이렇게 받음. 0x0082DC98 이렇게 못받나? ㅠㅠ
*/