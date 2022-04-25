#include <iostream>
#include <algorithm>
using namespace std;
int a[105][105];
int dp[105][105];
int N;

void init(int n){
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= i; j++) dp[i][j] = 0;
} 

void solve(){
	cin >> N;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= i; j++) cin >> a[i][j];

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= i; j++)
			dp[i][j] = max(dp[i - 1][j],dp[i - 1][j - 1]) + a[i][j];

	int ans = 0;
	for (int i = 1; i <= N; i++) ans = max(ans,dp[N][i]);
	cout << ans << '\n';
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T = 1;
	//cin >> T;
	while (T--) solve();
	return 0;
}