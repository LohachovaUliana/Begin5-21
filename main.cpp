/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // задача Begin5
    // декларація змінних
    double a, V, S;
    // введення змінної
    cout <<"Enter a:";
    cin >> a;
    // розрахунок результату
    V = a * a * a;
    S = 6 * a *a; 
    // виведення результату
    cout <<"Volume:" << V << endl;
    cout <<"Area:" << S << endl;
    
     // задача Begin21
    // декларація змінних
    double alf, rad;
    // введення кута у градусах
    cout <<"Enter alf:";
    cin >> alf;
    // перевод у радіани
    rad = alf * 3.14 / 180;
    // виведення результату
    cout <<"Angle in radians:" << rad << endl;
    

    return 0;
}