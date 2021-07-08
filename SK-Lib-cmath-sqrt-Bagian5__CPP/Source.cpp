#include <cmath>
#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    float x = 984.0;
    float y = 673.0;

    cout << fixed << setprecision(12) << sqrtf(x) << endl;
    cout << fixed << setprecision(12) << sqrtf(y) << endl;

    _getch();
    return (0);
}