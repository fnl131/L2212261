#include <iostream>

using namespace std;

int main()
{
	int A = 0;
	int B = 0;
	int C = 0;

	double D = 0;

	double X = 0;
	double Y = 0;

	D = B * B - 4 * A * C;

	cout << "숫자 3개를 입력하시오. ";
	cin >> A;
	cin >> B;
	cin >> C;

	X = (-B - sqrt(D)) / (2 * A);
	Y = (-B + sqrt(D)) / (2 * A);
	cout << "X 은 : " << X << endl;
	cout << "X2 는 : " << Y << endl;


	return 0;
}

