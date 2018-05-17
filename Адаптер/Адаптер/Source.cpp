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
		cout << "������ ������� ���������� (220�)\n";
	}
};

class Adapter : Pitanie
{
	Rozetka *rz;
public:
	void Zaryadit()
	{
		rz->Zaryadit();
		cout << "���������� ������������� � ����������� (6�)\n";
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
	cout << "������� ������ ����� ��������\n";
	Adapter adap(&roz);
	adap.Zaryadit();
	cout << "��������� ���������\n";
	return 0;
}