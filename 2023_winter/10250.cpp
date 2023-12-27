#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int input_count;
	cin >> input_count;
	
	vector<string> results;
	int H, W, N;
	for (int i = 0; i < input_count; ++i)
	{
		cin >> H >> W >> N;
		string result{};
		int cnt1 = 1;

		while (N > H)
		{
			N -= H;
			cnt1++;
		}
		
		if (cnt1 <= 9)
			result += to_string(N) + "0" + to_string(cnt1);
		else
			result += to_string(N) + to_string(cnt1);

		results.push_back(result);
	}

	for (int i = 0; i < results.size(); ++i)
		cout << results[i] << endl;
}