#include <iostream>

using namespace std;

class Pitanie
{
	virtual ~Pitanie() = 0;

public:
	virtual void Zaryadit() = 0;
};

class Rozetka : Pitanie
{
public:
	void Zaryadit()
	{
		cout << "������ ������� ���������� (220�)\n";
	}
};

class 

int main()
{

}