#include <iostream>
#include <string>
#include "basicChar.hpp"

class Employee
{
private:
    std::string first_name = "", middle_name = "", last_name = "", company_name = "";
    double salary = 0.00;
    int age = 0;

public:
    Employee(
        std::string first_name,
        std::string middle_name,
        std::string last_name,
        std::string company_name,
        double salary,
        int age);
    std::string resolve_name();
    void greet();
};

Employee::Employee(
    std::string first_name = "firstName",
    std::string middle_name = "",
    std::string last_name = "lastName",
    std::string company_name = "defaultCompany",
    double salary = 50'000.00,
    int age = 18)
{
    this->first_name = first_name;
    this->middle_name = middle_name;
    this->last_name = last_name;
    this->company_name = company_name;
    this->salary = salary;
    this->age = age;
}

std::string Employee::resolve_name()
{
    BasicChar basic_char;
    std::string complete_name;
    if (this->middle_name != "")
    {
        complete_name = this->first_name + basic_char.space + this->middle_name + basic_char.space + this->last_name;
    }
    else
    {
        complete_name = this->first_name + basic_char.space + this->last_name;
    }
    return complete_name;
}

void Employee::greet()
{
    auto complete_name = this->resolve_name();
    std::cout << "\nHello, my name is " << complete_name << " and I am " << this->age << " years old." << std::endl;
    std::cout << "I work at " << this->company_name << " and earn $" << this->salary << " per month." << std::endl;
}