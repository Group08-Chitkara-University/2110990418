#include <iostream>
using namespace std;
int main(){
    int sum,avg,i, j, arr[9] ;
    cout << "enter elements you want to add in array (max Limit = 10) \n";
    cin >> j;
    cout<<"Add no. in array"<<endl;
    cin >>arr[0];
    sum = arr[0];

    for (i=1;i<j;i++){
        cout << "Add no. in array"<<endl;
        cin >> arr[i];
        sum = sum+arr[i];
    }

    cout << "sum = " << sum << "\n";
    avg = sum/j;
    cout <<"avg = "<< avg;
}