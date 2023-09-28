#include <bits/stdc++.h>
#define endl '\n';

using namespace std;

int main(){
	
	
	
	int n; cin >> n;
	vector<int> v(n,0);


	for(int i=0;i<n;i++){
		cin >> v[i];
	}

	sort(v.begin(),v.end());

	for(int i=0;i<n;i++){
                cout << v[i] << ' ';
        }

	cout << endl;

	int lista[]= {7,6,5,4,3,2,1};
	
	sort(lista,lista+7);

	for(int x: lista) cout << x << ' ';

	cout << endl;
	
	return 0;

}
