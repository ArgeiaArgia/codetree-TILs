#include <iostream>
#include <string>
using namespace std;

int Sum(int num, int sum) {
	if (num == 0) return sum;
	sum += num;
	Sum(num - 1, sum);
}
int main() {
	int a = 0;
	int sum = 0;
	cin >> a;
	int b = Sum(a, sum);
	cout << b;
	return 0;
}