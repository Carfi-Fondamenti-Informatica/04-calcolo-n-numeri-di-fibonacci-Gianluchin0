#include <iostream>
using namespace std;

int main() {
    int n, a=0, b=1, c=0;
    cout << "Inserire un numero intero" << endl;
    cin >> n;
    if (n >= 2) {
        cout << b << endl;
     for (int i=0; i<n; i++) {
        c = a+b;
        a = b;
        b =c;
        cout << c << endl;
     }
    }
    else {
        cout << "errore";
    }
    return 0;
}
