#include <bits/stdc++.h>

#define endl '\n';

using namespace std;


int main (){
  
  string phrase;
  char c;
  int n,i,j,aux,shift; cin >> n;
  

  for(i=0;i<n;i++){
    
    cin >> phrase >> shift;
    
    for(j=0;j<phrase.length();j++){
    
      aux = phrase[j] - shift;
      
      if(aux < 65){
    
        aux = 90 - (65 - (aux) - 1);
        cout << (char) aux;
      }else{
        
        cout << (char) aux;
      }
    }
    cout << endl;
  }

return 0;
}
