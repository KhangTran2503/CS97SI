#include <iostream>
#include <algorithm>
using namespace std;
const int INF = (int)(1e9) + 10;
int V, P;
int dp[35][305];
int cost[305][305];
int a[305];

void init(){
	for (int i = 0; i <= P; i++)
		for (int j = 0; j <= V; j++) dp[i][j] = INF;

	dp[0][0] = 0;

	for (int i = 1; i <= V; i++)
		for (int j = i; j <= V; j++){
			cost[i][j] = 0;
			int mid = (i + j) >> 1;
			for (int k = i; k <= j; k++)
				cost[i][j] += abs(a[k] - a[mid]);
		}
}


int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> V >> P;
	for (int i = 1; i <= V; i++) cin >> a[i];

	init();

	for (int i = 1; i <= P; i++)
		for (int j = 1; j <= V; j++)
				for (int k = 1; k <= j; k++)
					dp[i][j] = min(dp[i][j],dp[i - 1][k - 1] + cost[k][j]);

	cout << dp[P][V];
	return 0;
}