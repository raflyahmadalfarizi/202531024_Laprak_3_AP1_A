#include <iostream>
using namespace std;

int main() {
    int speed;
    cin >> speed;
    
    if (speed < 40) {
        cout << "Basic";
    } else if (speed >= 40 && speed <= 79) {
        cout << "Intermediate";
    } else if (speed >= 80 && speed <= 119) {
        cout << "Advanced";
    } else {
        cout << "Ultra";
    }
    
    return 0;
}

