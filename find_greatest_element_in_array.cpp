#include <iostream>
using namespace std;

int main()
{
    int greatest_no, arr[10], j = 0;
    cout << "enter no. of elements of array ";
    cin >> j;
    cout << "Entered elements should not exceed  "<< j << " elements \n";

    for (int i = 0; i < j; i++)
    {
        cout << "enter element of array = ";
        cin >> arr[i];
    }

    greatest_no = arr[0];
    for (int i = 1; i < j; i++)
    {
        if (greatest_no < arr[i])
            greatest_no = arr[i];
    }
    cout << "Largest element in array is: " << greatest_no;
    return 0;
}