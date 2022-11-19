#include<iostream>
#include<set>
using namespace std;
int a[50005], b[50005];
bool search(int i,int n) {
	int left = 1, right = n;
	while (left < right) {
		int mid = (left + right) / 2;
		if (a[i] + b[mid] == 10000) return true;
		else if (a[i] + b[mid] > 10000) left = mid + 1;
		else right = mid - 1;
	}
	return false;
}
int main()
{
	int n, i, j, flag = 0;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cin >> n;
	for (j = 1; j <= n; j++) {
		cin >> b[j];
	}
	while (i) {
		if (search(i, j)) {
			flag = 1;
			break;
		}
		i--;
	}
	if (flag) cout << "YES" << endl;
	else cout << "NO" << endl;
}
