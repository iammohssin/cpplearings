#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a Number:";
    cin >> num;
    if (num % 2 == 0){
        cout << num<< " Is Even";
    } else
        cout<< num << " Is Odd";

    return 0;
}
