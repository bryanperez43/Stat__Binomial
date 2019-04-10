#include <iostream>
#include <cmath>

using namespace std;


void factorial();


int main()
{
    int x;
    double factorialX = 1.0;

    cout << "Enter X: ";
    cin >> x;

    for(int i = 1; i <=x-1; ++i)
    {
        factorialX *= i;
    }

    int k;
    double factorialK = 1.0;

    cout << "Enter K: ";
    cin >> k;

    for(int i = 1; i <=k-1; ++i)
    {
        factorialK *= i;
    }

    double factorialDifference = 1.0;
    for(int i = 1; i <=x-k; ++i)
    {
        factorialDifference *= i;
    }


    double p=0;
    cout << "Enter P (in decimal form): ";
    cin >> p;

    double q=0;

    q = 1 - p;

    double divide=0.0;
    divide = (factorialX/(factorialK * factorialDifference));

	double solution=0.0;
	solution = divide * (pow(p,k) * pow(q,x-k));

	cout << "Your Solution is " << solution << endl;


    return 0;
}
