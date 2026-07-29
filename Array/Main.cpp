#include <iostream>
//#include <array>
//#include <vector>

// 배열을 전달 받아서 원소를 출력하는 함수.
void PrintArray(int* array, int count)
{
	for (int ix = 0; ix < count; ++ix)
	{
		std::cout << array[ix] << " ";
	}
	
}

int main()
{
	//std::array<int, 5> stdArray;	// #include <array> 쓰면 쓸 수 있음.
	//stdArray.size();
	

	// 배열.
	const int length = 5;
	int array[length] = {};
	//memset(array, 0, sizeof(int) * length);

	// 동적 배열.
	int* dArray = new int[length];

	// dArray[0] = 10;   // <- 사용은 다른 배열이랑 똑같이 쓰면 된다.

	// 메모리 해제.
	delete[] dArray;

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
	//for (const int value : array)
	//{
	//	std::cout << value << " ";
	//}

	PrintArray(array, length);

	std::cout << "\n";

	std::cin.get();
}