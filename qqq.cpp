#include <iostream>
#include <string>

using namespace std;

int main() {
    int answer1Count = 0;
    int answer2Count = 0;
    int answer3Count = 0;
    int answer4Count = 0;
    string question = "What is your favorite color?";
    string answer1 = "Red";
    string answer2 = "Blue";
    string answer3 = "Green";
    string answer4 = "Yellow";
    
    cout << question << endl;
    cout << "1. " << answer1 << endl;
    cout << "2. " << answer2 << endl;
    cout << "3. " << answer3 << endl;
    cout << "4. " << answer4 << endl;
    
    for (int i = 0; i < 20; i++) {
        int userAnswer;
        cout << "Enter your answer (1-4): ";
        cin >> userAnswer;
        
        switch (userAnswer) {
            case 1:
                answer1Count++;
                break;
            case 2:
                answer2Count++;
                break;
            case 3:
                answer3Count++;
                break;
            case 4:
                answer4Count++;
                break;
            default:
                cout << "Invalid answer. Please try again." << endl;
                i--;
                break;
        }
    }
    
    cout << "Results:" << endl;
    cout << answer1 << ": " << answer1Count << endl;
    cout << answer2 << ": " << answer2Count << endl;
    cout << answer3 << ": " << answer3Count << endl;
    cout << answer4 << ": " << answer4Count << endl;
    
}

