#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int mdc(int n1,int n2);

int main(){

	int n1, n2;
	cin >> n1 >> n2;
	cout << mdc(n1,n2) << endl;	

	return 0;
}


int mdc(int n1,int n2){
	
	if(n1==n2) return n1;
	int menor = min(n1,n2);
	int maior = max(n1,n2);
	if(menor==0) return maior;
	else{
		int resto = maior % menor;
		return mdc(menor,resto);	
	} 	

}
