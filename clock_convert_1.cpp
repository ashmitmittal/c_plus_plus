#include<iostream>
using namespace std;
class Clock {
    
    
       private: int hour, minute;
       public: void get() {
           cout << "Enter hour: ";
           cin >> hour;
           cout << "Enter minute: ";
           cin >> minute;
       }
       Clock add(Clock c) {
           Clock temp;
           temp.hour = hour + c.hour;
           temp.minute = minute + c.minute;
           if((temp.hour <= 24 && temp.hour >= 0) && (temp.minute <= 60 && temp.minute >= 0)) {
                return temp;
           }else {
               temp.hour += temp.minute / 60;
               temp.minute = temp.minute % 60;
               return temp; 
           }
       } 
       void display() {
           cout << hour<<":"<<minute;
       }
}; 

int main() {
    Clock c1, c2, c3;
    c1.get();
    c2.get();
    c3 = c1.add(c2);
    c3.display();
    return 0;
}
