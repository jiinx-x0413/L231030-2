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


	// 연습
	// new : delete
	// new [] : delete[]
	/*
	int* PA = new int[10];
	memset(PA, 0, 10); // init : parameter = 시작점, 값, 길이
	
	for (int i = 0; i < 10; i++) // init
	{
		PA[i] = 0;
	}
	

	for (int i = 0; i < 10; i++)
	{
		//*(PA + i) = i;
		PA[i] = i;
	}

	delete[] PA; // new 로 만들면 무적권 delete로 지움
	*/

	// 문자
	// 문자 저장 방법 없음 -> 배열로 저장 && 끝자리 알려줘야 함 (null point = '\n')
	// 즉, N개의 문자를 위해 N+1개의 문자를 메모리에 저장해야 함.
	//char Message[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	//cout << Message << endl;

	char Messaging[6] = "Hello";
	cout << Messaging << endl;

	//	문자변경 : 배열 요소를 하나씩 바꿔줘야 하므로 string 이라는 타입을 씀 -> class
	//  char : 문자 <> string : 문자열 (#inlcude <string>)
	string Message = "Hello";
	cout << Message << endl;

	string World = "World";
	Message = "Hello " + World;
	cout << Message << endl;
	

	return 0;
}
