#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main(void) {
	string n;
	int a;
	vector<int> nVe;
	cin >> n;
	bool zero = false;
	int sum = 0;
	for (int i = 0; i < n.size(); i++) {
		nVe.push_back(n[i] - '0');
		sum += n[i] - '0';
		if (n[i] - '0' == 0) {
			zero = true;
		}
	}
	if (!zero || sum % 3 != 0) {
		cout << -1;
		return 0;
	}

	sort(nVe.begin(), nVe.end(), greater<int>());

	for (int i = 0; i < nVe.size(); i++) {
		cout << nVe[i];
	}

}