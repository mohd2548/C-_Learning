// Sum of 2 Numbers 
# include <iostream>
using namespace  std;

int main() {
    // Method one 
    // int a = 2 , b = 4;
    // cout <<"Sum of a and b is : " << (a + b) << endl;

    // input 
    int a,b;
    cout << "Enter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    // cout << "Sum of a and b : " << (a + b) << endl;
    // improved 
    int sum = a + b;
    cout << "Sum of (a + b) : " << sum << endl;
    return 0;
}