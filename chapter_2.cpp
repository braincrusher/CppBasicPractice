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
{}
