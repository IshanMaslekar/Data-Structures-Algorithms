#include<iostream>
using namespace std;

int reverseNumber (int N)
{
	int r = 0;

	if (N == 0)
	{
		return 0;
	}

	while (N > 0)
	{
		int digit = N % 10;
		r = r * 10 + digit;
		N = N/10;
	}

	return r;
}

int main() {
	int N;
	cin >> N;

	cout << reverseNumber (N);
}
