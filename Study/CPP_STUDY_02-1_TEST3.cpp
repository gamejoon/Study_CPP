void Swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
// 매개변수로 복사된 값들 끼리만 값이 뒤바낄 뿐, 원본 변수에는 영향이 없다.

void Swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
// 주소값을 이용해서 원본 변수의 값을 뒤바꿨다.