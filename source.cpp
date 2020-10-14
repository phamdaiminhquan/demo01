#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b)
{
	int hieu = 0;
	hieu = a-b;
	return hieu;
}

int tong(int a, int b)
{
	int tong = 0;
	tong = a + b;
	return tong;
};
int hieu(int a, int b);

int tich(int a, int b);
float thuong(int a, int b){
	return a/b;
}
int soNgauNhien{
	int r;
	for (int i = 0; i <= 100; i++)
		r = rand() % 100;
	return r;
}

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tinh gi? (+,-,*,/) ";
	cin >> phepToan;
	switch (phepToan)
	{
	case '+':
		cout << "tong la: "<< tong(a,b);
		break;
	case '-':
		cout << "hieu la " << hieu(a,b);
		break;
	case '*':
		cout << "tich la " << tich(a,b);
		break;
	case '/':
		cout << "thuong la " << thuong(a,b);
		break;
	default:
		cout << "Chon sai phep toan";
		break;
	}
	return 0;
	int x = soNgauNhien();
	int y = soNgauNhien();
	cout << "So ngau nhien thu nhat la: " << soNgauNhien() << endl;
	cout << "So ngau nhien thu nhat la: " << soNgauNhien() << endl;
	int hieuDuDoan;
	cout << "Hieu du doan cua ban la: " << endl;
	cin >> hieuDuDoan;
	if (hieuDuDoan == hieu(x - y))
		cout << "Du doan dung!";
	else
		cout << "Du doan sai!";
	cout << x << " - " << y" = " << hieu(x - y) << " Khac hieu du doan " << hieuDuDoan;
	

}

int tich(int a, int b) {
	return a*b;
}

