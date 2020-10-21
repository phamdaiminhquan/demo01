#include <iostream>
using namespace std;

float thuong(int a, int b);
int tong(int a, int b);
int tich(int a, int b);
int hieu(int a, int b);

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
}

int tong(int a, int b){
	int tong = 0;
	tong = a + b;
	return tong;
}
float thuong(int a, int b){
	return a / b;
}
int tich(int a, int b) {
	return a*b;
}
int hieu(int a, int b){
	int hieu = 0;
	hieu = a - b;
	return hieu;
}