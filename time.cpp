#include <iostream>
#include <iomanip> 
using namespace std;
 
class Time
{
    private:
        int seconds;
        int hh,mm,ss;
    public:
        void getTime(void);
        void ConvertIntoSeconds(void);
        void DisplayTime(void);
};
 
void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";          
    cin >> hh;
    cout << "Minutes? ";          
    cin >> mm;
    cout << "Seconds? ";          
    cin >> ss;
}
 
void Time::ConvertIntoSeconds(void)
{
    seconds = hh*3600 + mm*60 + ss;
}
 
void Time::DisplayTime(void)
{
    cout << "The time is = " << setw(2) << setfill('0') << hh << ":"
                             << setw(2) << setfill('0') << mm << ":"
                             << setw(2) << setfill('0') << ss << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time T; 
    T.getTime();
    T.ConvertIntoSeconds();
    T.DisplayTime();
    return 0;
}
