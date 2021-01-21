#include <iostream> 
#include <utility>
#include <vector>
#include <algorithm> 

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first) {
		return a.second < b.second;
	}
	else {
		return a.first > b.first;
	}
}
int main(void) {
	int n, m;
	cin >> n >> m;
	int grade[100];

	for (int i = 0; i < n; i++) {
		cin >> grade[i];
	}
	vector<pair<int, int>> num;

	for (int i = 0; i < m; i++) {
		pair<int, int> a;
		cin >> a.second;
		a.first = 0;
		char temp;
		for (int j = 0; j < n; j++) {
			cin >> temp;
			if (temp == 'O') {
				a.first += grade[j];
			}
		}
		num.push_back(a);
	}

	sort(num.begin(), num.end(), compare);
	cout << num[0].second << " " << num[0].first;
}