#include <string>
#include <vector>
#include<iostream>
#include "airline.h"
#include "airline.cpp"
#include "flight.h"
#include "flight.cpp"
#include "passenger.h"
#include "passenger.cpp"
#include "seat.h"
#include "seat.cpp"

void printfirstmessege();
void printreturnmessege();
void printoptions();
void printwronginput();

int main(){

}
void printfirstmessege(){
    std::cout << "Version: 1.0\n";
    std::cout << "Term Project - Flight Management Programm in C++\n";
    std::cout << "Produced by: Rodolfo Gil-Pereira, Anastasia Zaharia, Sebastian Nieto\n";
}
void printreturnmessege(){
    std::cout <<"<<< Press Return to Continue >>>\n";
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