#include <iostream>
using namespace std;
// Sum of all odd numbers from 1 to n

// int main(){
//     int n;
//     int i = 1;
//     int sum = 0;
//     cout << "Enter the number ";
//     cin >> n;
//     for (int i=1;i<=n;i++){
//         if(i%2 != 0){
//             sum += i;
//         }
//     }
//     cout << sum << endl;
//     return 0;
// }

int main(){
    int n = 11;
    int oddSum = 0;
    for(int i=1;i<=n;i++){
        if(i%2 !=0){
            cout << i << " \n";
            oddSum += i;
        }
    }
    cout << "Odd sum value = " << oddSum << endl;
    return 0;
}