#pragma once
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <string>


using namespace std;

#include "Players.h"



CoolE coolE2; CoolA coolA2; CoolM coolM2; CoolC coolC2; CoolH coolH2;
AttE attE2; AttA attA2; AttM attM2; AttC attC2; AttH attH2;
//█████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████

void anyattackE()
{
    cout << attE2.att1 << "(1)" << endl << endl;

    if (coolE2.cool2 == 0)
    {
        cout << attE2.att2 << "(2)" << endl << endl;
    }
    if (coolE2.cool3 == 0)
    {
        cout << attE2.att3 << "(3)" << endl << endl;
    }
    if (coolE2.cool4 == 0)
    {
        cout << attE2.att4 << "(4)" << endl << endl;
    }
}


//█████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████



void anyattackA()
{
    cout << attA2.att1 << "(1)" << endl << endl;
    if (coolA2.cool2 == 0)
    {
        cout << attA2.att2 << "(2)" << endl << endl;
    }
    if (coolA2.cool3 == 0)
    {
        cout << attA2.att3 << "(3)" << endl << endl;
    }
    if (coolA2.cool4 == 0)
    {
        cout << attA2.att4 << "(4)" << endl << endl;
    }
}


//█████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████



void anyattackM()
{
    cout << attM2.att1 << "(1)" << endl << endl;
    if (coolM2.cool2 == 0)
    {
        cout << attM2.att2 << "(2)" << endl << endl;
    }
    if (coolM2.cool3 == 0)
    {
        cout << attM2.att3 << "(3)" << endl << endl;
    }
    if (coolM2.cool4 == 0)
    {
        cout << attM2.att4 << "(4)" << endl << endl;
    }
}


//█████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████


void anyattackC()
{
    cout << attC2.att1 << "(1)" << endl << endl;
    if (coolC2.cool2 == 0)
    {
        cout << attC2.att2 << "(2)" << endl << endl;
    }
    if (coolC2.cool3 == 0)
    {
        cout << attC2.att3 << "(3)" << endl << endl;
    }
}


//█████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████


void anyattackH()
{
    cout << attH2.att1 << "(1)" << endl << endl;
    if (coolH2.cool2 == 0)
    {
        cout << attH2.att2 << "(2)" << endl << endl;
    }
    if (coolH2.cool3 == 0)
    {
        cout << attH2.att3 << "(3)" << endl << endl;
    }
    if (coolH2.cool4 == 0)
    {
        cout << attH2.att4 << "(4)" << endl << endl;
    }
}
