#include <iostream> 
#include <vector>

using namespace std;

int main(void) {
	unsigned int n;
	vector<int> num;
	int answer[2002];
	for (int i = 0; i < 2002; i++) {
		answer[i] = 0;
	}

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		num.push_back(a);
		if (num[i] < 0) {
			answer[num[i] * -1]++;
		}
		else {
			answer[num[i] + 1001]++;
		}

	}

	for (int i = 1000; i >= 0; i--) {
		if (answer[i] != 0) {
			cout << i * -1 << " ";
		}
	}

	for (int i = 1001; i < 2002; i++) {
		if (answer[i] != 0) {
			cout << i - 1001 << " ";

		}
	}
}