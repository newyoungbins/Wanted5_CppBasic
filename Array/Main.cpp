#include <iostream>

int main()
{
	// 배열.
	const int length = 5;
	int array[length] = {};
	//memset(array, 0, sizeof(int) * length);

	// 배열을 포인터로 다루기.
	int* ptr = array;
	*(ptr + 2) = 30;		// 포인터의 덧셈은 메모리 점프.

	// 배열 순회.
	for (int ix = 0; ix < length; ++ix)
	{
		array[ix] = ix + 1;
	}

	// Range-Based Loop (범위 기반 루프)
	// C# - foreach 와 비슷하다.
	for (const int value : array)
	{
		std::cout << value << " ";
	}
	// std::cout << array[ix] << " ";

	std::cout << "\n";

	std::cin.get();
}