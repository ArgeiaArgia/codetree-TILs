#include <iostream>
using namespace std;

int Sum(int num) {
	if (num <= 0) return 0;
	return num + Sum(num - 1);
}
int main() {
	int a = 0;
	cin >> a;
	cout << Sum(a);
	return 0;
}