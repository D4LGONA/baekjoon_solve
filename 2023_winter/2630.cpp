#include <iostream>
#include <vector>
using namespace std;

int white = 0;
int black = 0;
vector<vector<bool>> v;

void isComplete(int sX, int sY, int eX, int eY)
{
	bool b = true;
	bool start = v[sX][sY];
	for (int i = sX; i < eX; ++i) {
		for (int j = sY; j < eY; ++j) {
			if (start != v[i][j])
				b = false;
			if (b == false) break;
		}
		if (b == false) break;
	}
	if (true == b) {
		if (start == true) black++;
		else white++;
		return;
	}
	else {
		isComplete(sX, sY, (sX + eX) / 2, (sY + eY) / 2);
		isComplete(sX, (sY + eY) / 2, (sX + eX) / 2, eY);
		isComplete((sX + eX) / 2, (sY + eY) / 2, eX, eY);
		isComplete((sX + eX) / 2, sY, eX, (sY + eY) / 2);
	}
}

int main()
{
	int n, t;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		v.push_back(vector<bool>(n));
		for (int j = 0; j < n; ++j) {
			cin >> t;
			v[i][j] = bool(t);
		}
	}

	isComplete(0, 0, n, n);

	cout << white << endl << black;
}