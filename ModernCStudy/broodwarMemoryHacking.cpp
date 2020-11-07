#include <iostream>
#include <Windows.h>
#include <conio.h>
int main() {

	//필요한 셋팅 정의
	HANDLE pHandle = NULL;
	DWORD pid;

	//접근할 주소 정의
	DWORD address[] = { 0x0057f0f4, 0x0057f124 }; // 돈과 가스 주소
	DWORD catch_mineral_address = 0x0061c3c7; //미네랄 증가 주소
	DWORD motion = 0x0061c3d8; //미네랄 캤는가 유무 주소

	//게임 실행 및 키 이벤트
	bool isRunning = TRUE; //게임 실행 중?
	char key_event = NULL; // 무슨 키 눌림?

	//메모리 사이즈 보기
	SIZE_T readSize;

	int catch_value = 100;
	int motion_value = 2;
	int c_value = 0;
	int value = 0;

	HWND hwnd = FindWindow(NULL, L"Brood War");
	if (!hwnd) {
		return false;
	}

	GetWindowThreadProcessId(hwnd, &pid);
	std::cout << "Pid : " << pid << std::endl;
	pHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);





	while (isRunning) {

		//ReadProcessMemory(pHandle, (DWORD*)address[i], &value, 4, &readSize); //메모리 잘 접근했는지 디버깅용
		//(pHandle, (DWORD*)address[i], &c_value, sizeof(c_value), &readSize); // 미네랄 및 가스 증가용
		WriteProcessMemory(pHandle, (DWORD*)catch_mineral_address, &catch_value, sizeof(catch_value), 0); // 미네랄 캘 시 증가량 표시하는 주소
		WriteProcessMemory(pHandle, (DWORD*)motion, &motion_value, sizeof(motion_value), 0); //미네랄 캤는지 아닌지 유무 판단하는 주소
		printf("%x , %d \n", catch_mineral_address, catch_value);//디버깅용
		printf("%x , %d \n", motion, motion_value);//디버깅용

		Sleep(2000);//너무 빠른 반복은 불필요하기에 2초마다 작동하도록 만듬.

		//키 이벤트 삽입
		/*key_event = _getch();
		if (key_event == '0') {
			std::cout << "KEY_EVENT : " << key_event << std::endl;
			isRunning = TRUE;
		}
		else if (key_event == '9') {
			isRunning = FALSE;
			std::cout << "KEY_EVENT : " << key_event << std::endl;
		}*/

	}

	




}