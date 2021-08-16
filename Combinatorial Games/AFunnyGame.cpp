
#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

	int n;
	while (1){
		cin >> n;
		if (n == 0) break;
		if (n <= 2) cout << "Alice\n";
		else cout << "Bob\n";
	}
	return 0;
}