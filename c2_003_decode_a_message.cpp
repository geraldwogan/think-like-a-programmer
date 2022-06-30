#include <iostream>
using std::cin;
using std::cout;

int main(){
    int input[16] = {18, 12312, 171, 763, 98423, 1208, 216, 11, 500, 18, 241, 0, 32, 20620, 27, 10};
    char outputCharacter;
    enum modeType {UPPERCASE, LOWERCASE, PUNCTUATION};
    int number;
    modeType mode = UPPERCASE;
    cout << "Enter some numbers ending with −1: ";
    do {
        cin >> number;
        cout << "Number read: " << number;
        switch (mode) {
            case UPPERCASE:
                number = number % 27;
                cout << ". Modulo 27: " << number << ". ";
                if (number == 0) {
                    cout << "Switch to LOWERCASE";
                    mode = LOWERCASE;
                }
                break;
            case LOWERCASE:
                number = number % 27;
                cout << ". Modulo 27: " << number << ". ";
                if (number == 0) {
                    cout << "Switch to PUNCTUATION";
                    mode = PUNCTUATION;
                }
                break;
            case PUNCTUATION:
                number = number % 9;
                switch (number) {
                    case 1: outputCharacter = '!'; break;
                    case 2: outputCharacter = '?'; break;
                    case 3: outputCharacter = ','; break;
                    case 4: outputCharacter = '.'; break;
                    case 5: outputCharacter = ' '; break;
                    case 6: outputCharacter = ';'; break;
                    case 7: outputCharacter = '"'; break;
                    case 8: outputCharacter = '\''; break;
                }
                cout << ". Modulo 9: " << number << ". ";
                if (number == 0) {
                    cout << "Switch to UPPERCASE";
                    mode = UPPERCASE;
                }
                break;
        }
        cout << "\n";
    } while (number != -1);
}
