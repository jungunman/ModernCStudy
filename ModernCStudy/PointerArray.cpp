//#include <iostream>
//
//
//int main() 
//{
//	/*
//	 여기 문제에서 드는 궁금증.
//	 배열을 만들고 나서 왜 포인터로 대입하여 연산하여야 하는지?
//	 그 이유와 쓸모에 대해서 알고 싶습니다.
//	 배열을 만들었으면 그냥 사용하고 끝내면 되지 굳이 포인터에 넣어서 사용해야하나요?
//	*/
//	
//	/*
//	//포인터와 배열의 관계
//	int arr[3] = { 1, 2, 3 };
//	int* ptr_arr = arr; // 포인터에 배열의 이름을 대입
//
//	std::cout << "배열의 이름을 이용하여 배열 요소에 접근 : " << arr[0] << ", " << arr[1] << ", " << arr[2] << std::endl;
//	std::cout << "포인터를 이용하여 배열 요소에 접근 : " << ptr_arr[0] << ", " << ptr_arr[1] << ", " << ptr_arr[2] << std::endl;
//
//	std::cout << "배열의 이름을 이용한 배열의 크기 계산 : " << sizeof(arr) << std::endl;
//	std::cout << "포인터를 이용한 배열의 크기 계산 : " << sizeof(arr) << std::endl;
//	*/
//
//	/*
//	배열의 인덱스 0번 째의 주소부터 시작하니까,
//	포인터로 주소를 알아낸뒤 *(arr+0)을 하면 시작주소 값에 있는 값을 얻어올 수 있고,
//	*(arr+1)을 하면 int 자료형이니 시작 주소에서 4byte를 더한 주소에서 값을 꺼내올 수 있다.
//	이해 제대로 한 것일까?
//
//	for 문으로 배열의 크기만큼 반복을 돌릴 때 sizeof로 나누는 방법이 아닌 range for문을 이용할 것을 권한다
//	java에 익숙해진 나로서 c++에서는 이것의 해결책이 없을까?
//	*/
//	
//	//배열의 포인터 연산
//	int arr[3] = { 10, 20, 30 }; // 배열 선언
//	std::cout << " 배열의 이름을 이용하여 배열 요소에 접근 : " << arr[0] << ", " << arr[1] << ", " << arr[2] << std::endl;
//	std::cout << "배열의 이름으로 포인터 연산을 해 배열 요소에 접근 : " << *(arr + 0) << ", " << *(arr + 1) << ", " << *(arr + 2);
//
//}