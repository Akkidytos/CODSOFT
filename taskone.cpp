#include <iostream>
#include <cstdlib>  

using namespace std;

int main() {
    int no, guess;

    srand(88);  
    no = rand() % 100 + 1; 
    cout << "Make the guess user "<<endl;

    do {
        cin >> guess;

        if (guess > no)
            cout << "you went high and in forward direction"<<endl;
        else if (guess < no)
            cout << "you went low and in backward count"<<endl;
        else
            cout << "you guessed right , well done."<<endl;

    } while (guess != no);

    return 0;
}
