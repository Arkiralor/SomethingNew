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

    const char *DEFAULT_NAME = "Prithoo";
    const char *DEFAULT_MESSAGE = "Welcome to the world";

public:
    HelloWorld()
    {
        this->name = this->DEFAULT_NAME;

        this->message = this->DEFAULT_MESSAGE;
    }
    HelloWorld(std::string name, std::string message)
    {
        if (name != "")
        {
            this->name = name;
        }
        else
        {
            this->name = this->DEFAULT_NAME;
        }
        if (message != "")
        {
            this->message = message;
        }
        else
        {
            this->message = this->DEFAULT_MESSAGE;
        }
    }
    void enter_message(void);
    void enter_name(void);
    void display_message(void);
    void __str__()
    {
        std::cout << "\nNAME:\t" << this->name;
        std::cout << "\nMESSAGE:\t" << this->message;
    }
};

void hello_world_func()
{
    /*
    Function to call the 'HelloWorld' class methods.
    */

    std::string message, name;
    std::cout << "Enter your name:\t";
    getline(std::cin, name);
    std::cout << "Enter your message:\t";
    getline(std::cin, message);
    HelloWorld hello_world(name, message);
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
        this->message = "Welcome to the world";
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
    std::cout << "Complete Message:\t" << this->message << ", " << this->name << ".\n";
}
