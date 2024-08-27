#include <iostream>
#include <string>
using namespace std;

int main() {
	int num, sum = 0;
	string sumStr;
	char temp;
	char first;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int a;
		cin >> a;
		sum += a;
	}
	sumStr = to_string(sum);
	first = sumStr[0];
	for (int i = 0; i < sumStr.size() - 1; i++) {
		sumStr[i] = sumStr[i + 1];
	}
	sumStr[sumStr.size() - 1] = first;
	cout << sumStr;
	return 0;
}