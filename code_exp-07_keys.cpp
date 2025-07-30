#include<iostream>
using namespace std;

int main() {
    int keys;
    int marks[6] = {300, 38, 3555, 585, 44, 3};
    cout << "Enter the value you wanna know: ";
    cin >> keys;
    
    bool found = false;
    for (int i = 0; i < 6; i++) {
        if (keys == marks[i]) {
            cout << "Key found at location: " << i;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Key not found.";
    }
}
