#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N;
	while (1){
		cin >> N;
		if (N == 0) break;
		double ans = 1e18;
		for (int i = 0; i < N; i++){
			int v, t;
			cin >> v >> t;
			if (t < 0) continue;

			ans = min(ans,(4.5/v)*3600 + t);
		} 
		cout << ceil(ans) << '\n';
	}
	return 0;
}