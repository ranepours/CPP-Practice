//if, else, else if & switch statements => set up looks to be the same as js
//relational and logical operators

#include <iostream>
int main(){
    int grade = 90;
    if (grade > 60){
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

//switch statement example
    int number = 9;
    switch(number){
        case 1:
            std::cout << "Bulbasaur\n";
            break;
        case 2:
            std::cout << "Ivysaur\n";
            break;
        case 3:
            std::cout << "Venusaur\n";
            break;
        case 4:
            std::cout << "Charmander\n";
            break;
        case 5:
            std::cout << "Charmeleon\n";
            break;
        case 6:
            std::cout << "Charizard\n";
            break;
        case 7:
            std::cout << "Squirtle\n";
            break;
        case 8:
            std::cout << "Wartortle\n";
            break;
        case 9:
            std::cout << "Blastoise\n";
            break;
        default:
            std::cout << "Unknown\n";
            break;
    }

//space example
    double weight;
    int x;

    std::cout << "I have information about these planets: \n";
    std::cout << 
    "1. Mercury | 2. Venus | 3. Earth | 4. Mars | 5. Jupiter | 6. Saturn | 7. Uranus | 8. Neptune\n";

    std::cout << "Enter your current weight on Earth:\n";
    std::cin >> weight;

    std::cout << "Enter the number of the planet you intend to visit:\n";
    std::cin >> x;

    switch(x){
        case 1:
            weight = weight * 0.38;
            break;
        case 2:
            weight = weight * 0.91;
            break;
        case 3:
            weight = weight * 1;
            break;
        case 4:
            weight = weight * 0.38;
            break;
        case 5:
            weight = weight * 2.34;
            break;
        case 6:
            weight = weight * 1.06;
            break;
        case 7: 
            weight = weight * 0.92;
            break;
        case 8:
            weight = weight * 1.19;
            break;
        default:
            std::cout << "Please enter number from selection: \n";
            break;
    }

    std::cout << "Your weight: " << weight << "\n";
}