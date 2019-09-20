#include <iostream>
using namespace std;

class TimeSpan
{
  int hours,minutes;
  public: TimeSpan(int h, int m)
  {
    hours=h;
    minutes=m;
  }
  int getHours() {return hours;}
  int getMinutes() {return minutes;}
  void add(int h, int m)
  {
    hours+=h;
    minutes+=m;
    while(minutes>=60)
    {
      hours++;
      minutes-=60;
    }
  }
  void add(TimeSpan tp)
  {
    hours+=tp.hours;
    minutes+=tp.minutes;
    while(minutes>=60)
    {
      hours++;
      minutes-=60;
    }
  }
  float getTotalHours()
  {
    float per = minutes/60.0;
    float total = hours+per;
    return total;
  }
  string toString()
  {
    string str1="";
    cout<<hours<<" Hours, "<<minutes<<" Minutes";
    return str1;
  }

};
int main()
{
  TimeSpan t(3, 15);
  TimeSpan t2(4, 20);
  t.add(2, 0);  // 5:15
  t.add(1, 40); // 6:35
  t.add(t2);    // 6:35 + 4:20 =
  cout << "Hours: " << t.getHours() << endl;
  cout << "Minutes: " << t.getMinutes() << endl;
  cout << "Total Hours: " << t.getTotalHours() << endl;
  cout << "String: " << t.toString() << endl;
}
