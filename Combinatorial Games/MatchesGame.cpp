// Nim game
#include <iostream>
using namespace std;

void solve(int m){
	int sumxor = 0;
	for (int i = 0; i < m; i++){
		int x;
		cin >> x;
		sumxor ^= x;
	}
	if (sumxor == 0) cout << "No\n";
	else cout << "Yes\n";
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int M;
	while (cin >> M) solve(M);
	return 0;
}