#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char string[] = "завтра € поеду завтра домой, поэтому € очень рад, что завтра уже буду дома";
    char word[10], words_for_equal[10];
    bool active = false;
    cout << "Ќачальна€ строка: " << string;
    for (int i = 0, letter = 0, letterForEquals = 0; i < strlen(string); i += letter + 1, letter = 0) {
        for (int j = i; ; j++) {
            word[letter] = string[j];
            letter++;
            if (string[j + 1] == ' '  || string[j + 1] == '\0') {
                word[letter++] = '\0';
                break;
            }
        }
        for (int j = i + letter--; j < strlen(string); j++) {
            if (string[j] == ' '  || string[j + 1] == '\0'  || string[j] == ',') {
                if (letter != letterForEquals) {
                    letterForEquals = 0;

                    continue;
                }
                for (int k = 0; k < letter; k++) {
                    if (word[k] == words_for_equal[k])
                        active = true;
                    else {
                        active = false;
                        break;
                    }
                }
                if (active) {
                    for (int k = j - letter; k < j; k++) {
                        string[k + 1] = ' ';
                        string[k] = string[k + 1];
                    }
                    words_for_equal[letterForEquals] = '\0';
                    letterForEquals = 0;
                }
            }
            words_for_equal[letterForEquals] = string[j];
            letterForEquals++;
            if (string[j + 1] == ' '  || string[j + 1] == '\0'  || string[j + 1] == ',')
                words_for_equal[letterForEquals] = '\0';
            if (i > strlen(string) - 8)
                cout << "Hello";
        }
    }
    cout << endl << string << endl;
    SetConsoleCP(866);
    system("pause");
}