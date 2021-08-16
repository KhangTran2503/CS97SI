#include <iostream>
using namespace std;

int n;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	while (cin >> n){
		double u = n;
		while (u > 18) u/=18;
		if (u <= 9) cout << "Stan wins.\n";
		else cout << "Ollie wins.\n";
	}
	return 0;
}
