#include <iostream>
#include <string>
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


	// ����
	// new : delete
	// new [] : delete[]
	/*
	int* PA = new int[10];
	memset(PA, 0, 10); // init : parameter = ������, ��, ����
	
	for (int i = 0; i < 10; i++) // init
	{
		PA[i] = 0;
	}
	

	for (int i = 0; i < 10; i++)
	{
		//*(PA + i) = i;
		PA[i] = i;
	}

	delete[] PA; // new �� ����� ������ delete�� ����
	*/

	// ����
	// ���� ���� ��� ���� -> �迭�� ���� && ���ڸ� �˷���� �� (null point = '\n')
	// ��, N���� ���ڸ� ���� N+1���� ���ڸ� �޸𸮿� �����ؾ� ��.
	//char Message[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	//cout << Message << endl;

	char Messaging[6] = "Hello";
	cout << Messaging << endl;

	//	���ں��� : �迭 ��Ҹ� �ϳ��� �ٲ���� �ϹǷ� string �̶�� Ÿ���� �� -> class
	//  char : ���� <> string : ���ڿ� (#inlcude <string>)
	string Message = "Hello";
	cout << Message << endl;

	string World = "World";
	Message = "Hello " + World;
	cout << Message << endl;
	

	return 0;
}
