#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "���ڸ� �Է����ּ��� (1~9)" << endl;
	

	for (int i = 1; i <= 9; i++) {
        for(int j=1; j<=9; j++)
            cout <<i<< " * " << j << " = " << i * j << endl;
        cout<<'\n';
	}

	return 0;
}
