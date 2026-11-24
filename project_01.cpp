#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;
    string answer = "yes";

    do {
        cout << "1. Addition" << endl 
             << "2. Subtraction" << endl 
             << "3. Multiplication" << endl 
             << "4. Division" << endl 
             << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;

            switch (choice) 
            {
                case 1:
                    result = num1 + num2;
                    cout << "The result is: " << result << endl;
                    break;

                case 2:
                    result = num1 - num2;
                    std::cout << "The result is: " << result << std::endl;
                    break;

                case 3:
                    result = num1 * num2;
                    cout << "The result is: " << result << endl;
                    break;

                case 4:
                    if (num2 == 0) {
                        cout << "Invalid input (division by zero)" << endl;
                    } else {
                        result = num1 / num2;
                        cout << "The result is: " << result << endl;
                    }
                    break;
            }
           

        } else if (choice == 5) {
            cout << "Exiting the program" << endl;
            break; 
        } else  {
            cout << "Invalid choice" << endl;
        }

         cout << "Do you want to continue? (yes/no): ";
            cin >> answer;

    } while (answer == "yes");

    return 0;
}