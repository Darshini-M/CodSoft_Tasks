#include <iostream>
#include <cmath>
#include <limits>

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    // Set up color attributes
    std::cout << "\033[1;33m==============================================================================================================================================\n";
    std::cout << "\t\t\t\t\t\t🔮 Welcome to the Calculator of Possibilities! 🔮\n";
    std::cout << "\t\t\t\t\t    Where numbers hold the key to unlocking countless outcomes!\n";
    std::cout << "==============================================================================================================================================\033[0m";

    // Main calculator loop
    char repeat;
    do {
        // Display operation options with colors
        std::cout << "\033[1;35m"; // Orange text
        std::cout << "\nSelect an operation:\n";
        std::cout << "\033[0m\n";
        std::cout << "1. Addition\n";
        std::cout << "2. Subtraction\n";
        std::cout << "3. Multiplication\n";
        std::cout << "4. Division\n";

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        double num1, num2, result;
        // Blue text
        std::cout << "Enter first number: ";
        std::cin >> num1;
        std::cout << "Enter second number: ";
        std::cin >> num2;
         // Reset color

        switch (choice) {
            case 1: // Addition
                result = add(num1, num2);
                break;
            case 2: // Subtraction
                result = subtract(num1, num2);
                break;
            case 3: // Multiplication
                result = multiply(num1, num2);
                break;
            case 4: // Division
                result = divide(num1, num2);
                if(num2==0){
                    std::cout<<"Invalid number\n";
            
                }
                break;
            default:
                std::cout << "\033[1;31m"; // Red text
                std::cout << "Invalid choice!" << std::endl;
                std::cout << "\033[0m"; // Reset color
                result = std::numeric_limits<double>::quiet_NaN();
        }

        // Display the result without color
        if (!std::isnan(result)) {
             std::cout << "\033[1;32m"; // Green text
            std::cout << "Result: " << result << std::endl;
            std::cout << "\033[0m"; // Reset color
        }

        std::cout << "\033[1;31m"; // Red text
        std::cout << "Do you want to perform another calculation? (Y/N): ";
        std::cout << "\033[0m"; // Reset color
        std::cin >> repeat;
    } while (repeat == 'Y' || repeat == 'y');

    // Thank you message
    std::cout << "\033[1;34m"; // Red text
    std::cout << "\nThank you for using the calculator!\n\n" << std::endl;
    std::cout << "\033[0m"; // Reset color

    return 0;
}

// Function implementations (same as in previous responses)
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        return std::numeric_limits<double>::quiet_NaN();
    }
}
