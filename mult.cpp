#include <iostream>
using namespace std;

int main() {
	int n=9;
	cout << "숫자를 입력해주세요 (1~9)" << endl;
	cin >> n;

	for (int i = 1; i <= n; i++) {
        for(int j=1; j<=9; j++)
            cout <<i<< " * " << j << " = " << i * j << endl;
        cout<<'\n';
	}

	return 0;
}
