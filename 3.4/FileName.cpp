// Lab_03_4.cpp
// < ����� ˳볿 >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 17

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y;// ������� ��������
	double R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����

	if ((x >= 0 && y >= 0 && sqrt(x * x + y * y) <= R) || (x >= 0 && y <= 0 && sqrt(x * x + y * y) <= R))
	cout << "yes" << endl;
	else
	cout << "no" << endl;
	cin.get();
	return 0;
}