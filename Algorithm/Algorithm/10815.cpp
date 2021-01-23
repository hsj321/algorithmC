#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void quick_sort(vector<int> &data, int start, int end) {
	if (start >= end) {
		return;
	}
	int pivot = start;
	int i = pivot + 1;
	int j = end;
	int temp;

	while (i <= j) {
		while (i <= end && data[i] <= data[pivot]) {
			i++;
		}
		while (j > start && data[j] >= data[pivot]) {
			j--;
		}
		if (i > j) {
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp;
		}
		else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	quick_sort(data, start, j - 1);
	quick_sort(data, j + 1, end);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n;
	vector<int> nArray(n);
	for (int i = 0;i < n;i++) {
		std::cin >> nArray[i];
	}
	quick_sort(nArray, 0, n - 1);
	cin >> m;
	for (int i = 0; i < m; i++) {
		int key;
		std::cin >> key;
		int start = 0;
		int end = n - 1;
		int mid;
		bool searched = false;

		while (end - start >= 0) {
			mid = (start + end) / 2;
			if (nArray[mid] == key) {
				searched = true;
				break;
			}
			else if (nArray[mid] > key) {
				end = mid - 1;
			}
			else {
				start = mid + 1;
			}
		}
		if (searched) {
			cout << "1 ";
		}
		else {
			cout << "0 ";
		}
	}
}