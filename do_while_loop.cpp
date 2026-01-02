#include <iostream>
using namespace std;

int main(){
    int n =10;
    int i = 1;
    int sum = 0;
    do{
        // cout << i << endl;
        sum += i;
        i ++ ;
    }while (i<=n);
    cout << "sum of number from 1 to n = " << sum << endl;
    return 0;
}