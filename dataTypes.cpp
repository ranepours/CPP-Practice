#include <iostream>
#include <cmath>

int main()
{
    //VARIABLES =>
    /* basic data types: int (integers), double (float-point), char (characters), string (like js strings), bool (booleans in js) */
    int score = 0;
    //math operators: the same as in js
    score = 1234 * 99; //updates value
    std::cout << score << "\n"; //logs value to terminal

    //chaining
    int age = 22;
    std::cout << "Hello, I am " << age << "years old.\n"; //tadaaaa

    //inputs and outputs
    std::string password; //leaving it like this for now bc that string shit look mad consfusing at the moment, bUT! in terminal after initializing you can actually type in an input!!!
    //cout: output
    std::cout << "Enter password: ";
    //cin: used for inputs! - makes sense, don't it?
    std::cin >> password;
    std::cout << "Is your password:" << password << "?\n";

    //temperature challenge w/ user input
    double tempF;
    double tempC;
    
    std::cout << "Enter the temperature in Fahrenheit: \n"; 
    std::cin >> tempF;
    
    tempC = (tempF - 32) / 1.8;
  
    std::cout << "It is " << tempC << " degrees Celsius.\n";

    //weight on Mars challenge
    double earthWeight;
    double marsWeight;

    std::cout << "Enter weight on Earth in kilograms: \n";
    std::cin >> earthWeight;

    marsWeight = (earthWeight / 9.81) * 3.711;

    std::cout << "Weight on Mars: " << marsWeight << "kgs.\n";

    //distance in km challenge
    double miles;
    double km;

    std::cout << "Enter distance in mi: \n";
    std::cin >> miles;

    km = miles * 1.609;

    std::cout << "Distance in km: " << km << "km.\n";

    //solving quadratics
    double a, b, c;

    double root1, root2;

    std::cout << "Enter values for A, B, and C. \n";

    std::cout << "A: \n";
        std::cin >> a;
    std::cout << "B: \n";
        std::cin >> b;
    std::cout << "C: \n";
        std::cin >> c;
    
    root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
    root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

    std::cout << "First root: " << root1 << "\n";
    std::cout << "Second root: " << root2 << "\n";

    /* DATA TYPES REVIEW:::::::
    int age = 28;
    double price = 8.99;
    char grade = "A";
    std::string message = "Game Over";
    bool lateToWork = true;
    */

   /*MODIFYERS: 
   used to modify length of data that a particular data type can hold:
   eg) signed, unsigned, short, long 
   
   CONST: like js used to make a variable unreassignable (is that a word?)
   
   TYPE CONVERSION:
   type cast = convert from one data type to another
   looks something like this:::
        double weight1;
        int weight2;
        weight1 = 149.2
        weight2 = (int)weight1 => weight2 is now 149
        
        PLS NOTE THERE IS NO ROUNDING INVOLVED, IT JUST TOOK OFF THE DECIMAL*/
}