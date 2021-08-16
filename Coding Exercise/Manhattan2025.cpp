#include <iostream>
#include <queue>
using namespace std;
int T;

int n;
char box[20][20][20];



void init(int dim){
	for (int z = 0; z < dim; z++)
		for (int x = 0; x < dim; x++)
			for (int y = 0; y < dim; y++) box[z][x][y] = '.';
}

bool inside(int z, int x,int y){
	return  (z >= 0) && (z < 2*n + 1) && (x >= 0) && (x < 2*n + 1) && (y >= 0) && (y < 2*n + 1);
}

void solve(int t){
	cin >> n;
	cout << "Scenario #" << t << ":\n";

	int dim = 2*n + 1;

	init(dim);


	// center (n,n,n)
	for (int z = 0; z < dim; z++)
		for (int x = 0; x < dim; x++)
			for (int y = 0; y < dim; y++){
				int dis = abs(x - n) + abs(y - n) + abs(z - n);
				if (dis <= n) box[z][x][y] = char(dis + '0');
			}

	// cout << dim << '\n';
	for (int z = 0; z < dim; z++){
		cout << "slice #" << z + 1<< ":\n";
		for (int x= 0; x < dim; x++){
			for (int y = 0; y < dim; y++) cout << box[z][x][y];
			cout << '\n';
		}
	}

	cout << '\n';
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	cin >> T;
	for (int i = 1; i <= T; i++) solve(i);
	return 0;
}