#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int main(){

    int notes;
    float value; cin >> value;
    
    cout << "NOTAS:" << endl;
    notes = value / 100; value = fmod(value,100);
    cout << notes << " nota(s) de R$ 100.00" << endl;
    notes = value / 50; value = fmod(value,50);
    cout << notes << " nota(s) de R$ 50.00" << endl;
    notes = value / 20; value = fmod(value,20);
    cout << notes << " nota(s) de R$ 20.00" << endl;
    notes = value / 10; value = fmod(value,10);
    cout << notes << " nota(s) de R$ 10.00" << endl;
    notes = value / 5; value = fmod(value,5);
    cout << notes << " nota(s) de R$ 5.00" << endl;
    notes = value / 2; value = fmod(value,2);
    cout << notes << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    notes = value / 1; value = fmod(value,1);
    cout << notes << " moeda(s) de R$ 1.00" << endl;
    notes = value / 0.5; value = fmod(value,0.5);
    cout << notes << " moeda(s) de R$ 0.50" << endl;
    notes = value / 0.25; value = fmod(value,0.25);
    cout << notes << " moeda(s) de R$ 0.25" << endl;
    notes = value / 0.1; value = fmod(value,0.1);
    cout << notes << " moeda(s) de R$ 0.10" << endl;
    notes = value / 0.05; value = fmod(value,0.05) + 0.001;
    cout << notes << " moeda(s) de R$ 0.05" << endl;
    notes = value / 0.01; value = fmod(value,0.01);
    cout << notes << " moeda(s) de R$ 0.01" << endl;
    
    return 0;
}