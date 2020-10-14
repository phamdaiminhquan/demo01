#include <iostream>
#include <cstdlib>
using namespace std;

int hamTinhhieu(int a, int b);
int main()
{
	int ranNumber1 = rand()%100;
	int ranNumber2 = rand() % 100;
	hamTinhhieu(ranNumber1, ranNumber2);

	system("pause");
	return 1;
}
void hamkiemtraTinhhieu(int a, int b)
{
	cout << a << " - " << b << " = ";
	int kq;
	cin >> kq;
	if (kq == (a - b))
	{
		cout << " bạn làm đúng ";
	}
	else cout << " Bạn làm chưa đúng";
}