#include <iostream>
using namespace std;


int Change(int* PA)
{
	*PA = *PA + 1;

	return 0;
}

int ChangeRef(int& PB)
{
	PB = PB + 1;
	return 0;
}

int main()
{
	// �迭�� �������� �����ϱ�
	/*
	int Size = 5;
	int* Number = new int[Size]; // ���� �޸� �Ҵ�
	
	for (int i = 0; i < Size; i++)
	{
		*(Number + i) = i; // init
		Number[i] = i * 3;
	}

	for (int i = 0; i < Size; i++)
	{
		cout << *(Number + i) << endl;
	}

	delete[] Number;
	*/


	// ����
	/*
	class UTexture
	{

	};

	UTexture* Texture = new UTexture[100]; // ����� �����ϰ� �ʹ�
	delete[] Texture; // �ε��ϰ� �޸𸮸� ���� �� �ִ�. (�������� �޸𸮸� �Ҵ��� ��� �ڸ��� ������ ; main�Լ� ���� ������)
	*/


	// ������ ���
	/*
	// �����͸� ���ڷ� �ޱ� : call by value ���� value = address �� ȣ���� ��
	int A = 2;
	Change(&A);
	cout << A << endl;

	// call by reference : �Լ� ���� ��ü���� ������ �ּҿ� �����ϵ��� ����
	int B = 3;
	
	ChangeRef(B);
	cout << B << endl;
	*/


	//

	
	/*
	int A = 9;
	int* PA = &A;
	for (int i = 0; i < 5; i++)
	{
		//PA[i] = i;
		
		cout << PA[i] << endl;
		cout << *(PA + i) << endl;
	}
	*/
	

	int Arr[5] = { 1, 2, 3, 4, 5 };
	int* PArr = new int[5];
	*PArr = { &Arr[0], &Arr[1], &Arr[2], &Arr[3], &Arr[4]};
	for (int i = 0; i < 5; i++)
	{
		
		cout << *(PArr + i) << endl;
	}




	return 0;
}

