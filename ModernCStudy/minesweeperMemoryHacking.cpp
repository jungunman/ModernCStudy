#include <iostream>
#include <Windows.h>

int MINES_main()
{
	DWORD pid;
	HANDLE hProcess;
	byte buffer = 0; // 메모리에서 읽어올 값이 저장되는 변수
	DWORD address; //접근할 주소
	byte value = 0xf; //폭탄 아닌 값
	byte boom = 0x8f; //폭탄 값

	HWND windowHandle = FindWindow(NULL, L"Minesweeper");
	if (!windowHandle) {
		return false;
	}

	GetWindowThreadProcessId(windowHandle, &pid);
	if (!pid) {
		return false;
	}

	hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
	if (!hProcess) {
		return false;
	}

	for (int i = 0; i < 10; i++)
	{
		int u = i * 0x20;

		for (int j = 0; j < 9; j++) {
			address = 0x01005361 + u + j;
			ReadProcessMemory(hProcess, (DWORD*)address, &buffer, sizeof(buffer), 0); // 메모리가 잘 읽히는지 디버깅용
			WriteProcessMemory(hProcess, (DWORD*)address, &boom, sizeof(boom), 0);// 전체를 폭탄으로 도배.
			printf("폭탄주소 %x %x \n", address, buffer);//디버깅용

		}

		printf("============================\n");

	}

}
