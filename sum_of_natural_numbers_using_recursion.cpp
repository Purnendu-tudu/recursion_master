#include <iostream>
using namespace std;

int sum_of_natural_number(int n){
    if(n == 1){
        return 1;
    }
    return n + sum_of_natural_number(n-1);
}



int main() {
    int n = 10;
    cout << sum_of_natural_number(n);
    

    return 0;
}
