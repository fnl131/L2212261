#include <iostream>

using namespace std;

int main() 
{
	int A = 0;
	int B = 0;
	int C = 0;

	int D = 0;

	float X = 0;
	float Y = 0;

	D = B * B - 4 * A * C;

	cout << "���� 3���� �Է��Ͻÿ�. ";
	cin >> A;
	cin >> B;
	cin >> C;

	if (D > 0) {
		X = (-B - sqrt(B * B - 4 * A * C)) / 2 * A;
		Y = (-B + sqrt(B * B - 4 * A * C)) / 2 * A;
		cout << "X �� : " << X << endl;
		cout << "X2 �� : " << Y << endl;
	}
	else if (D == 0) {
		X = B / (-2 * A);
		cout << "������������ ���� " << X << endl;
	}

	return 0;
}

