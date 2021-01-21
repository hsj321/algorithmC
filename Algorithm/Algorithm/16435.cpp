#include <iostream> 
#include <algorithm> 

using namespace std;

int main(void) {
	int f, s;
	int h[1000];

	cin >> f >> s;

	for (int i = 0; i < f; i++) {
		cin >> h[i];
	}
	sort(h, h + f);

	for (int i = 0; i < f; i++) {
		if (h[i] <= s) {
			s++;
		}
		else {
			break;
		}
	}
	cout << s;
}