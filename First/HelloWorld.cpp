#include<iostream>
using namespace std;

int main(){

    // Declare float
    float annualSalary;
    // Console in and assign to annualSalary
    cout << "Please enter your annual salary:";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    // console out
    cout << "Your monthly salary is " << monthlySalary;


    return 0;
}