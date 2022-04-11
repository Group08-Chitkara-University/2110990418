#include <iostream>
using namespace std;
int main(){
    int a,b,c,sum=0;
    cout << "First Input";
    cin >> a ;
    cout << "Second Input";
    cin >> b ;
    cout << "Third Input";
    cin >> c ;
    sum = a+b+c;

    if (sum!=180){
        cout << "Error!!";
    }
    else if ((a==b && b==c && c==a)){
        cout << "Equilateral";
    }
    else if((a!=b && b!=c && c!=a)){
        cout << "Scalene";
    }
    else if ((a = (b||c)) || (b = (c||a)) || (c=(b||a)) ){
        cout << "Isosceles";
    }
}