#include<vector>
#include <string>
#include "flight.cpp"
struct FlightList{
    std::string flight_id;
    FlightList * next;
};

class Airline {       
  public:  
    Airline();
    Airline(std::string name, FlightList* list, int num);
    Airline(const Airline& source);
    ~Airline();

    void set_name(std::string Name);
    void set_list(FlightList* List);
    void set_num(int n);

    const std::string get_name()const;
    const FlightList* get_list()const;
    const int get_num()const;

    void insert(std::string& Name);
  private:          
    std::string airline_name;
    FlightList* flight_listH;
    int number_of_flights;  
};