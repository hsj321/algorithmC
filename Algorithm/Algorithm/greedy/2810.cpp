#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	std::cin >> n;
	string seat;
	std::cin >> seat;
	int count = 1;
	int c = 0;

	for (int i = 0; i < n; i++) {
		if (seat[i] == 'S') {
			count ++;
		}
		else {
			count++;
			i++;
			c++;
		}
	}
	if (c != 0) {
		cout << count;
	}
	else {
		cout << n;
	}
	
}