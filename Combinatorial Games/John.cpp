#include <iostream>
#include <math.h>
using namespace std;
int T;

void solve(){
	int n;
	cin >> n;
	int maxa = 0;
	int sumxor = 0;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		maxa = max(maxa,x);
		sumxor ^= x;
	}

	if ((sumxor > 0 && maxa > 1) || (sumxor == 0 && maxa <= 1)) puts("John");
	else puts("Brother");
}


int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	cin >> T;
	while (T--) solve();
	return 0;
}
