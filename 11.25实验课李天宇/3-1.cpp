#include<iostream>
using namespace std;
int maxx(int n, int m)
{
	while (m != 0) {
		int temp = m;
		m = n % m;
		n = temp;
	}
	return n;
}

int n, m;
int maxxx, minnn;
int main()
{
	cin >> n >> m;
	maxxx = maxx(n, m);
	minnn = m * n / maxxx;
	cout << maxxx << " " << minnn;
	return 0;
}