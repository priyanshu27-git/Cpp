#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)  // Base case
        return 1;
    else
        return n * factorial(n - 1);  // Recursive case
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}
