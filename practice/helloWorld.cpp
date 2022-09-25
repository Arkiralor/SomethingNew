#include<iostream>
#include<string>
#include<ctime>


class TimeUtil{

    public:
        void timestamp(std::string arg);
};

class HelloWorld{
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

class IsPrime{
    /*
    Class to hold all functionality regarding prime numbers.
    */
    private:
        int number;
    public:
        IsPrime(int number){
            /*
            Constructor method for this class.
            */
            this->number=number;
        }
        bool is_prime(int number);
        int find_primes_till(int number);
        void clean_display_array(int array[], int size);
};

void hello_world_func(){
    /*
    Function to call the 'HelloWorld' class methods.
    */
    HelloWorld hello_world;
    hello_world.enter_name();
    hello_world.enter_message();
    hello_world.display_message();
}

void is_prime_func(){
    /*
    Function to call the 'IsPrime' class methods.
    */
    IsPrime obj(7289);
    obj.find_primes_till(10000);
}

int main(){
    /*
    Entry point to runtime.
    */
    // hello_world_func();
    is_prime_func();
    return 0;
}

void HelloWorld::enter_message(void){
    std::cout<<"Enter your message:\t";
    getline(std::cin, this->message);
    if (this->message.empty()){
        this->message = "Hello to the world";
    }
}

void HelloWorld::enter_name(void){
    std::cout<<"Enter your name:\t";
    getline(std::cin, this->name);
    if (this->name.empty()){
        this->name = "Prithoo";
    }
}

void HelloWorld::display_message(void){
    std::cout<<this->message<<", "<<this->name<<".\n";
}

bool IsPrime::is_prime(int number){
    /*
    Class Method to check if a given natural number is a prime number.
    */
    int divisor = 2;
    int upper_limit = number/2;

    if (number<=2){
        return false;
    }

    while(divisor<=upper_limit){
        if (number%divisor==0){
            return false;
        }
        divisor++;
    }
    std::cout<<"\n";
    std::cout<<number<<" is a Prime Number.";
    std::cout<<"\n";
    return true;
}

int IsPrime::find_primes_till(int number){
    /*
    Class Method to find all prime numbers less than or equal to the given number.
    */
    if (number<=4){
        std::cout<<"\nThe entered values ("<<number<<") is too low.\n";
        return 0;
    }
    int size = ((number/2)+1);
    int primes[size];
    int result_current_index = 0;
    TimeUtil time_obj;

    primes[0] = 2;
    result_current_index = 1;

    primes[1] = 3;
    result_current_index = 2;

    int value = 4;
    std::cout<<"\nFinding all Prime Numbers till:\t"<<number<<".\n";
    std::cout<<"\n";

    time_obj.timestamp("Finding all prime numbers...");
    for (value=4;value<=number;value++){
        if (this->is_prime(value)){
            primes[result_current_index] = value;
            result_current_index++;
        }
        else{
            continue;
        }
    }
    time_obj.timestamp("Found all prime numbers.");

    std::cout<<"\nThe list of prime numbers until "<<number<<" is:\n";
    this->clean_display_array(primes, result_current_index-1);
    std::cout<<"\n";

    return 1;
}

void IsPrime::clean_display_array(int array[], int size){
    /*
    Class Method to clear empty elements from the array and display the cleaned results to the console screen.
    */
    int display_array[size], index;
    TimeUtil time_obj;

    time_obj.timestamp("Copying the elements of the array...");
    for (index=0; index<size; index++){
        display_array[index] = array[index];
    }
    time_obj.timestamp("Copied the elements of the array...");

    time_obj.timestamp("Printing the array...");
    for (index=0;index<size;index++){
        std::cout<<display_array[index]<<" ";
    }
    time_obj.timestamp("Printed the array...");
}

void TimeUtil::timestamp(std::string arg){
    // current date/time based on current system
    time_t now = time(0);
   
    // convert now to string form
    char* dt = ctime(&now);
    // convert now to tm struct for UTC
    tm *gmt_time = gmtime(&now);

    std::cout<<"\nTIMESTAMP ("<<arg<<"):\t";
    std::cout<<asctime(gmt_time);
    std::cout<<"\n";
}
