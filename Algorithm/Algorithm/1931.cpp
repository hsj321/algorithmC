#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second < b.second;
}

int main(void) {
	int n;
	cin >> n;
	vector<pair<int, int>> time;
	for (int i = 0; i < n; i++) {
		pair<int, int> a;
		cin >> a.first >> a.second;
		time.push_back(a);
	}

	sort(time.begin(), time.end(), cmp);

	int count = 1;
	int start = time[0].second;

	for (int i = 1; i < time.size(); i++) {
		if (time[i].first >= start) {
			start = time[i].second;
			count++;
		}
	}
	cout << count;
}