#include <iostream>

using namespace std;

/** SECTION 8 CHALLENGE
 * 
 * 1 dollar -> 100 cents
 * 1 quarter -> 25 cents
 * 1 dime -> 10 cents
 * 1 nickel -> 5 cents
 * 1 penny -> 1 cent
 */
int main() {
    
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    cout << "Enter an amount of cents: ";
    int cents {0};
    
    cin >> cents;
    
    int dollars{0};
    int quarters{0};
    int dimes{0};
    int nickels{0};
    int pennies{0};
    
    dollars = cents / dollar_value;
    cents %= dollar_value;
    
    quarters = cents / quarter_value;
    cents %= quarter_value;
    
    dimes = cents / dime_value;
    cents %= dime_value;
    
    nickels = cents / nickel_value;
    pennies = cents % nickel_value;
    
    cout << "Your change is: " << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;
    
    return 0;
}
