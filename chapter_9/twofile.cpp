/*-------------------------------------------------------
 *      Variables with external and internal linkage
 *	        (c)Written by DoubleCheese Burger
 -------------------------------------------------------*/

#include <iostream>

int tom = 3;                    //external linkage
int dick = 30;                  //external linkage
static int harry = 300;         //internal linkage

void remote_access(void);

int main()
{
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    return 0;

}