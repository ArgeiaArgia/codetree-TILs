#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1, str2;
	cin >> str1 >> str2;
	int count = 0;
	while (count < str1.size()) {
		char first = str1[0];
		for (int i = 0; i < str1.size() - 1; i++) {
			str1[i] = str1[i + 1];
		}
		str1[str1.size() - 1] = first;
		count++;
		if (str1 == str2) break;
	}
	if (count >= str1.size()) {
		count = -1;
	}
	cout << count;
	return 0;
}