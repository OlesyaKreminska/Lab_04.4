#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double xp, xk, dx, R1, R2, x, y;

    cout << " R1= "; cin >> R1;
    cout << " R2= "; cin >> R2;
    cout << " xp=  "; cin >> xp;
    cout << " xk=  "; cin >> xk;
    cout << " dx= "; cin >> dx;


    cout << "+------------+------------+" << endl;
    cout << "| x          | y          |" << endl;
    cout << "+------------+------------+" << endl;


    for (x = xp; x <= xk; x += dx) {
        if (x <= -R1)
            y = -(x + 2);
        else if (-R1 < x && x <= 0)
            y = sqrt(R1 * R1 - x * x) - R1;
        else if (0 < x && x <= R2)
            y = sqrt(R2 * R2 - (x - R2) * (x - R2));
        else if (x > R2 && x < 4)
            y = R2;
        else
            y = -x + 6;


        cout << fixed << setprecision(2);
        cout << "| " << setw(10) << x << "| " << setw(10) << y << "|" << endl;
    }
    cout << "+------------+------------+" << endl;

    return 0;
}
