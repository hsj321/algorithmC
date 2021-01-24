#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first) 
		return a.second < b.second;
	else 
		return a.first < b.first;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<pair<int, int>> nArray(n);
	for (int i = 0;i < n;i++) {
		std::cin >> nArray[i].first >> nArray[i].second;
	}
	sort(nArray.begin(), nArray.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << nArray[i].first << " " << nArray[i].second << '\n';
	}
}