#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    while (!progresses.empty())
    {
        for (int i = 0; i < progresses.size(); ++i)
            progresses[i] += speeds[i];

        int cnt = 0;
        while (!progresses.empty() && progresses.front() >= 100) {
            cnt++;
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
        }

        if (cnt != 0)
            answer.push_back(cnt);
    }

    return answer;
}

int main()
{
    vector<int> q1 = { 93, 30, 55 };
    vector<int> q2 = { 1, 30, 5 };
    auto a = solution(q1, q2);
    int p = 0;
}