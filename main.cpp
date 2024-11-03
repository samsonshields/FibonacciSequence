#include <iostream>
using namespace std;

int prompt();

int main() {
    int terms = prompt();
    if (terms <= 1) {
        cout << terms << endl;
    } else {
        cout << "Fibonacci sequence for " << terms << " terms is: " << endl;
        cout << "0 1 ";
        int n1 = 0;
        int n2 = 1;
        int current;
        for (int i = 2; i <= terms; ++i) {
            cout << (current = n1 + n2) << " ";
            n1 = n2;
            n2 = current;
        }
    }
    return 0;
}

int prompt() {
    int n;
    while (true) {
        cout << "Input N: " << endl;
        cin >> n;

        if (n<0) {
            cout << "Out of range! Try again. " << endl;
            continue;
        } else {
            break;
        }
    }
    return n;
}
