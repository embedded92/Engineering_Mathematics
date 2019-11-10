/*
 * taylor.cpp
 *
 *  Created on: Sep. 23, 2019
 *      Author: Harman
 */
#include <iostream> //header file included to allow program to perform input and output operations
#include <cmath>  //header file included to allow program to perform mathematical operations in

using namespace std;  //cout defined inside std namespace

int factorial(int n)  // factorial function is created which will compute the factorial of a number passed to this function as a parameter
{
    int fact =1, i;  //declaring integer variables
    for(i=1; i<=1; i++)  //for loop begins
    {
        fact =fact*i; //factorial is calculated using loop
        }
        return fact; //factorial value is returned to the main function
    } //function body ends here

int main()  //main function begins
{
    float Rn =0; //declaring Rn to be of float data type and initializing value to 0
    float x=10.5;  //declaring x to be of float data type and initializing its value to 10.5
    int n;  //declaring variable n to be of integer data type
for(n=0;n<=17; n++)  //for loop begins and will continue until the condition is satisfied
{
    int a=n+1;
    int fact;
    fact =factorial(a); //calling the factorial function and storing the value returned in the variable
   //calculating the remainder Rn
    float R1=exp(x);
    float R2=pow(x,a);  //calculated at a=0
    Rn=R1*R2; //Rn is calculated
    float Rf= Rn/fact; //Rf is calculated by dividing Rn by factorial
    cout<< "n = "<<n<<" "<<"Rn = "<<Rf<<endl;  //output is displayed
}
 return 0;  //main function is of integer type so return 0 is used
} //end of main function
//end of program
