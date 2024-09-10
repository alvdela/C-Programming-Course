#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    
    const string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string secret_message{};
    char option{};
    
    cout << "What do you wanna do? \nC-Crypt a message \nD-Decrypt a message" << endl;
    cin >> option;
    
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if(option == 'c' || option == 'C'){
        cout << "Please introduce your secret message" << endl;
        getline(cin,secret_message);
        int position{};
        for(size_t i = 0; i < secret_message.length(); i++){
            position = alphabet.find(secret_message.at(i));
            if(position != string::npos){
                secret_message.at(i) = key.at(position);
            }
        }
        cout << "Your crypted message is: " << secret_message << endl;
    }else if(option == 'd' || option == 'C'){
        cout << "Please introduce your crypted message" << endl;
        getline(cin,secret_message);
        
        int position{};
        for(size_t i = 0; i < secret_message.length(); i++){
            position = key.find(secret_message.at(i));
            if(position != string::npos){
                secret_message.at(i) = alphabet.at(position);
            }
        }
        cout << "Your message is: " << secret_message << endl;
    }else{
        cout << "Wrong option!" << endl;
    }
    
    return 0;
}
