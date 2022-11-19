#include <iostream>
using namespace std;
int main() {
    float i, n, a, sum = 0;
    const int MAX = 20;
    cout << "How many grades would you enter?\t";
    cin >> n;
    do {cout<<"Enter your grades between 0 to 20.";
    } while (a > MAX || a < 0);
    for (i = 1; i <= n; i++) {
        cout << "\n Enter your grade" << i << ":";
        cin >> a;
    if (a <= 20 && a >= 18) {
        cout << "\t It is excellent.";
    } else if (a >= 12 && a <= 17.75) {
        cout << "\t It is good.";
    } else if (a >= 0 && a <= 11.75) {
        cout << "\t It is bad.";
    }}
    sum = sum + a;
    cout << "\t Average is: " << sum / n;
    return 0;
}
