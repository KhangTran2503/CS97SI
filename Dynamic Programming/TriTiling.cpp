#include <iostream>
using namespace std;
typedef long long ll;
ll f[31];
ll g[31];

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	f[0] = 1;
	f[1] = g[1] = 1;
	f[2] = 3;
	g[2] = 4;
	for (int i = 3; i < 31; i++){
		f[i] = f[i - 2] + 2LL*g[i - 1];
		g[i] = f[i - 1] + g[i - 2];
	}

	int n;
	while (1){
		cin >> n;
		if (n == -1) break;
		if (n % 2 == 1) cout << 0 << '\n';
		else cout << f[n] << '\n';
	}
	return 0;
}