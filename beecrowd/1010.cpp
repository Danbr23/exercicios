#include <iostream>

using namespace std;

int main(){

    int code1, code2, units1, units2;
    float price1, price2, sum;

    cin >> code1 >> units1 >> price1;
    cin >> code2 >> units2 >> price2;

    sum = (price1 * units1) + (price2 * units2);

    printf("VALOR A PAGAR: R$ %.2f\n", sum);

    return 0;
}