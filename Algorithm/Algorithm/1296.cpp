#include <iostream> 
#include <string>
#include <algorithm> 

using namespace std;

int main(void) {
	int n;
	string name;
	string g[50];
	int answer = 0;
	int answerIdx = 0;
	cin >> name;
	cin >> n;

	int l = 0, o = 0, v = 0, e = 0;
	for (int i = 0; i < name.size(); i++) {
		if (name[i] == 'L') {
			l++;
		}
		else if (name[i] == 'O') {
			o++;
		}
		else if (name[i] == 'V') {
			v++;
		}
		else if (name[i] == 'E') {
			e++;
		}
	}


	for (int i = 0; i < n; i++) {
		cin >> g[i];
	}

	sort(g, g + n);

	for (int i = 0; i < n; i++) {
		int l1 = l;
		int o1 = o;
		int v1 = v;
		int e1 = e;


		for (int j = 0; j < g[i].size(); j++) {
			if (g[i][j] == 'L') {
				l1++;
			}
			else if (g[i][j] == 'O') {
				o1++;
			}
			else if (g[i][j] == 'V') {
				v1++;
			}
			else if (g[i][j] == 'E') {
				e1++;
			}
		}
		int love = ((l1 + o1) * (l1 + v1) * (l1 + e1) * (o1 + v1) * (o1 + e1) * (v1 + e1)) % 100;
		if (answer < love) {
			answer = love;
			answerIdx = i;
		}
	}

	cout << g[answerIdx];
}