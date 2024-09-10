#include <iostream>
#include <vector>
#include <iomanip>


using namespace std;

void display_list(const std::vector<int>& vec);
void add_element(std::vector<int>& vec);
void calc_mean(const std::vector<int>& vec);
void smallest(const std::vector<int>& vec);
void largest(const std::vector<int>& vec);

int main() {
    
    char opt{};
    vector <int> vec{};
    
    do{
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest of the numbers" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit\n" << endl;
        cin >> opt;
        switch(opt){
            case 'p':
            case 'P':{
                display_list(vec);
                break;
            }
            case 'a':
            case 'A':{
                add_element(vec);
                break;
            }
            case 'm':
            case 'M':{
                calc_mean(vec);
                break;
            }
            case 's':
            case 'S':{
                smallest(vec);
                break;
            }
            case 'l':
            case 'L':{
                largest(vec);
                break;
            }
            case 'q':
            case 'Q':{
                cout << "Goodbye" << endl;
                break;
            }
            default:
                cout << "Wrong option" << endl;
        }
    }while(opt != 'q' && opt != 'Q');
    
    return 0;
}


void display_list(const std::vector<int>& vec){
    if(vec.empty()){
                    cout << "[] - the list is empty" << endl;
                }else{
                    cout << "[ ";
                    for(int num : vec){
                        cout << num << " ";
                    }
                    cout << "]" << endl;
                }
}

void add_element(std::vector<int>& vec){
    cout << "Please add a number: ";
    int add_num{};
    cin >> add_num;
    vec.push_back(add_num);
    cout << add_num << " added" << endl;
}

void calc_mean(const std::vector<int>& vec){
    if(vec.empty()){
        cout << "Unable to calculate the mean - no data" << endl;
    }else{
        double all_sum{};
        for(int elem: vec){
            all_sum += elem;
        }
            cout << fixed << setprecision(1);
            cout << "The mean is: " << (all_sum/vec.size()) << endl;
        }
}

void smallest(const std::vector<int>& vec){
    if(vec.empty()){
        cout << "Unable to determine the smallest number - list is empty" << endl;
    }else{
        int smallest = vec.at(0);
        for(int elem: vec){
            if(elem < smallest){
                smallest = elem;
            }
         }
         cout << "The smallest number is: " << smallest << endl;
    }
}

void largest(const std::vector<int>& vec){
    if(vec.empty()){
        cout << "Unable to determine the largest number - list is empty" << endl;
    }else{
        int largest = vec.at(0);
        for(int elem: vec){
            if(elem > largest){
                largest = elem;
            }
        }
        cout << "The largest number is: " << largest << endl;
    }    
}
