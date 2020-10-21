
#include <iostream>
using namespace std;

const float PI = 3.14159;
float thuong(int a, int b);
int tong(int a, int b);
int tich(int a, int b);
int hieu(int a, int b);

int CV_chunhat(int a, int b);
int CV_HinhVuong(int a);
int CV_HinhTron(int r);

int DT_chunhat(int a, int b);
int DT_HinhVuong(int a);
int DT_HinhTron(int r);
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

int CV_chunhat(int a, int b) {
	return (a + b) * 2;
}

int CV_HinhVuong(int a){
	return 4 * a;
}

int CV_HinhTron(int r){
	return 2 * r * PI;

int DT_chunhat(int a, int b) {
	return a * b;
}

int DT_HinhVuong(int a){
	return a * a;
}

int DT_HinhTron(int r){
	return PI * r * 
}

int soNgauNhien{
	int r;
	for (int i = 0; i <= 100; i++)
		r = rand() % 100;
	return r;
}

void tong2SoNgauNhien{
	int x = soNgauNhien();
	int y = soNgauNhien();
	cout << "So ngau nhien thu nhat la: " << soNgauNhien() << endl;
	cout << "So ngau nhien thu nhat la: " << soNgauNhien() << endl;
	int tongDuDoan;
	cout << "Tong du doan cua ban la: " << endl;
	cin >> tongDuDoan;
	if (hieuDuDoan == hieu(x - y))
		cout << "Du doan dung!";
	else
		cout << "Du doan sai!";
	cout << x << " + " << y" = " << tong(x,y) << " Khac tong du doan " << tongDuDoan;
}