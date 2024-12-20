#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main() {
    srand(static_cast<unsigned int>(time(0))); 
    int n, random;
    char choice;
    while (true) {
        random = rand() % 100 + 1; 
        cout << "Enter a number between 1 to 100: ";
        cin >> n;
        if (n == random) {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        } else {
            if (n > random) {
                cout << "The number is lesser." << endl;
            } else {
                cout << "The number is greater." << endl;
            }
            cout << "Number was: " << random << endl;
            cout << "Wrong guess. Select any one option" <<endl<<"A. Try Again "<<"    "<<"B. Stop "<<endl;
            cin >> choice;
            if (choice == 'B' || choice == 'b') {
                cout << "Thanks for playing!" << endl;
                break;
            }
        }
    }

    return 0;
}
