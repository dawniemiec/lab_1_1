
#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    setlocale(LC_ALL, "");

    double a, b, c;

    cout << "Podaj a" << endl; cin >> a;
    cout << "Podaj b" << endl; cin >> b;
    cout << "Podaj c" << endl; cin >> c;


    if (a != 0) {
        double delta = b * b - 4 * a * c;
        if (delta > 0) {
            double sqrt_delta = sqrt(delta);
            
            double x1, x2;
            x1 = (-b - sqrt_delta) / (2 * a);
            x2 = (-b + sqrt_delta) / (2 * a);

            cout << "Dwa rozwi¹zania (a=/=0, delta > 0): x1 = " << x1 << ", x2 = " << x2;
        }
        else if (delta == 0) {
            double x = -b / (2 * a);
            cout << "Jedno rozwi¹zanie (a=/=0, delta = 0): x1 = x2 = " << x << endl;
        }
        else {
            cout << "Brak rozwi¹zañ (a=/= 0, delta < 0): x:{}";
        }
    }
    else {
        if (b != 0) {
            //liniowe bx + c
            double x0 = -c / b;
            cout << "Jedno rozwi¹zanie (a=0, b=/=0): x0 = " << x0 << endl;
        }
        else if (c != 0) {
            cout << "Brak rozwi¹zañ (a= 0, b=0, c=/=0): x:{}" << endl;
        }
        else {
            cout << "Nieskoñczenie wiele rozwi¹zañ (a=0, b=0, c=0): x:R" << endl;
        }
    }
    
    
}
