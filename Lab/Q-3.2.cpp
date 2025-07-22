#include<iostream> 
using namespace std;

/*
q-3.2. write a c++ program that asks the user to guess a number between 1 and 100. 
the program should provide hints if the guess is too high or too low. use loops to allow 
the user multiple attempts.
*/

int main() 
{
    int secret = 30; 
    int guess = -1;  
    
    //  message
    cout << "i've a number in my mind (between 1 and 100), guess it. i'll give you hints!" << endl;
    
    // repeat correct guess
    while (true) 
    {
        cout << "enter your guess: ";
        cin >> guess;

        // check for valid range
        if (guess < 1 || guess > 100) 
        {
            cout << "please enter a number between 1 and 100." << endl;
            continue;
        }

        // correct guess
        if (guess == secret) 
        {
            cout << "bingo! you guessed it right." << endl;
            break;
        }

        // very close guess range
        else if (guess >= 20 && guess <= 40) 
        {
            cout << "you are very very close, try again!" << endl;
        }

        // close but not very close
        else if (guess <= 10 || (guess >= 50 && guess <= 60)) 
        {
            cout << "you are close, try again!" << endl;
        }

        // far guess
        else 
        {
            cout << "you are far from the number, try again!" << endl;
        }
    }

    return 0;
}
