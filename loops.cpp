// While loop 
// Q. Print numbers 1 to 5 
#include <iostream>
using namespace std;
// int main(){
//     int count = 1;
//     while (count <= 5){
//         cout << count << "  ";
//         // count = count + 1;
//         // count +=1;
//         count++;
//     }
//     return 0;
// }

// for nth number 

// int main(){
//     int n = 20;
//     int count = 1;
//     while(count <= n){
//         cout << count << " ";
//         count++;
//     }
//     return 0;
// }

//  for user input any number 

int main(){
    int n;
    int count = 1;
    cout << "Enter the  number : ";
    cin >> n;
    while (count <= n){
        cout << count << " ";
        count++;
    }
    return 0;
}