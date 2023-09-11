#include <iostream>
#include <string>

using namespace std;

int main(){

    int i=0, contador=0;
    string phrase;

    
    while(getline(cin,phrase)){
        contador=0;
        for(i=0;i<phrase.length();i++){
            if(phrase[i] == ' ') cout << ' ';
            else{
                if(contador%2==0){
                    cout << (char) toupper(phrase[i]);
                    contador++;
                }
                else{
                    cout << (char) tolower(phrase[i]);
                    contador++;
                }
            }
        }
        cout << "\n";
        
        
    }
    return 0;
}