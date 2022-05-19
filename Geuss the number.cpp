#include <iostream>
using namespace std;

int main(){
    int secretNumber;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfChances= false;
    cout << "Player 1" << endl << "Enter the Number to be guessed: ";
    cin >> secretNumber ;

    system("cls");

    cout << "Player 2, You got Three Chances" << endl;
    cout << "Guess The Number" << endl;

    while(guess != secretNumber && !outOfChances){
            if(guessCount != guessLimit){
                cout << "Enter Guess: ";
                cin >> guess ;
                guessCount++;
            }else{
                outOfChances = true;
            }

    }
    if(outOfChances){
    cout << "You loose :(";
    }else{
    cout << "You Win ;)" ;}
}

