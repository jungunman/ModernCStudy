#include <iostream>
#include <Windows.h>
#include <conio.h>
int main() {

	//�ʿ��� ���� ����
	HANDLE pHandle = NULL;
	DWORD pid;

	//������ �ּ� ����
	DWORD address[] = { 0x0057f0f4, 0x0057f124 }; // ���� ���� �ּ�
	DWORD catch_mineral_address = 0x0061c3c7; //�̳׶� ���� �ּ�
	DWORD motion = 0x0061c3d8; //�̳׶� ĺ�°� ���� �ּ�

	//���� ���� �� Ű �̺�Ʈ
	bool isRunning = TRUE; //���� ���� ��?
	char key_event = NULL; // ���� Ű ����?

	//�޸� ������ ����
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

		//ReadProcessMemory(pHandle, (DWORD*)address[i], &value, 4, &readSize); //�޸� �� �����ߴ��� ������
		//(pHandle, (DWORD*)address[i], &c_value, sizeof(c_value), &readSize); // �̳׶� �� ���� ������
		WriteProcessMemory(pHandle, (DWORD*)catch_mineral_address, &catch_value, sizeof(catch_value), 0); // �̳׶� Ķ �� ������ ǥ���ϴ� �ּ�
		WriteProcessMemory(pHandle, (DWORD*)motion, &motion_value, sizeof(motion_value), 0); //�̳׶� ĺ���� �ƴ��� ���� �Ǵ��ϴ� �ּ�
		printf("%x , %d \n", catch_mineral_address, catch_value);//������
		printf("%x , %d \n", motion, motion_value);//������

		Sleep(2000);//�ʹ� ���� �ݺ��� ���ʿ��ϱ⿡ 2�ʸ��� �۵��ϵ��� ����.

		//Ű �̺�Ʈ ����
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