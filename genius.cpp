#include<iostream>
#include<time.h>
#include<cstdlib>

using namespace std;

class guess {
    int tries ;
    int user;
    int comp;
    int ch_game_level;
public:
    guess() {
    	
    		cout<<endl<<endl<<endl<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"+------------------------------+"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"+------------------------------+"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"+------------------------------+"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"+                              +"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"+                              +"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"+      WELLCOME TO MY GAME     +"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"+                              +"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"+                              +"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"+------------------------------+"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"+------------------------------+"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"+------------------------------+"<<endl;
        }
    

    void game() {
        srand(time(0));
        comp = rand() % 100 + 1;
        cout << endl << endl << endl;
        cout << "Enter a number between 1 and 100: ";
        cin >> user;
        cout << endl << endl;
        while (user != comp) {
            if (user < 1 || user > 100) {
                cout << "Sorry, guess a number between 1 to 100: ";
            } else if (user > comp) {
                cout << "Your guess is too high." << endl;
            } else {
                cout << "Your guess is too low." << endl;
            }
            tries++;
            cin >> user;
        }
        cout << "Computer chose the number: " << comp << endl;
        cout << "You guessed the number in " << tries << " tries" << endl;
    }
};

int main() {
    char playAgain;
    do {
    system("CLS");
        guess obj;
        obj.game();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}

