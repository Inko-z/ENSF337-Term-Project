//here the extraction functions will be created
//The functions to extract info from the .txt file
#include "airline.cpp"
#include <string>
#include <vector>
#include <fstream>
#include <cctype> 

using namespace std;

string extract_the_line(ifstream stream){
    //returns a string of the line the stream pointer is pointing to
    //then makes the file ptr go to next line

    string line_of_text;
     if (!stream.fail() && !stream.eof() ){
        getline(stream, line_of_text);
    }
    else{
        cout<<"Unable to read line from file"<<endl;
    }
    return line_of_text;

}
Airline extract_airline(string flight_info_line){
    //take string extracted form get_line_line() and extracts airline info 
    //put info extracted from said airline into new airline object
    //returns an airline object
    Airline a;

    string a_name;

    int i;
    while( isalpha(flight_info_line.at(i)) ){
        a_name.push_back(flight_info_line.at(i));
        i++;
    }
    a.set_name(a_name);
}

Flight* extract_flight(string flight_info_line){
     //take string extracted form get_line_line() and extracts flight info and creates airline object on the heap
     //put info into said flight object
     //return address of object

    // breaks the string up into 3 strings - id, rows, columns
    // then assigns these to the private members of a new flight object created on the heap

    Flight* f = new Flight;

    string flight_ID;
    string rows;
    string cols;

    int i;
    for (i = 0; flight_info_line.at(i) != ' ' ; i++){ //appends number chars to flight_ID until it reaches a space
        if( isdigit(flight_info_line.at(i)) )
        flight_ID.push_back(flight_info_line.at(i));
    }

    f->set_flight_id(flight_ID);

    while(flight_info_line.at(i) == ' '){  // travels to the next non-white-space char
        i++;
    }
    
    do{
            rows.push_back(flight_info_line.at(i));  // appends chars to rows while char is a number
            i++;
    }while( isdigit(flight_info_line.at(i)) );

    f->set_number_of_rows(stoi(rows));  //stoi() function takes a string as an argument and returns the integer equivalent

    while(flight_info_line.at(i) == ' '){  // travels to the next non-white-space char
        i++;
    }
    
    do{
            cols.push_back(flight_info_line.at(i));  //appends chars to cols while char is a number, and end of string has not been reached
            i++;
    }while(i<flight_info_line.length() &&  isdigit(flight_info_line.at(i)) );

    f->set_number_of_columns(stoi(cols));

    return f;
}

Passenger* extract_passenger(string passenger_info_line){
    //take string extracted form get_line_line() and extracts passenger info and creates passenger object on the heap
    //put info into passenger 
    Passenger* p = new Passenger;

}
