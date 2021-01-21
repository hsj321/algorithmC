#include <iostream> 

using namespace std;


int main(void) {
	int n, m, k, answer = 0;

	cin >> n >> m >> k;

	while (1) {
		if (n >= 2 && m >= 1 && k <= (n - 2 + m - 1)) {
			n -= 2;
			m -= 1;
			answer++;
		}
		else break;

	}
	cout << answer;
}