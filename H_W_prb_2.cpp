// Sum of all No from 1 to N which are dvisible by 3
#include <iostream>
using namespace std;

//* using for loop

// int main(){
//     int n , sum =0;
//     cout<<"Number : ";
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         if(i%3==0){
//             sum += i;
//         }
//     }
//     cout << "sum of num from 1 to n divsible by 3 : " << sum << endl;
//     return 0;
// }

//* Using while loop 

// int main(){
//     int n, sum = 0,i =1;
//     cout << "Number : ";
//     cin >> n;
//     while(i<=n){
//         if(i%3==0){
//             sum += i;
//         }
//         i++;
//     }
//     cout << "Sum of number using while loop :  " << sum <<endl;
//     return 0;
// }

// * Q Print Factorial of a number N
//* using for Loop

// int main(){
//     int n;
//     int Fact = 1;
//     cout <<"Number : ";
//     cin >> n;
//     if (n<0){
//         cout << "Factorial not defined for negative numbers\n";
//         return 0;
//     }
//     for (int i=1;i<=n;i++){
//         Fact *= i;
//     }
//     cout << Fact << endl;
//     return 0;
// }

//* Using while loop 

int main(){
    int n,i=1,Factorial =1;
    cout <<"Number : ";
    cin >> n;
    if (n<0){
        cout << "Factorial not defined for negative numbers\n";
        return 0;
    }
    while(i<=n){
        Factorial *= i;
        i++;
    }
    cout << Factorial ;
    return 0;
}
