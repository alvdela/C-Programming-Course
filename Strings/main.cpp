#include <iostream>
#include <cstring> //for c style functions
#include <cctype> // for charater-based functions
#include <string>

using namespace std;

int main() {
    
    /* String in C */
    
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};
    
    cout << "Please enter your fist name: ";
    cin >> first_name;
    
    cout << "Please enter your last name: ";
    cin >> last_name;
    
    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

    strcpy(full_name, first_name); // copy first_name to full_name
    strcat(full_name, " "); // concatenate full_name with a space
    strcat(full_name, last_name); 
    
    cout << "Your full name is: " << full_name << endl;
    
    cout << "Enter your full name: ";
    cin.getline(full_name, 50); //captura hasta 50 caracteres de la consola y los almacena en full_name
    cout << "Your full name is: " << full_name << endl;
    
    for(size_t i{0}; i < strlen(full_name); i++){
        if(isalpha(full_name[i])){
            full_name[i] = toupper(full_name[i]);
        }
    }
    
    cout << "Your full name is: " << full_name << endl;
    
    /* Strings in C++ */
    
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1,0,3};
    string s6(10, 'X');

    cout << s0 << endl; //No garbage
    cout << s0.lenght() << endl; //empty string
    
    
    return 0;
}
