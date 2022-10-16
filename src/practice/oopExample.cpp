#include<iostream>
#include<string>
#include "headerFiles/basicOOP.hpp"

Employee initiate(void){
    /*
        This function calls the constructor of the Employee class and initiates it with the user-defined arguments.
    */
    std::string first_name, middle_name, last_name, company_name;
    double salary;
    int age;
    // Code to enter the employee's name:
    std::cout<<"\nEnter your first name, middle name and last name (press 'return' to submit the argument):\t";
    std::getline(std::cin, first_name);
    std::getline(std::cin, middle_name);
    std::getline(std::cin, last_name);
    std::cout<<"\n";

    // Code to enter the name of the company the employee works for:
    std::cout<<"Enter the name of the company you work for:\t";
    std::getline(std::cin, company_name);
    std::cout<<"\n";

    // Code to enter the employee's age and saslary:
    std::cout<<"Enter your salary:\t";
    std::cin>>salary;
    std::cout<<"Enter your age:\t";
    std::cin>>age;

    // Call the constructor of the class and return the object:
    Employee employee(
        first_name,
        middle_name,
        last_name,
        company_name,
        salary,
        age
    );

    return employee;
}

int main(){
    auto employee = initiate();
    employee.greet();

    return 0;
}