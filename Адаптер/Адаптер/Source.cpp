#include <iostream>

using namespace std;

class Pitanie
{
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

class Adapter : Pitanie
{
	Rozetka *rz;
public:
	void Zaryadit()
	{
		rz->Zaryadit();
		cout << "Напряжение преобразовано к нормальному (6В)\n";
	}
	Adapter(Rozetka* r)
	{
		rz = r;
	}
};

int main()
{
	setlocale(0, "");
	Rozetka roz;
	roz.Zaryadit();
	cout << "Телефон сгорел синим пламенем\n";
	Adapter adap(&roz);
	adap.Zaryadit();
	cout << "Зарядился нормально\n";
	return 0;
}