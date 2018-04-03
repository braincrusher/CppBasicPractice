/*---------------------------------------------------------------------
 *	    Variables with internal and external linkage
 *          (c)Written by DoubleCheese Burger
 --------------------------------------------------------------------*/

#include <iostream>
extern int tom;             //tom defined elsewhere
static int dick = 10;       //override external dick
int harry = 200;            //external variable definition

void remote_access()
{
    using namespace std;

    cout << "remote_access() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
}

