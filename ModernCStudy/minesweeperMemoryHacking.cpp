#include <iostream>
#include <Windows.h>

int MINES_main()
{
	DWORD pid;
	HANDLE hProcess;
	byte buffer = 0; // �޸𸮿��� �о�� ���� ����Ǵ� ����
	DWORD address; //������ �ּ�
	byte value = 0xf; //��ź �ƴ� ��
	byte boom = 0x8f; //��ź ��

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
			ReadProcessMemory(hProcess, (DWORD*)address, &buffer, sizeof(buffer), 0); // �޸𸮰� �� �������� ������
			WriteProcessMemory(hProcess, (DWORD*)address, &boom, sizeof(boom), 0);// ��ü�� ��ź���� ����.
			printf("��ź�ּ� %x %x \n", address, buffer);//������

		}

		printf("============================\n");

	}

}
