#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n,i;
    double kg, dias;

    cin >> n;

    for(i=0;i<n;i++){
        cin >> kg; 
        dias = log2(kg);

        cout << ceil(dias);
        cout << " dias\n";
    }

    return 0;
}