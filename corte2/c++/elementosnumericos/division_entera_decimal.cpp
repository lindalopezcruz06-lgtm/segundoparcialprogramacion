#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 2;
    
    cout << "Division entera (5 / 2): " << (a / b) << endl;
    cout << "Division decimal (5.0 / 2): " << (static_cast<double>(a) / b) << endl;
    return 0;
}

