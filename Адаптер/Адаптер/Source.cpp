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
		cout << "Подано высокое напряжение (220В)\n";
	}
};

class 

int main()
{

}