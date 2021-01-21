#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main(void) {
	int n, sum = 0;
	vector<int> p;
	vector<int> m;
	bool isZero = false;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a < 0) {
			m.push_back(a);
		}
		else if (a > 0) {
			p.push_back(a);
		}
		else if (a == 0) {
			isZero = true;
		}

	}

	sort(p.begin(), p.end(), greater<int>());
	sort(m.begin(), m.end(), less<int>());
	for (int i = 0; i < p.size(); i++) {
		if (i + 1 == p.size()) {
			sum += p[i];
			break;
		}
		if (p[i] == 1 || p[i + 1] == 1) {
			sum += p[i] + p[i + 1];
		}
		else {
			sum += p[i] * p[i + 1];
		}
		i++;
	}
	for (int i = 0; i < m.size(); i++) {
		if (i + 1 == m.size()) {
			if (!isZero)
				sum += m[i];
			break;
		}
		sum += m[i] * m[i + 1];
		i++;
	}

	cout << sum;
}