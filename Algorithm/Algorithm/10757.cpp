#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
	string a, b;
	string answer;
	int ten = false;
	cin >> a >> b;
	int aLen = a.size();
	int bLen = b.size();

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	
	if (aLen < bLen) {
		for (int i = 0; i < bLen - aLen; i++) {
			a.push_back('0');
		}
	}
	else if (bLen < aLen){
		for (int i = 0; i < aLen - bLen; i++) {
			b.push_back('0');
		}
	}


	
	
	for (int i = 0; i < max(aLen, bLen); i++) {
		int temp = a[i] + b[i] - '0' - '0' + ten;
		if (temp >= 10) {
			ten = true;
			temp -= 10;
		}
		else
			ten = false;
		answer.push_back(temp + '0');
	}
	if (ten) {
		answer.push_back('1');
	}
	reverse(answer.begin(), answer.end());
	cout << answer;
}