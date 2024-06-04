#include<iostream>
using namespace std;
int main() {
	
	int a;
	cin >> a;
	int reverce = 0;
	while (a > 0) {
		int lastdigit = a% 10;
		reverce = reverce * 10 + lastdigit;
		a = a / 10;

	}
	cout << reverce;
	
	return 0;
}