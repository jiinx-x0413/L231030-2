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
	// 배열을 동적으로 생성하기
	/*
	int Size = 5;
	int* Number = new int[Size]; // 동적 메모리 할당
	
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


	// 예시
	/*
	class UTexture
	{

	};

	UTexture* Texture = new UTexture[100]; // 사이즈를 조절하고 싶다
	delete[] Texture; // 로딩하고 메모리를 내릴 수 있다. (정적으로 메모리를 할당할 경우 자리가 유지됨 ; main함수 끝날 때까지)
	*/


	// 포인터 사용
	/*
	// 포인터를 인자로 받기 : call by value 에서 value = address 로 호출한 것
	int A = 2;
	Change(&A);
	cout << A << endl;

	// call by reference : 함수 선언 자체에서 인자의 주소에 접근하도록 설정
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

