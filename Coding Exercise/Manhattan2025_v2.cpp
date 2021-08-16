#include <iostream>
#include <queue>
using namespace std;
int T;
int dx[] = {0,0,0,0,1,-1},
	dy[] = {0,0,1,-1,0,0},
	dz[] = {1,-1,0,0,0,0};

int n;
char box[20][20][20];

struct zxy{
	int x, y, z;
	zxy(int _z,int _x,int _y): z(_z), x(_x), y(_y){};
};



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


	queue<zxy> q;
	q.push(zxy(n,n,n));
	box[n][n][n] = '0';

	while (!q.empty()){
		int z, x, y;
		z = q.front().z;
		x = q.front().x;
		y = q.front().y;

		q.pop();

		if (box[z][x][y] - '0' >= n) continue;

		for (int h = 0; h < 6; h++){
			int _z = z + dz[h];
			int _x = x + dx[h];
			int _y = y + dy[h];
			if (inside(_z,_x,_y) && box[_z][_x][_y] == '.'){
				box[_z][_x][_y] = char(box[z][x][y] + 1);
				q.push(zxy(_z,_x,_y));
			}
		}
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