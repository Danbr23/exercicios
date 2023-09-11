#include <iostream>

using namespace std;

int main(){

    int n, i, j, k;
    string phrase1, phrase2, maior;
    
    cin >> n;

    for(i=0;i<n;i++){

        cin >> phrase1 >> phrase2;

        if(phrase1.size() < phrase2.size()){
            j=phrase1.size();
            maior = phrase2;
        }
        else{
             j=phrase2.size();
             maior = phrase1;
        }

        for(k=0;k<j;k++){
            cout << phrase1[k] << phrase2[k];
        } 

        for(k=j;k<maior.size();k++){
            cout << maior[k];
        }

        cout << '\n';
    }


    return 0;
}