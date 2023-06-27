#include<iostream>

using namespace std;

int main() {
	int n, a, b;

	cin >> n >> a >> b;

	n -= a; // cant occupy first a positions
	// Can at max occupy b+1 postions
	n = min(n, b+1);

	cout << n;
}
