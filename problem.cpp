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
    int diff = a - b;
    int prod = a * b;
    int Div = a / b;
    int mod = a % b;
    cout << "Sum of (a + b) : " << sum << endl;
    cout << "Difference of (a - b) : " << diff << endl;
    cout << "Product of (a * b) : " << prod << endl;
    cout << "Division of (a / b) : " << Div << endl;
    cout << "Modulo of (a % b) : " << mod << endl;
    return 0;
}