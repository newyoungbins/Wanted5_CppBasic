#include <iostream>

// 클래스 선언.
class Player
{
public:
	Player() = default;
	~Player() = default;

private:
	int x = 0;
	int y = 0;
};

int main()
{
	// 객체 포인터 배열.
	const int length = 5;
	Player* players[length] = {};

	// 객체 생성.
	for (int ix = 0; ix < length; ++ix)
	{
		players[ix] = new Player();

	}

	// 객체 소멸 및 null.
	for (Player*& player : players)
	{
		delete player;
		player = nullptr;
	}

	std::cin.get();
}