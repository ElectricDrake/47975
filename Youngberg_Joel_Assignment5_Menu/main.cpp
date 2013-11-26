//Joel Youngberg
//Menu by: Dr. Mark E. Lehr
//November 26th, 2013
//Assignment 5


//Library includes Here!!!
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Time.h"
#include "MilTime.h"
#include "TestScores.h"
#include "SortableVector.h"
using namespace std;

//Global Constants Here!!!
template <class Temp>
Temp absolute(Temp num)
{
    return abs(num);
}


//Function Prototypes Here!!!
//Menu Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();



//Begin Execution Here!!!
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=4);
    return 0;//If midterm not perfect, return something other than 1
}

void Menu(){
    cout<<endl;
    cout<<"Menu for the Assignment 5: Joel Youngberg 25 Nov 2013"<<endl;
    cout<<"Type 1 for Chapter 16 Problem 2"<<endl;
    cout<<"Type 2 for Chapter 16 Problem 4"<<endl;
    cout<<"Type 3 for Chapter 16 Problem 7"<<endl;
    cout<<"Type 4 for Chapter 16 Problem 10"<<endl;
    cout<<"Type zero to exit... \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        return inN;
}

void problem1(){
        cout<<"In problem # 1"<<endl<<endl;
        /*
         *File: Gaddis 7th Ed Chapt15 Prob 04 Remake with exceptions
         *Author: Joel Youngberg
         *Date Created: 10 Nov 13
         *Title: Time Format
         *Purpose: Program that converts
         *military time to regular time
         */

        //Including all applicable libraries

        #include <iostream>

        using namespace std;

        //Global variables and constants
        //Do not use these unless applicable!! Good way to earn an F!

        //Structure declarations

        //All function prototypes

        //Starting executable code @ function main:


          //Declaring Variables
            int hours, min, sec;

            cout << "This program will convert military time to regular time." << endl;
            cout << "Please enter the  hours, min, and sec, separated by spaces: " << endl;
            cout << "(i.e. xx xx xx)" << endl;
            cin >> hours;
            cin >> min;
            cin >> sec;

            try{
            MilTime clock(hours,min, sec);


            //Display result
            cout << "Time entered was: " << hours << ":" << min << " " << sec << endl;
            cout << "Conversion from military to regular time is: " << endl;
            cout << clock.getStandHr(hours) << ":" << min << " " << sec << endl;

            }
            catch (MilTime::InvalidHours){
                cout << "Error: An invalid entry was input for military time..." << endl;
            }


          //Exit Program///////////////////////////////////////////////////////////////////////////////

        }




void problem2(){
        cout<<"In problem # 2"<<endl<<endl;
        /*
         *File: Gaddis 7th Ed Chapt16 Prob 04
         *Author: Joel Youngberg
         *Date Created: 23 Nov 2013
         *Title: Absolute Value Template
         *Purpose: Program that calculates
         *absolute value with a template
         */

        //Including all applicable libraries

        #include <iostream>
        #include <iomanip>
        using namespace std;

        //Global variables and constants
        //Do not use these unless applicable!! Good way to earn an F!

        //Structure declarations

        //All function prototypes

        //Template definition for absolute value function


        //Starting executable code @ function main:


          //Declaring Variables
            int userNum;
            float userFloat;

            cout << "Enter an integer and a floating point value to get their absolute values:" << endl;
            cin >> userNum >> userFloat;

            cout << "Here are the absolute values:" << endl;
            cout << absolute(userNum) << endl;
            cout << absolute(userFloat) << endl;
          //Exit Program///////////////////////////////////////////////////////////////////////////////

        }



void problem3(){
        cout<<"In problem # 3"<<endl<<endl;
        /*
         *File: Gaddis 7th Ed Chapt03 Prob 01
         *Author: Joel Youngberg
         *Date Created: 23 Nov 2013
         *Title: Test Scores Class
         *Purpose: Program that calculates
         *test score average based on user input
         */

        //Including all applicable libraries

        #include <iostream>
        #include <iomanip>

        using namespace std;

        //Global variables and constants
        //Do not use these unless applicable!! Good way to earn an F!

        //Structure declarations

        //All function prototypes

        //Starting executable code @ function main:


          //Declaring Variables
            int aryScores[10] = {75, 82, 99, 98, 85, 72, 84, 79, 88, 83};
            int *holder;
            cout << "Test Scores Array Class" << endl;

            try{
            TestScores ScoreObject(aryScores);//Passing array to class
            holder = ScoreObject.getScores();//Pulling array pointer/address back from class
            ScoreObject.setAvg();
            for (int i = 0; i < 10; i++){
                cout << *(holder+i) << " ";
             }
            cout << endl;
            cout << "The average of the test scores is: " << ScoreObject.getAvg() << endl;
            }// end try

            catch (TestScores::InvalidScore){
                cout << "Error: An invalid entry was input for at least one test score..." << endl;
            }

            cout << "Changing to value that will fail to display exception: " << endl;
            aryScores[3] = -1;//Changing to value that will fail....

            try{
            TestScores ScoreObject(aryScores);//Passing array to class
            holder = ScoreObject.getScores();//Pulling array pointer/address back from class
            ScoreObject.setAvg();
            for (int i = 0; i < 10; i++){
                cout << *(holder+i) << " ";
             }
            cout << endl;
            cout << "The average of the test scores is: " << ScoreObject.getAvg() << endl;
            }// end try

            catch (TestScores::InvalidScore){
                cout << "Error: An invalid entry was input for at least one test score..." << endl;
            }


          //Exit Program///////////////////////////////////////////////////////////////////////////////

        }



void problem4(){
        cout<<"In problem # 4"<<endl<<endl;
        /*
         *File: Gaddis 7th Ed Chapt16 Prob 10
         *Author: Joel Youngberg
         *Date Created: 25 Nov 13
         *Title: Sortable vector program
         *Purpose: Program that sorts a vector
         */

        //Including all applicable libraries

        #include <iostream>

        using namespace std;

        //Global variables and constants
        //Do not use these unless applicable!! Good way to earn an F!

        //Structure declarations

        //All function prototypes

        //Starting executable code @ function main:


          //Declaring Variables
            const int SIZE = 10;



            SimpleVector<int> intList(SIZE);

            //Fill Vector with values
            for (int i = 0; i < SIZE; i++){
                intList[i] = (i * 2);
            }

            cout << "This program sorts a vector:" << endl;
            cout << "The initial values of the vector are: " << endl;
            cout << endl;
            cout << "Dr Lehr if you are seeing this..........:" << endl;
            cout << "This one isn't working quite right yet " << endl;
            cout << "I need a little more time to figure out" << endl;
            cout << "Templates and vectors - Joel " << endl;
            cout << endl;
            for (int i = 0; i < SIZE; i++){
                cout << intList[i];
            }

            SortableVector SortObject(intList,SIZE);

            cout << endl;
            for (int i = 0; i < SIZE; i++){
                cout << intList[i];
            }
            cout << endl;




          //Exit Program///////////////////////////////////////////////////////////////////////////////

        }


void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
