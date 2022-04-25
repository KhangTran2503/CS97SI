#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int N;
int dp[2][5005];

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	string s;
	cin >> s;

	for (int L = N - 1; L >= 0; L--)
		for (int R = L; R < N; R++)
			if (L == R) dp[L & 1][R] = 0;
			else {
				if (s[L] == s[R]) dp[L & 1][R] = dp[(L + 1) & 1][R - 1];
				else dp[L & 1][R] = min(dp[(L + 1) & 1][R],dp[L & 1][R - 1]) + 1;
			}
	cout << dp[0][N - 1];
	return 0;
}