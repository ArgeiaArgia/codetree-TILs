#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1, str2, con;
	cin >> str1 >> str2;
	int count = 0;
	while (count < str1.size()) {
		con = str1[str1.size() - 1];
		for (int i = 0; i < str1.size() - 1; i++) {
			con += str1[i];
		}
		str1 = con;
		count++;
		if (str1 == str2) break;
	}
	if (count >= str1.size()) {
		count = -1;
	}
	cout << count;
	return 0;
}