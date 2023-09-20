#include<iostream>
using namespace std;

int main(){
    int BasicSalary, allowance, deductions;

    cout<<"Enter the Salary : ";
    cin>>BasicSalary;

    cout<<"Enter the percentage of allowance : ";
    cin>>allowance;


    cout<<"Enter the percentage of deductions : ";
    cin>>deductions;

    int NET_SALARY = BasicSalary + (BasicSalary*allowance)/100-(BasicSalary*deductions)/100;

    cout<<"Net Salary is : "<<NET_SALARY;

    return 0;
}