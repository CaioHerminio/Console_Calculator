#include <iostream>

int main(){
    std::cout << "========================\n";
    std::cout << "== CONSOLE CALCULATOR ==\n";
    std::cout << "========================\n";

    double num_1;
    char op;
    double num_2;

    std::cout << "|| Enter the first number: ";
    std::cin >> num_1;

    std::cout << "|| Enter the opeartion (+, -, *, /): ";
    std::cin >> op;

    std::cout << "|| Enter the second number: ";
    std::cin >> num_2;

    switch(op){
        case '+':
            std::cout << "|| Result: " << num_1 + num_2 <<'\n';
            break;
        case '-':
            std::cout << "|| Result: " << num_1 - num_2 <<'\n';
            break;        
        case '*':
            std::cout << "|| Result: " << num_1 * num_2 <<'\n';
            break;                    
        case '/':
            std::cout << "|| Result: " << num_1 / num_2 <<'\n';
            break;                    
        default:
            std::cout << "|| Invalid";
            break;
    }

    std::cout << "========================\n";

    return 0;
}
