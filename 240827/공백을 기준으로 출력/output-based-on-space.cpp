#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);

	string conclusion;

	for (int i = 0; i < str1.size(); i++) {
		if (str1[i] != ' ')
			conclusion += str1[i];
	}
	for (int i = 0; i < str2.size(); i++) {
		if (str2[i] != ' ')
			conclusion += str2[i];
	}
	cout << conclusion;
	return 0;
}