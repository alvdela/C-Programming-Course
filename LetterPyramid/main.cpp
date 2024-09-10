#include <iostream>
#include <string>

using namespace std;

int main() {
    
    cout << "Please introduce a string for displaying his pyramid" << endl;
    
    string str_pyramid{};
    
    cin >> str_pyramid;
    
    if(str_pyramid.empty()){
        cout << "Nothing to display" << endl;
    }else{
        for(size_t i = 0; i < str_pyramid.length(); i++){
            string aux_str{str_pyramid.at(i)};
            for(size_t j = i; j > 0; j--){
                aux_str = str_pyramid.at(j-1) + aux_str + str_pyramid.at(j-1);
            }
            for(size_t j = str_pyramid.length()-1; j > i; j--){
                aux_str = " " + aux_str + " ";
            }
            cout << aux_str << endl;
        }
    }
    
    return 0;
}
