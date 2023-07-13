#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "colourmod.h"
using namespace std;

//colours
Color::Modifier red(Color::FG_RED);
Color::Modifier def(Color::FG_DEFAULT);
Color::Modifier green(Color::FG_GREEN);
Color::Modifier blue(Color::FG_BLUE);
//

int MainMenu();


//global variable
int result = 0;
int choice;
int name;
//




//VOID START
int MainMenu() {

	//dice functionality
	srand(time(NULL));//random time is equal to null 
	int number = 3;//dice number is equal to three 
	result = rand() % number + 1;//dice 
	///

	//variables
	int HPtotal = 70;
	int myHP = 80;
	int damage[3] = { 20, 20, 20 };//how many damage turns there are 
	//

	int i = 0;//index


	while (true)
	{
		//main menu

		//SNAKE IMAGE
		cout << blue << "*************************" << endl;
		cout << blue << "* "<<def<<"      SNAKE"<<blue<<"           *" << endl;
		cout << blue << "* " << green << "    **" << blue << "                *" << endl;
		cout << blue << "*    " << green << "**"<<red<<"0"<<green<<"*" << blue << "               *" << endl;
		cout << blue << "* " << def << "   V"<<green<< "**" << blue << "                *" << endl;
		cout << blue << "* " << green << "    **" << blue << "                *" << endl;
		cout << blue << "* " << green << "     ***   **" << blue << "         *" << endl;
		cout << blue << "* " << green << "        ****" << blue << "          *" << endl;
		cout << blue << "*************************" <<  endl;
		//

		///HEALTHBAR ANIMATION FOR SNAKE
		if (HPtotal == 70) {
			cout << def << "*************************" << endl;
			cout << def << "*" << red << "HP" << def << "*" << green << "||||||||||||||||||||" << def << "*" << endl;
			cout << def << "*************************" << endl;


		}
		else if (HPtotal == 50) {
			//REDUCED HP
			cout << def << "*************************" << endl;
			cout << def << "*" << red << "HP" << def << "*" << green << "||||||||||||||||" << def << "    *" << endl;
			cout << def << "*************************" << endl;
			//
		}
		else if (HPtotal == 30) {
			//REDUCED HP
			cout << def << "*************************" << endl;
			cout << def << "*" << red << "HP" << def << "*" << red << "||||||||" << def << "            *" << endl;
			cout << def << "*************************" << endl;
			//
		}

		////

		//player data is essential as we need a visual concept on their HP, their attack and their deaths

		cout <<red<< "************" << endl;
		cout <<red<<"*  "<<def << "Player" <<red<< "  *" << endl;
		cout <<red<< "************" << endl;

		if (myHP == 80) {
			//attack animation for REDUCED HP for 30
			cout << def << "*************************" << endl;
			cout << def << "*" << blue << "HP" << def << "*" << green << "||||||||||||||||||||" << def << "*" << endl;
			cout << def << "*************************" << endl;
			//
		}



		else if (myHP == 60) {
			//attack animation for REDUCED HP for 30
			cout << def << "*************************" << endl;
			cout << def << "*" << blue << "HP" << def << "*" << green << "||||||||||||||||||" << def << "  *" << endl;
			cout << def << "*************************" << endl;
			//
		}
		//attack animation of REDUCED HP FOR 30
		else if (myHP == 40) {
			cout << def << "*************************" << endl;
			cout << def << "*" << blue << "HP" << def << "*" << red << "||||||||||" << def << "          *" << endl;
			cout << def << "*************************" << endl;
		}

		else if (myHP == 20) {
			cout << def << "*************************" << endl;
			cout << def << "*" << blue << "HP" << def << "*" << red << "|||||" << def << "               *" << endl;
			cout << def << "*************************" << endl;
		}
		//end of player data

		//choice question
		cout <<green<< "*************************" << endl;
		cout <<def<<"will you attack?" << endl;
		cout << green << "1.Yes" << endl;
		cout << red << "2.No" << endl;
		cout << green << "*************************" << endl;
		//

		//button
		cout << blue << "*************************" << endl;
		cout  << def<< "CHOICE:" <<endl;
		cout << blue << "*************************" <<def<< endl;
		cin >> choice;
	   //
		//damage system
		

		        //if chosen 1
				if (choice == 1) {
				
				//NORMAL CRIT
				HPtotal = HPtotal - damage[i];

				//ATTACK IMAGE
				cout << red << "*************************" << endl;
				cout << red << "*" << def << "you attacked" << red << "           *" << endl;
				cout << red << "* " << def << "         SNAKE" << red << "        *" << endl;
				cout << red << "* " << green << "    **" << red << "                *" << endl;
				cout << red << "*    " << green << "**" << red << "0" << green << "*" << red << "               *" << endl;
				cout << red << "* " << def << "   V" << green << "**" << red << "                *" << endl;
				cout << red << "* " << green << "    **" << red << "                *" << endl;
				cout << red << "* " << green << "     ***   **" << red << "         *" << endl;
				cout << red << "* " << green << "        ****" << red << "          *" << endl;
				cout << red<< "*************************" << endl;
				//


				//NOTE: THIS IS FOR THE ATTACKING ANIMATION ONLY.




				if (HPtotal == 50) {
					//attack animation for REDUCED HP for 30
					cout << def << "*************************" << endl;
					cout << def << "*" << red << "HP" << def << "*" << green << "||||||||||||||||" << def << "    *" << endl;
					cout << def << "*************************" << endl;
					//
				}
				//attack animation of REDUCED HP FOR 30
				if (HPtotal == 30) {
				    cout << def << "*************************" << endl;
					cout << def << "*" << red << "HP" << def << "*" << red << "||||||||" << def << "            *" << endl;
					cout << def << "*************************" << endl;
				}

				if(HPtotal == 10) {
					cout << def << "*************************" << endl;
					cout << def << "*" << red << "HP" << def << "*" << red << "|||" << def << "                 *" << endl;
					cout << def << "*************************" << endl;
				}

				///
			    //opponent attacks
				cout <<def<<"opponent attacks" << endl;
				myHP = myHP - damage[i];

                		cout << red << "************" << endl;
                        cout << red << "*  " << def << "Player" << red << "  *" << endl;
                        cout << red << "************" << endl;
                  
						if (myHP == 60) {
							//attack animation for REDUCED HP for 30
							cout << def << "*************************" << endl;
							cout << def << "*" << blue << "HP" << def << "*" << green << "||||||||||||||||||" << def << "  *" << endl;
							cout << def << "*************************" << endl;
							//
						}
						//attack animation of REDUCED HP FOR 30
						if (myHP == 40) {
							cout << def << "*************************" << endl;
							cout << def << "*" << blue << "HP" << def << "*" << red << "||||||||||" << def << "          *" << endl;
							cout << def << "*************************" << endl;
						}

						if (myHP == 20) {
							cout << def << "*************************" << endl;
							cout << def << "*" << blue << "HP" << def << "*" << red << "|||||" << def << "               *" << endl;
							cout << def << "*************************" << endl;
						}

				//


				 //space
				cout << " " << endl;

				//END OF NORMAL CRIT

	             }//END IF

		//if hp total = 10

		//LAST TURN TO KILL OPPONENT
		if (HPtotal == 10) {

			//main menu
			cout << blue << "*************************" << endl;
			cout << blue << "* " << def << "      SNAKE" << blue << "           *" << endl;
			cout << blue << "* " << green << "    **" << blue << "                *" << endl;
			cout << blue << "*    " << green << "**" << red << "0" << green << "*" << blue << "               *" << endl;
			cout << blue << "* " << def << "   V" << green << "**" << blue << "                *" << endl;
			cout << blue << "* " << green << "    **" << blue << "                *" << endl;
			cout << blue << "* " << green << "     ***   **" << blue << "         *" << endl;
			cout << blue << "* " << green << "        ****" << blue << "          *" << endl;
			cout << blue << "*************************" << endl;

			//choice
			if (HPtotal == 10) {
				cout << def << "*************************" << endl;
				cout << def << "*" << red << "HP" << def << "*" << red << "|||" << def << "                 *" << endl;
				cout << def << "*************************" << endl;
			}


			cout << "will you attack?" << endl;
			cout << green << "1.Yes" << endl;
			cout << red << "2.No" << endl;
			cout << blue << "*************************" << endl;
			//
			cout <<def<<"CHOICE:" <<endl;
			cout << blue << "*************************" <<def<< endl;

			cin >> choice;
			//


			//if choice = 1
			if (choice == 1) {
				//last hit
                HPtotal = HPtotal - 10;
				cout << red << "*************************" << endl;
				cout << red << "*" << def << "you attacked" << red << "           *" << endl;
				cout << red << "* " << def << "     SNAKE" << red << "            *" << endl;
				cout << red << "* " << green << "    **" << red << "                *" << endl;
				cout << red << "*    " << green << "**" << red << "X" << green << "*" << red << "               *" << endl;
				cout << red << "* " << def << "   V" << green << "**" << red << "                *" << endl;
				cout << red << "* " << green << "    **" << red << "                *" << endl;
				cout << red << "* " << green << "     ***   **" << red << "         *" << endl;
				cout << red << "* " << green << "        ****" << red << "          *" << endl;
				cout << red << "*************************" << endl;
				//
			}
			//

		}
		//choosing 2 in this outcome is still valid

		//Message for defeated opponent
		if (HPtotal == 0) {

        //display dead messgae
			cout << green << "************" << endl;
			cout << green << "*"<<def<< "   ***" <<green<<"    *" << endl;
			cout << green << "*"<<def<<"  ** **"<<green<<"   *" << endl;
			cout << green << "*" << def << "  *   *" <<green<< "   *" << endl;
			cout << green << "*" << def << "  ** **" << green<<"   *" << endl;
			cout << green << "*" << def << "  *****" <<green<< "   *" << endl;
			cout << green << "************" << endl;


	    cout <<red<<"Opponent is now dead." << endl;
		cout << blue << "*************************" << endl;
		cout << red << "END OF PROGRAM" << endl;
		return 0;
		//

		}
         
		// if choice = no
		if (choice == 2) {
			cout << blue << "*************************" << endl;
			cout << red << "END OF PROGRAM" << endl;
			return 0;
		}//end if 	

		

	}//end of while loop

}
//VOID END 

//END OF int

int main() {
//system call
MainMenu();
//	
}
