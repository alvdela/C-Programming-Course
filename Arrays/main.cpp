#include <iostream>

using namespace std;

int main() {

    char vowels[] {'a','e','i','o','u'};
    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    
    double hi_temps [] {90.1,89.8,77.5,81.6};
    cout << "The first temperature is: " << hi_temps[0] << endl;
    
    hi_temps[0] = 100.7;
    
    cout << "The first temperature is: " << hi_temps[0] << endl;

}
