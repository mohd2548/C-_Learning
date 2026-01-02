#include <iostream>
using namespace std;

//*  Logic we are using  "i=2 to i<= n-1 "   {2 to n-1}

int main(){
    int n;
    bool isPrime = true;
    cout << "Enter the Number : ";
    cin >> n;
    for(int i=2; i<=n-1; i++){
        if (n%i == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime == true){
    cout << "Prime No \n";
    }else{
        cout << "Non Prime Number \n";
    }
    return 0;
}



// * Using Logic "i=2 to i*i<=n"   ["2 to  √n " ] {key = alt +251}

// int main() {
//     int n;
//     bool Isprime = true;
//     cout <<  "Enter the Number : ";
//     cin >> n;
//     for(int i=2;i*i<=n;i++){
//         if (n%i == 0){  // If non prime then loop will get break
//             Isprime = false;
//             break;
//         }
//     }
//     if(Isprime == true){
//         cout << "Prime No " << endl;
//     }else{
//         cout << "Non Prime No " << endl;
//     }
//     return 0;
// }