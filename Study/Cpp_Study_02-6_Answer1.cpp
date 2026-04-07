#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	const char* str1 = "ABC 123 "; 
	const char* str2 = "DEF 456 ";
	char str3[50];

	cout << strlen(str1) << endl;
	cout << strlen(str2) << endl;
	strcpy(str3, str1);
	strcat(str3, str2);
	cout << str3 << endl;

	if (strcmp(str1, str2) == 0)
		cout << "문자열이 같다." << endl;
	else
		cout << "문자열이 같지 않다." << endl;
	return 0;
}

//char* str1 = "ABC 123 "; C++11 이후부터는 더이상 사용이 불가능해짐.
// 이 책은 2010년 출간되어 이전 C++의 문법이 다수 사용된듯
// 앞에 const를 붙여주어 사용 가능