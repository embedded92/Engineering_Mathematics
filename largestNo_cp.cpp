/*
 * largestNo_cp.cpp
 *
 *  Created on: Oct 3, 2019
 *      Author: ramneet
 */


#include <iostream>
using namespace std;
int main()
{
    int i, n;
    int arr[100];   //array declaration with 100 elements
    cout << "Enter number of elements: /n";
    cin >> n;
    // Store number entered by the user
    for(i = 0; i < n; ++i)
    {
       cout << "Enter Number: ";
       cin >> arr[i];
    }
    // store largest number to arr[0]
    for(i = 1;i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])  //making comparision between two adjecent numbers
           arr[0] = arr[i];   //replacing the two numbers accordingly
    }
    cout << "Largest element = " << arr[0];
    return 0;
}



