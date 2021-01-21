#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main(void) {
	string n;

	cin >> n;
	char start = n[0];
	int count = 0;
	int zero = 0;
	int one = 0;

	if (start == '0') {
		zero++;
	}
	else {
		one++;
	}

	for (int i = 1; i < n.size(); i++) {
		if (n[i] == start) {
			continue;
		}
		else {
			if (n[i] == '0') {
				zero++;
			}
			else {
				one++;
			}
			start = n[i];
		}
	}
	if (zero < one)
		cout << zero;
	else
		cout << one;
}