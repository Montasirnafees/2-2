
#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return x*x*x - x*x - 1;
}

int main()
{
    double a, b, c, e;

    cout << "Enter initial values of a and b: ";
    cin >> a >> b;

    cout << "Enter error tolerance: ";
    cin >> e;

    if (f(a) * f(b) >= 0)
    {
        cout << "Invalid interval!";
        return 0;
    }

    int iteration = 1;

    cout << "\nIteration\t a\t\t b\t\t c\t\t f(c)\n";

    do
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        cout << iteration << "\t\t"
             << a << "\t"
             << b << "\t"
             << c << "\t"
             << f(c) << endl;

        if (fabs(f(c)) < e)
            break;

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;

        iteration++;

    } while (true);

    cout << "\nApproximate Root = " << c << endl;
    cout << "Total Iterations = " << iteration << endl;

    return 0;
}
