#include <iostream>
using std::cin;
using std::cout;

int doubleDigitValue(int digit) {
    int doubledDigit = digit * 2;
    int sum;
    if (doubledDigit > 10) sum = 1 + doubledDigit % 10;
    else sum = doubledDigit;
    return sum;
}

int convertCharDigitToInt(int input)
{
    int output = input - 'O';
    return output;
}

// int main(){
//     int digit;
//     cout << "Enter a single digit number, 0-9: ";
//     cin >> digit;
//     int doubledDigit = digit * 2;
//     int sum;
//     if (doubledDigit >= 10) sum =  1 + doubledDigit % 10;
//     else sum = doubledDigit;
//     cout << "Sum of digits in doubled number: " << sum << "\n";
// }

// int main()
// {
//     cout << "Enter a single digit number: ";
//     int digit = cin.get();
//     int sum = digit;
//     cout << "Is the sum of digits " << sum << "? \n";
//     cout << "or is the sum of digits " << sum - '0' << "?";
// }

// int main()
// {
//     char digit;
//     int checksum = 0;
//     cout << "Enter a six-digit number: ";
//     for (int position = 1; position <= 6; position ++) {
//         cin >> digit;
//         // checksum += digit - '0';
//         if (position % 2 == 0) checksum += digit - '0';
//         else checksum += doubleDigitValue(digit - '0');

//     }
//     cout << "Checksum is " << checksum << ". \n";
//     if (checksum % 10 == 0) {
//         cout << "Checksum is divisible by 10. Valid. \n";
//     } else {
//         cout << "Checksum is not divisible by 10. Invalid. \n";
//     }
// }

int main(){
    char digit;
    int oddLengthChecksum = 0;
    int evenLengthChecksum = 0;
    int position = 1;
    cout << "Enter a number: ";
    digit = cin.get();
    while (digit != 10) {
        if (position % 2 == 0) {
            oddLengthChecksum += doubleDigitValue(digit - '0');
            evenLengthChecksum += digit - '0';
        } else {
            oddLengthChecksum += digit - '0';
            evenLengthChecksum += doubleDigitValue(digit - '0');
        }
        digit = cin.get();
        position++;
    }
    int checksum;
    if ((position - 1) % 2 == 0) checksum = evenLengthChecksum;
    else checksum = oddLengthChecksum;
    cout << "Checksum is " << checksum << ". \n";
    if (checksum % 10 == 0) {
        cout << "Checksum is divisible by 10. Valid. \n";
    } else {
        cout << "Checksum is not divisible by 10. Invalid. \n";
    }
}
