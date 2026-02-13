#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    float sum = 0;
    
    for (int i = 1; i <= 100; i++) {
        sum = sum + 1 / pow(i, 2);
    }
    
    cout << "Сумма ряда: " << sum << endl;
    
    return 0;
}