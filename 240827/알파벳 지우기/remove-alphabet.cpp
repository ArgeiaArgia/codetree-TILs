#include <iostream>
#include <string>
using namespace std;

int main() {
	//string str1, str2;
	//cin >> str1>>str2;
	//string num1, num2;
	//for (int i = 0; i < str1.size(); i++) {
	//	if (str1[i] < 58) {
	//		num1 += str1[i];
	//	}
	//}
	//for (int i = 0; i < str2.size(); i++) {
	//	if (str2[i] < 58) {
	//		num2 += str2[i];
	//	}
	//}
	//cout << num1 << endl << num2;

	string str1, str2;
	cin >> str1 >> str2;
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	bool isFirst = true;
	bool didGetNum = false;
	for (int i = 0; i < str1.size(); i++) {
		if (str1[i] < 58) {
			if (isFirst) {
				num1 = num1 * 10 + str1[i] - 48;
				didGetNum = true;
			}
			else
			{
				num2 = num2 * 10 + str1[i] - 48;
			}
		}
		else if (didGetNum) {
			isFirst = false;
		}
	}
	isFirst = true;
	didGetNum = false;
	for (int i = 0; i < str2.size(); i++) {
		if (str2[i] < 58) {
			if (isFirst) {
				num3 = num3 * 10 + str2[i] - 48;
				didGetNum = true;
			}
			else
			{
				num4 = num4 * 10 + str2[i] - 48;
			}
		}

		else if (didGetNum) {
			isFirst = false;
		}
	}
	cout << num1 + num3<<num2 + num4;
	return 0;
}