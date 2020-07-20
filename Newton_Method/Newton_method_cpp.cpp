/*
 * Newton_method_cpp.cpp
 * Created on: Nov 18, 2019
 * Author: ramneet
 */
// C++ program for implementation of Newton Raphson Method for
// solving equations
#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

// An example function whose solution is determined using
//The function is x^5 + x^3  + 3
double function(double x)
{
    return x*x*x*x*x + x*x*x +3;
}

// Derivative of the above function which is 5*x^4 + 3*x^2
double derivativeFunc(double x)
{
    return 5*x*x*x*x + 3*x*x ;
}

// Function to find the root
void newtonRaphson(double x)
{
    double h = function(x) / derivativeFunc(x);
    while (abs(h) >= 0.001)
    {
        h = function(x)/derivativeFunc(x);

        // x(i+1) = x(i) - f(x) / f'(x)
        x = x - h;
    }

    cout << "The calculated root is : " << x;
}

// Driver program to test above
int main()
{
    double x0 = -30; // Initial values assumed
    newtonRaphson(x0);
    return 0;
}
