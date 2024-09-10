#include <iostream>

using namespace std;

int main() {
    
    int *int_ptr{nullptr};
    int_ptr = new int; //Storage for int is created and allocated
    cout << int_ptr << endl;
    delete int_ptr; // IMPORTANT !!
    
    size_t size{0};
    double *temp_ptr {nullptr};
    
    cout << "How many temps?";
    cin >> size;
    
    temp_ptr = new double[size];
    delete [] temp_ptr;
    // Memory leak if we change the direction of pointer
    
    
    cout << endl;
    return 0;
}
