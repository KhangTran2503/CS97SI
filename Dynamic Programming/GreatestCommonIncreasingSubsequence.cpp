#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a[505];
int b[505];
vector<int> pos[505];
int dp[505][505];
int N, M;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> a[i];

	cin >> M;
	for (int i = 1; i <= M; i++) cin >> b[i];
	
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			if (a[i] == b[j]) {
				pos[i].push_back(j);
				dp[i][j] = 1;
			}

	for (int i = 2; i <= N; i++){
		if (a[i].empty()) continue;
		for (int k = 1; k < i; k++){
			if (a[k].empty()) continue;
			if (a[k] < a[i]){
				
			}
		}
	}

	return 0;
}