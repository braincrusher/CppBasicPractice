#include "chapter_2.h"



//Program list
//2.1
void myfirst(void)
{
    using namespace std;
    cout << "Come up and C++ me some time.";
    cout << endl;
    cout << "You won't regret it!" << endl;
}
//2.2
void carrots(void)
{
    using namespace std;

    int carrots;

    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots";
    cout << endl;
    carrots = carrots - 1;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    return;
}
//2.3
void getinfo(void)
{
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    carrots = carrots + 2;

    cout << "Now you have " << carrots << " carrots." << endl;

    return;
}
//2.4
void sqrt(void)
{
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
        << " feet to the side." << endl;
    cout << " How fascination!" << endl;
}
//2.5
void ourfunc(void)
{
    using namespace std;
    simon(3);
    cout << "Pick an interger: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return;
}
void simon(int n)
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;
}
//2.6
void convert(void)
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return;
}

int stonetolb(int sts)
{
    return 14*sts;
}
//2.7.1
void name_addr(void)
{
    using namespace std;
    cout << "My name is DoubleCheeseburger, My address is Mars" << endl;
}
//2.7.2
void trans(void)
{
    using namespace std;
    cout << "Enter the long: ";
    int l_long = 0;
    cin >> l_long;
    cout << "It's " << l_long * 220 << " yard." << endl;
}
//2.7.3
void imp(void)
{
    child1();
    child1();
    child2();
    child2();
}
void child1()
{
    using namespace std;
    cout << "Three blind mice" << endl;
}
void child2()
{
    using namespace std;
    cout << "See how they run" << endl;
}
//2.7.4
void ageTrans(void)
{
    using namespace std;
    cout << "Enter your age: ";
    int agey = 0;
    cin >> agey;
    cout << "There's " << agey * 12 << " month in your age" << endl;
}
//2.7.5
void batman(void)
{
    using namespace std;
    cout << "Please enter a Celsius value: ";
    float cel = 0.0;
    cin >> cel;
    cout << cel
         << "degrees Celsius is "
         << superman(cel) 
         << " degrees Fahrenheit."
         << endl;
}
float superman(float n)
{
    return 1.8 * n + 32.0;
}
//2.7.6
void ironman(void)
{
    using namespace std;
    cout << "Enter the number of light years: ";
    double ly = 0.0;
    cin >> ly;
    cout << ly
         << " light years = "
         << thor(ly)
         << " astronomical units."
         << endl;
}
double thor (double n)
{
    return 63240.0 * n;
}
//2.7.7
void zergling(void)
{
    using namespace std;
    cout << "Enter the number of hours: ";
    int hours = 0;
    cin >> hours;
    cout << "Enter the number of minutes: ";
    int minutes = 0;
    cin >> minutes;
    
    hydralisk(hours, minutes);
}
void hydralisk(int hours, int minutes)
{
    using std::cout;
    using std::endl;
    cout << "Time: " << hours << ":" << minutes << endl;
}
