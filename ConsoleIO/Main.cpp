// 헤더 인클루드.
// std::cout / std::cin 사용하기 위해 필요함.
#include <iostream>

// 참고로 using namespace std; -> 수업에서는 사용 안 함
// std는 범위가 너무 큼

// 진입점(Entry Point)
int main()
{
	// 출력.
	std::cout << "Hello Game!\n";

	// 바로 종료되지 말라고 추가하는 코드
	// 입력 대기.
	std::cin.get();
}