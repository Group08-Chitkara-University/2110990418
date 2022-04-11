#include <iostream>
using namespace std;

int main(){
    int cost, discount;
    cout << "Enter The Amount you shoped for ";
    cin >> cost;

    if (cost > 1000){
        discount = cost - ((0.1)*cost);
        cout << "After Discount = " << discount;
    }
    else {
        cout << "Discount is valid if you shop for more than 1000";
    }
}