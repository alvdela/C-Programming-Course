#include <iostream>
#include <vector>

using namespace std;

int main() {
    /*vector <char> vowels {'a','e','i','o','u'};
    
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;*/
    
    // vector <int> test_scores(3) -> 3 elements inicialized to 0
    // vector <int> test_scores(3,100) -> 3 elements inicialized to 100

    /*vector <int> test_scores {100,98,89};
    
    cout << "Test scores using vector syntax: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "There are " << test_scores.size() << " scores in the vector" << endl;
    
    cout << "Enter 3 new scores" << endl;
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "Updates scores:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "Enter a test score to add to the vector: ";
    
    int score_to_add {0};
    cin >> score_to_add;
    
    test_scores.push_back(score_to_add);
    
    cout << "\n The new scores are: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;*/
    
    /* SECTION CHALLENGE */
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "Elements of first vector: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Size of the vector: " << vector1.size() << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "Elements of second vector: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "Size of the vector: " << vector2.size() << endl;
    
    vector <vector<int>> vector_2d;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Elements of 2d vector: " << endl;
    cout << vector_2d.at(0).at(0) << "\t";
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << "\t";
    cout << vector_2d.at(1).at(1) << endl;
    
    vector1.at(0) = 1000;
    
    cout << "Elements of 2d vector: " << endl;
    cout << vector_2d.at(0).at(0) << "\t";
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << "\t";
    cout << vector_2d.at(1).at(1) << endl;
    
    cout << "Elements of first vector: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
}   
