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

	cout << "숫자 3개를 입력하시오. ";
	cin >> A;
	cin >> B;
	cin >> C;

	if (D > 0) {
		X = (-B - sqrt(B * B - 4 * A * C)) / 2 * A;
		Y = (-B + sqrt(B * B - 4 * A * C)) / 2 * A;
		cout << "X 은 : " << X << endl;
		cout << "X2 는 : " << Y << endl;
	}
	else if (D == 0) {
		X = B / (-2 * A);
		cout << "이차방정식의 근은 " << X << endl;
	}

	return 0;
}

