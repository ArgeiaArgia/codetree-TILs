#include <iostream>
using namespace std;

int main() {
	string str1, str2;
	cin >> str1 >> str2;
	int num1 = 0, num2 = 0;
	bool isFirst = true;
	bool didGetNum = false;
	for (int i = 0; i < str1.size(); i++) {
		if (str1[i] < 58) {
			num1 = num1 * 10 + str1[i] - 48;
			didGetNum = true;
		}
	}
	isFirst = true;
	didGetNum = false;
	for (int i = 0; i < str2.size(); i++) {
		if (str2[i] < 58) {
			num2 = num2 * 10 + str2[i] - 48;
			didGetNum = true;
		}
	}
	cout << num1 + num2;
	return 0;
}