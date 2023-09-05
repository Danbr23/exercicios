#include <iostream>

using namespace std;

int main(){

    int n, i, j;
    int leds;
    string valorRecebido, resposta="";
    cin >> n;

    for(i=0;i<n;i++){
        leds=0;
        cin >> valorRecebido;

        for(j=0;j<valorRecebido.length();j++){

            if (valorRecebido[j] == '0')
            {
                leds+=6;
            }else if (valorRecebido[j] == '1')
            {
                leds+=2;
            }else if (valorRecebido[j] == '2')
            {
                leds+=5;
            }else if (valorRecebido[j] == '3')
            {
                leds+=5;
            }else if (valorRecebido[j] == '4')
            {
                leds+=4;
            }else if (valorRecebido[j] == '5')
            {
                leds+=5;
            }else if (valorRecebido[j] == '6')
            {
                leds+=6;
            }else if (valorRecebido[j] == '7')
            {
                leds+=3;
            }else if (valorRecebido[j] == '8')
            {
                leds+=7;
            }else if (valorRecebido[j] == '9')
            {
                leds+= 6;
            }
        }

       resposta+= to_string(leds) + " leds\n";

    }

    cout << resposta;

    return 0;
}