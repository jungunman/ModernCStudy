#include <iostream>



int RecursiveSum(int n)
{
    if (n == 1)                   // n�� 1�̸�, �׳� 1�� ��ȯ��.
    {
        return 1;
    }
    return n + RecursiveSum(n - 1); // n�� 1�� �ƴϸ�, n�� 1���� (n-1)������ �հ� ���� ���� ��ȯ��.
}


int main()
{
    std::cout << RecursiveSum(10) << std::endl;
}