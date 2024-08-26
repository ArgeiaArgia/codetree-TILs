#include <iostream>
using namespace std;

int main() {
	int n;
	int m;
	cin >> n >> m;
	int** field = new int* [n];

	for (int i = 0; i < n; i++) {
		field[i] = new int[n];
		for (int j = 0; j < n; j++) {
			field[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			field[i][j] = 0;
		}
	}

	for (int i = 0; i < m; i++) {
		int r, c;
		cin >> r >> c;
		field[r-1][c-1] = 1;
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << field[i][j]<<" ";
		}
        cout<<endl;
	}

	return 0;
}