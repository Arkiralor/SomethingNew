#include <iostream>
#include <string>
#include <ctime>
#include <cstdio>

class HelloWorld
{
    /*
    Class to hold all functionality regarding 'Hello World.'
    */
private:
    std::string message, name;

public:
    void enter_message(void);
    void enter_name(void);
    void display_message(void);
};

void hello_world_func()
{
    /*
    Function to call the 'HelloWorld' class methods.
    */
    HelloWorld hello_world;
    hello_world.enter_name();
    hello_world.enter_message();
    hello_world.display_message();
}

int main()
{
    /*
    Entry point to runtime.
    */
    hello_world_func();
    return 1;
}

void HelloWorld::enter_message(void)
{
    std::cout << "Enter your message:\t";
    getline(std::cin, this->message);
    if (this->message.empty())
    {
        this->message = "Hello to the world";
    }
}

void HelloWorld::enter_name(void)
{
    std::cout << "Enter your name:\t";
    getline(std::cin, this->name);
    if (this->name.empty())
    {
        this->name = "Prithoo";
    }
}

void HelloWorld::display_message(void)
{
    std::cout << this->message << ", " << this->name << ".\n";
}
