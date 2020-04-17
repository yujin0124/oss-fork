#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "숫자를 입력해주세요 (1~9)" << endl;
	cin >> n;

	for (int i = 1; i <= 9; i++) {
		cout << n << " * " << i << " = " << n * i << endl;
	}

	return 0;
}