/*WAP to print the sum of a given number and its reverse.
Sample Input: 12
Sample Output: 33 [12+21] */
#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    
    // Reverse the number
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    // Print the sum of the number and its reverse
    cout << "Sum: " << num + rev << endl;
    return 0;
}
