#include <string>
#include <vector>
#include <iostream>
#include <fstream>

#include "airline.h"
#include "flight.h"
#include "passenger.h"
#include "seat.h"
#include "extraction.cpp"
#include "Globalfunctions.h"

void printfirstmessege();
void printreturnmessege();
void printoptions();
void printwronginput();

int main(){
    
    std::ifstream readingstream("flight_info.txt");
    
    //read all data from file and turn it into objects, lists, ect. in the program
    // airline ptr
    std::string line = extract_the_line(readingstream);
    

    printfirstmessege();

    int runprogram = 1; //bool logic to eventually exit the program
    char selection;

    if(pressreturntocontinue()){
        printoptions();

        while(runprogram){ ///MAIN PROGRAM LOOP///
        
            std::cin >> selection;
            if(selection == '1'){
                std::string s = "booger";
                Flight f(24, 6, s, nullptr);
                DisplaySeatMap(f);
                pressreturntocontinue();
                printoptions();

            }else if (selection == '2')
            {
                pressreturntocontinue();
                printoptions();
            }
            else if (selection == '3')
            {
                pressreturntocontinue();
                printoptions();            
            }
            else if (selection == '4')
            {
                pressreturntocontinue();
                printoptions();
            }else if (selection == '5')
            {
                pressreturntocontinue();
                printoptions();               

            }else if (selection == '6')
            {
                runprogram = 0;
            }
            else
            {
                std::cout << "Worng input\n";

            }
        }
    }
}
void printfirstmessege(){
    std::cout << "Version: 1.0\n";
    std::cout << "Term Project - Flight Management Programm in C++\n";
    std::cout << "Produced by: Rodolfo Gil-Pereira, Anastasia Zaharia, Sebastian Nieto\n";
}
void printreturnmessege(){
    std::cout <<"<<< Press Return to Continue >>>\n";
    std::cout <<"(anything else will end the program)\n";
}
void printoptions(){
    std::cout << "Please select one of the following functions:\n";
    std::cout << "1.  Display Flight Seat Map.\n";
    std::cout << "2.  Display Passengers Information.\n";
    std::cout << "3.  Add a New Passenger.\n";
    std::cout << "4.  Remove an Existing Passenger.\n";
    std::cout << "5.  Save data.\n";
    std::cout << "6.  Quit.\n\n";
    std::cout << "Enter your choice: (1, 2, 3, 4, 5 or 6\n";
}
void printwronginput(){
    std::cout << "Invalid input, please try again: \n";
}