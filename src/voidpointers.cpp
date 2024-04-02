#include <iostream>
using namespace std;

void printNumber(int* numberPtr) {
    cout << *numberPtr << endl;
}
void printLetter(char* charPtr) {
    cout << *charPtr << endl;
}

void printie(void* ptr, char type) {
    switch(type) {
        case 'i':   // handle int*
            cout << *((int*)ptr) << endl;       // cast the pointer into 
                                    // an integer pointer
                    // the first * prints the integer at that address
            break;
        case 'c':   // handle char*
            cout << *((char*)ptr) << endl;       // cast the pointer  
                        // into a character pointer
                    // the first * prints the character at that address

            break;
    }
}

int main()
{
    int number = 5;
    char letter = 'a';
    printNumber(&number);       // prints 5, the value of our number
    printLetter(&letter);       // prints a, the value of our character

    // do the same as the two lines above, but using a void pointer instead
    printie(&number, 'i');       // prints 5, the value of our number
    printie(&letter, 'c');       // prints a, the value of our character

    return 0;
}