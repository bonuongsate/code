#include<iostream>;
using namespace std;

float timsolonnhat(float a, float b, float c);

int main()
{
	float a, b, c;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	timsolonnhat(a, b, c);
	return 0;
}
float timsolonnhat(float a, float b, float c) {
	float max;
	
	max = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	cout << "Gia tri lon nhat la: " << max << endl;
	return max;
}
