
/*
 * epsilon.cpp
 *
 *  Created on: Sep 20, 2019
 *      Author: ramneet
 */
#include<iostream> //header file included to allow program to perform input and output
using namespace std; //cout defined inside std namespace

float machineEpsilon()  // function begins
{
	float epsilon;  //declaring epsilon as float data type
	epsilon = 1;    //initializing the value to 1
	while(1+epsilon>1)  // continue until the condition is satisfied
	epsilon=epsilon/2;  // dividing epsilon by 2
	epsilon=epsilon*2;  //multiplying epsilon by 2
	return epsilon;  //  return the value of epsilon to main function
}

int main() //main function: program starts from here
{
float xEpsilon;   //declaring xEpsilon as float data type
	xEpsilon= machineEpsilon();  //calling a function for machine error Epsilon calculation as machineEpsilon()
	cout<<"Machine epsilon is : "<<xEpsilon;    //display the value of Machine Epsilon
	return 0;    //main function is of integer type so return 0 is used
}//end of main
// end of program
