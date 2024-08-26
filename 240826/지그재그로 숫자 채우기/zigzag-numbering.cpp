#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int num = 0;
	int** field = new int* [n];

	for (int i = 0; i < n; i++) {
		field[i] = new int[m];
	}
	for (int i = 0; i < m; i++) //열
	{
		for (int j = 0; j < n; j++) {
			if (i % 2 == 0) {
				field[j][i] = num;
			}
			else
			{
				field[n - j - 1][i] = num;
			}
			num++;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << field[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}