//Print 1 to n without using loops
#include <iostream>
using namespace std;

float find_mean(int values[], int n){
    if( n == 1){
        return (float)values[n-1];
    }else{
       return ((float)(find_mean(values,n-1)*values[n-1] + values[n-1])/n); 
    }
    
    
}



int main() {
    int values[] = {1,2,3,4,5};
    int size = sizeof(values) / sizeof(values[0]);
    
    cout << find_mean(values, size);

    return 0;
}
