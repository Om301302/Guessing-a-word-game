#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomNumber(int);

int main(){
	int mode;
	int guessNumber;
	
	
	cout << "Welcome to my guessing game!" << endl;
	cout << "What mode you like to try?" << endl << "[1] Eay" << endl << "[2] Medium" << endl << "[3] Hard"<< endl;
	cout << "your selection: ";
	cin >> mode;
	cout << "\n" ;
	while(mode<1 || mode>3){
		cout << "Oops: Invalid game mode!" << endl;
		cout << "your selection: ";
		cin >> mode;
		cout << "\n" ;
	}
	
	if(mode == 1){
		cout << "Guess a number between 1 to 10: " ;
		cin >> guessNumber;
		while(guessNumber<1 || guessNumber>10){
			cout << "Your guess is out of range"<< "\n" << endl;
			cout << "Guess a number between 1 to 10: " ;
			cin >> guessNumber;
		}
		
		int num = randomNumber(1); // Calling the function here !!!!!!!!!!!!!!!!!!
		
		
		while(guessNumber != num){
			if(guessNumber < num){
				cout << "Too small! Guess bigger" << "\n" << endl;
				cout << "Guess a number between 1 to 10: ";
				cin >> guessNumber;
				
				while(guessNumber<1 || guessNumber>10){
					cout << "Your guess is out of range"<< "\n" << endl;
					cout << "Guess a number between 1 to 10: ";
					cin >> guessNumber;
					cout << "\n";
				}
			}else{
				cout << "Too High! Guess smaller" << "\n" << endl;
				cout << "Guess a number between 1 to 10: ";
				cin >> guessNumber;
			
				while(guessNumber<1 || guessNumber>10){
					cout << "Your guess is out of range" << "\n"<< endl;
					cout << "Guess a number between 1 to 10: " ;
					cin >> guessNumber;
					cout << "\n";
				}
			}
		}
		
		cout <<"\n" << "Correct! THE ANSWER WAS "<< num << "!!!" << "\n" << "You are the WINNER!" << "\n\n" << "Goodbye!" << "\n\n";
		
		
		
	}else if(mode == 2){  // if user's input is 2 
	
	
		cout << "Guess a number between 1 to 50: " ;
		cin >> guessNumber;
		while(guessNumber<1 || guessNumber>50){
			cout << "Your guess is out of range" << endl;
			cout << "Guess a number between 1 to 50: " ;
			cin >> guessNumber;
		}
		
		int num = randomNumber(2); // Calling the function here !!!!!!!!!!!!!!!!!!
		
		
		while(guessNumber != num){
			if(guessNumber < num){
				cout << "Too small! Guess bigger" << "\n" << endl;
				cout << "Guess a number between 1 to 50: ";
				cin >> guessNumber;
				
				while(guessNumber<1 || guessNumber>50){
					cout << "Your guess is out of range" << "\n"<< endl;
					cout << "Guess a number between 1 to 50: ";
					cin >> guessNumber;
					cout << "\n";
				}
			}else{
				cout << "Too High! Guess smaller" << "\n" << endl;
				cout << "Guess a number between 1 to 50: ";
				cin >> guessNumber;
			
				while(guessNumber<1 || guessNumber>50){
					cout << "Your guess is out of range" << "\n"<< endl;
					cout << "Guess a number between 1 to 50: " ;
					cin >> guessNumber;
					cout << "\n";
				}
			}
		}
		
		cout <<"\n" << "Correct! THE ANSWER WAS "<< num << "!!!" << "\n" << "You are the WINNER!" << "\n\n" << "Goodbye!" << "\n\n";
		
		
	}else{		// if user's input is 3
	
		cout << "Guess a number between 1 to 100: " ;
		cin >> guessNumber;
		while(guessNumber<1 || guessNumber>100){
			cout << "Your guess is out of range"<< "\n" << endl;
			cout << "Guess a number between 1 to 100: " ;
			cin >> guessNumber;
		}
		
		int num = randomNumber(3); // Calling the function here !!!!!!!!!!!!!!!!!!
		
		
		while(guessNumber != num){
			if(guessNumber < num){
				cout << "Too small! Guess bigger" << "\n" << endl;
				cout << "Guess a number between 1 to 100: ";
				cin >> guessNumber;
				
				while(guessNumber<1 || guessNumber>100){
					cout << "Your guess is out of range"<< "\n" << endl;
					cout << "Guess a number between 1 to 100: ";
					cin >> guessNumber;
					cout << "\n";
				}
			}else{
				cout << "Too High! Guess smaller" << "\n" << endl;
				cout << "Guess a number between 1 to 100: ";
				cin >> guessNumber;
			
				while(guessNumber<1 || guessNumber>100){
					cout << "Your guess is out of range"<< "\n" << endl;
					cout << "Guess a number between 1 to 100: " ;
					cin >> guessNumber;
					cout << "\n";
				}
			}
		}
		
		cout <<"\n" << "Correct! THE ANSWER WAS "<< num << "!!!" << "\n" << "You are the WINNER!" << "\n\n" << "Goodbye!" << "\n\n";
	}
	
	

	return 0;
}

int randomNumber(int mode){
	srand(time(0));	
	int number = rand();
	if(mode == 1){		
		number = number%10 +1 ;
		return number;
	}else if(mode == 2){
		number = number%50 +1 ;
		return number;
	}else{
		number = number%100 +1 ;
		return number;
	}
	
	

	 
	
}






























