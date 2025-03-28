#include <iostream> 
#include <vector> 
#include <string>
using namespace std;
int main () {
    
    string myArray[5] = {"Apple", "Banana", "Cranberry", "Dragon Fruit", "Elderberry"};  //Declare array and initialize with string values
    for (int i = 0; i < 5; ++i) {             //Output all elements in order of myArray
        cout << myArray[i] << ", ";
    }
    cout << endl;          //Newline for readability

    myArray[2] = "Watermelon";        //Update two of the values held in myArray
    myArray[4] = "Pear";

    for (int i = 0; i < 5; ++i) {         //Output all elements of updated myArray
        cout << myArray[i] << ", ";
    }
    cout << endl << endl;           //Newlines for readability


    //Part 2 below


    vector<int> scores = {85, 90, 78};   // Declare vector and initialize with 3 values

    for (int i = 0; i < scores.size(); ++i) {
        cout << "Player " << (i + 1) << ": " << scores.at(i) << endl;
    }
    cout << endl;

    scores.push_back(0); 
    cout << "New Number of players: " << scores.size() << endl;

    for (int i = 0; i < scores.size(); ++i) {
        cout << "Player " << (i + 1) << ": " << scores.at(i) << endl;
    }
    cout << endl;

    scores.pop_back();
    cout << "Player 4 Quit" << endl;
    for (int i = 0; i < scores.size(); ++i) {
        cout << "PLayers " << (i + 1) << ": " << scores.at(i) << endl;
    }
    cout << endl;

    return 0;
}