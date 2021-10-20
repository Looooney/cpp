#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    char selection;
    vector <int> vec{};
    do {
        cout << "\n===========================" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quite" << endl;
        cout << "===========================" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        if (selection == 'P' || selection == 'p') {
            if (vec.size() != 0) {
                cout << "[ ";
                for (auto list: vec)
                    cout << list << " ";
                cout << "]" << endl;
            } else {
                cout << "[] - the list is empty" << endl;
            }

        } else if (selection == 'A' || selection == 'a') {
            int data_add = 0;
            cout << "Enter an integer to add to the list: ";
            cin >> data_add;
            vec.push_back(data_add);
            cout << data_add << " added" << endl;

        } else if (selection == 'M' || selection == 'm') {
            double sum = 0;
            double average = 0;
            if (vec.size() != 0) {
                for (auto list: vec) {
                    sum += list;
                    average = sum / vec.size();
                }
                cout << "The average is: " << average << endl;
            } else {
                cout << "Unable to calculate - no data" << endl;
            }

        } else if (selection == 'S' || selection == 's') {
            if (vec.size() != 0) {
                auto min_value = min_element(vec.begin(), vec.end());
                cout << *min_value << endl;
            } else {
                cout << "Unable to determine the smallest number - list is empty" << endl;
            }

        } else if (selection == 'L' || selection == 'l') {
            if (vec.size() != 0) {
                auto max_value = max_element(vec.begin(), vec.end());
                cout << *max_value << endl;
            } else {
                cout << "Unable to determine the largest number - list is empty" << endl;
            }
        } else if (selection != 'q' && selection != 'Q') {
            cout << "Unknown selection, please try again" << endl;
        }

    } while (selection != 'Q' && selection!= 'q');
    cout << "Goodbye =( " << endl;

    return 0;
}



