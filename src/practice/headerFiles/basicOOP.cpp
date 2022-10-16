// #include<iostream>
// #include<string>
// #include "basicOOP.hpp"
// #include "basicChar.hpp"

// Employee::Employee(
//             std::string first_name="firstName", 
//             std::string middle_name="", 
//             std::string last_name="lastName", 
//             std::string company_name="defaultCompany",
//             double salary=50'000.00,
//             int age=18
//         )
// {
//     this->first_name=first_name;
//     this->middle_name=middle_name;
//     this->last_name=last_name;
//     this->company_name=company_name;
//     this->salary=salary;
//     this->age=age;
// }

// void Employee::greet()
// {
//     BasicChar basic_char;
//     auto complete_name = this->first_name + basic_char.space + this->middle_name + basic_char.space + this->last_name; 
//     std::cout<<"\nHello, my name is "<<complete_name<<" and I am "<<this->age<<" years old.\n";

//     std::cout<<"\nI work at "<<this->company_name<<" and earn $"<<this->salary<<" per month.\n";
// }