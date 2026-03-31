#include <iostream>
#include <string.h> // c++에서 c언어의 헤더파일을 추가하는 것도 가능하다.
#include <stdlib.h> // 이와 관련해서는 잠시 후에 별도로 언급한다.
using namespace std;

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len); // 문자열 저장을 위한 배열을 힙 영역에 할당하고 있다.
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str); // 힙에 할당된 메모리 공간을 소멸하고 있다.
	return 0;
}
// 일시적으로 프로젝트 속성에서 sdl검사를 멈춤

/*
* 다음과 같은 방법에는 두 가지 불편사항이 따른다.
*  - 할당할 대상의 정보를 무조건 바이트 크기단위로 전달해야 한다.
*  - 반환형이 void형 포인터이기 때문에 적절한 형 변환을 거쳐야 한다.
* 
* 하지만 c++에서 제공하는 키워드 new와 delete를 사용하면 이러한 불편한 점이 사라진다.
* new는 malloc을 대신하는 키워드이고, delete는 free를 대신하는 키워드이다.
* 
* 키워드 new 사용법 
* int형 변수의 할당 : int* ptr1 = new int;
* double형 변수의 할당 : double* ptr2 = new double;
* 길이가 3인 int형 배열의 할당: int* arr1 = new int[3];
* 길이가 7인 double형 배열의 할당: double* arr2 = new double[7];
* 
* 키워드 new의 오른편에, 할당할 대상의 정보를 직접 명시하고 있음에 주목해라.
* 
* 키워드 delete 사용법
* 앞서 할당한 int형 변수의 소멸 : delete ptr1;
* 앞서 할당한 double형 변수의 소멸 : delete ptr2;
* 앞서 할당한 int형 배열의 소멸 : delete[] arr1;
* 앞서 할당한 double형 배열의 소멸 : delete[] arr2;
* 
* new 연산 시 반환된 주소 값을 대상으로 delete 연산을 진행하되, 할당된 영역이 배열의 구조라면 []를 추가로 명시해주기만 하면 된다.
*/