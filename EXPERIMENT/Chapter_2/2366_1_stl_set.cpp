#include<iostream>
#include<set>
using namespace std;
set<int>sum;
int main()
{
	int n, num, flag = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		sum.insert(10000 - num);
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (sum.count(num)) flag = 1;
	}
	if (flag) cout << "YES" << endl;
	else cout << "NO" << endl;
}
