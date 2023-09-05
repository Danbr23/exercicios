#include <iostream>

using namespace std;

int main(){

    string name;
    float salary, sale, finalSalary;

    cin >> name >> salary >> sale;

    finalSalary = salary + (sale * 0.15);

    printf("TOTAL = R$ %.2f\n", finalSalary); 
    

    return 0;
}