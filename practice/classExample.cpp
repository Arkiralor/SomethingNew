/*
    I am just playing with multiple constructors for a single class here.
*/

#include <iostream>
#include <string>

class ExampleClass
{
private:
    int number;
    float decimalNumber;
    std::string someString;

    const char *defaultConstructorMessage = "\nInvoking default constructor for class <ExampleClass>\n";
    const char *customConstructorMessage = "\nInvoking custom constructor for class <ExampleClass>\n";
    const char *defaultDestructorMessage = "\nInvoking default destructor for class <ExampleClass>\n";

public:
    ExampleClass()
    {
        std::cout << this->defaultConstructorMessage;
        this->number = 12;
        this->decimalNumber = 12.75;
        this->someString = "Hello world";
    }
    ExampleClass(int number, float decimalNumber, std::string someString)
    {
        std::cout << this->customConstructorMessage;
        if (number != 0)
        {
            this->number = number;
        }
        if (decimalNumber != 0.00)
        {
            this->decimalNumber = decimalNumber;
        }
        if (someString != "")
        {
            this->someString = someString;
        }
    }
    ~ExampleClass()
    {
        std::cout << this->defaultDestructorMessage;
    }

    void __str__()
    {
        std::cout << "\nNumber:\t" << this->number << " .";
        std::cout << "\nDecimal Number:\t" << this->decimalNumber << " .";
        std::cout << "\nNormal String:\t" << this->someString << ".";
    }
};

void call_example_class(std::string arg)
{

    if (arg == "default")
    {
        ExampleClass example_class;
        example_class.__str__();
        std::cout << "\n";
    }
    else if (arg == "custom")
    {
        ExampleClass example_class(
            99,
            25.12,
            "This is a test.");

        example_class.__str__();
        std::cout << "\n";
    }
    else
    {
        std::cout << "\nInvalid Argument for 'call_example_class(std::string)'; valid options are:\n\t1. 'default'\n\t2. 'custom'\n";
    }
}

int main()
{
    std::string arg = "default";
    call_example_class(arg);
    return 0;
}