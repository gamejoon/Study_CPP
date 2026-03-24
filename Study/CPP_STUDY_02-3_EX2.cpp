#include <iostream>
using namespace std;

int main(void)
{
	int arr[3] = { 1, 3, 5 };
	int& ref1 = arr[0]; // 변수의 성향을 지니는 대상이라면 참조자의 선언이 가능하다.
	int& ref2 = arr[1]; // 배열의 요소 역시 변수의 성향을 지니기 때문에 참조자의 선언이 가능하다.
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	// 불가능한 참조자의 예
	//int& ref = 20 // (x) 상수 대상으로의 참조자 선언은 불가능하다.
	//int& ref; // (x) 참조자는 생성과 동시에 누군가를 참조해야 한다.
	//int& ref = NULL; // (x) 포인터처럼 NULL로 초기화하는 것도 불가능하다.
	
	// 참조자는 선언과 동시에 누군가를 참조해야 하는데, 그 참조의 대상은 기본적으로 변수가 되어야 한다.
	// 그리고 참조자는 참조의 대상을 변경할 수 없다.
	

	return 0;
}