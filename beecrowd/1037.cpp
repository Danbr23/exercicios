#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int main(){

    double x; cin >> x;

    if(x < 0) cout << "Fora de intervalo\n" ;
    else if(x <= 25) cout << "Intervalo [0,25]\n";
    else if(x <= 50) cout << "Intervalo (25,50]\n";
    else if(x <= 75) cout << "Intervalo (50,75]\n";
    else if(x <= 100) cout << "Intervalo (75,100]\n";
    else cout << "Fora de intervalo\n";
    

    return 0;
}