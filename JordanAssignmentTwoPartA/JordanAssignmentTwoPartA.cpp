// JordanAssignmentTwoPartA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int value;
string startupMessage = "Enter integers between 1 and 100 and i will tell you the smallest, the largest, and the average: \nPress 0 to end. \n ";
string invalidEntry = "Invalid Entry, value must be between 1 and 100 \n";
bool continueProgram = true;
vector<int> numbers;
int largestNum;
int smallestNum;
float averageNum = 0.0f;

int main()
{ 
    cout << startupMessage;
    while (continueProgram) {
        cin >> value;
        if (value >= 1 && value <= 100) {
            numbers.push_back(value);
        }
        else if(value == 0) {
            continueProgram = false;
        }
        else {
            cout << invalidEntry;
            cout << startupMessage;
        }
    }

    largestNum = *max_element(numbers.begin(), numbers.end());
    smallestNum = *min_element(numbers.begin(), numbers.end());
    averageNum = accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();

    cout << "\nSmallest: " << smallestNum << endl;
    cout << "Largest: " << largestNum << endl;
    cout << "Average: " << averageNum << endl;
}

