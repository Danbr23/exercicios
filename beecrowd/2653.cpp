#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main(){

	set <string> jewelry;
	string jewel;

	while(cin >> jewel){
		jewelry.insert(jewel);
	}

	cout << jewelry.size() << endl;


	return 0;
}
