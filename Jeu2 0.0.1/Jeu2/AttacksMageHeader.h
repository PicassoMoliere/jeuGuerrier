#pragma once
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <string>
#include <time.h>
#include <ctime>
#include <random>
#include <cstdlib>
#include <iomanip>


#include "AnyattaquesHeader.h"
#include "Players.h"
#include "FaireDuDegatHeader.h"
using namespace std;
PlayerInfo playerInfoM;
CoolM coolM3;
AttM attM3;

void attacksMage()
{
    anyattackM();

    cout << "ecrire le numero de l'attaque: " << endl;

    cin >> playerInfoM.choixAttack; cout << endl;

    if (playerInfoM.choixAttack == 1)
    {
        if (coolM3.cool2 > 0)
        {
            coolM3.cool2 -= 1;
        }
        if (coolM3.cool3 > 0)
        {
            coolM3.cool3 -= 1;
        }
        if (coolM3.cool4 > 0)
        {
            coolM3.cool4 -= 1;
        }
    }

    if (playerInfoM.choixAttack == 2)
    {
        if (coolM3.cool2 > 0)
        {
            cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolM3.cool2 << endl;
            attacksMage();
        }
        else
        {
            coolM3.cool2 = 2;

            if (coolM3.cool3 > 0)
            {
                coolM3.cool3--;
            }
            if (coolM3.cool4 > 0)
            {
                coolM3.cool4--;
            }

        }
    }
    if (playerInfoM.choixAttack == 3)
    {
        if (coolM3.cool3 > 0)
        {
            cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolM3.cool3 << endl;
            attacksMage();
        }
        else
        {
            coolM3.cool3 = 4;
            if (coolM3.cool3 > 0)
            {
                coolM3.cool2--;
            }
            if (coolM3.cool4 > 0)
            {
                coolM3.cool4--;
            }
        }
    }

    if (playerInfoM.choixAttack == 4)
    {
        if (coolM3.cool4 > 0)
        {
            cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolM3.cool4 << endl;
            attacksMage();
        }
        else
        {
            coolM3.cool4 = 8;
            if (coolM3.cool2 > 0)
            {
                coolM3.cool2--;
            }
            if (coolM3.cool3 > 0)
            {
                coolM3.cool3--;
            }

        }
    }

    if (playerInfoM.choixAttack == 1)
    {
        cout << " -   " << attM3.att1 << "\n" << endl;

        faireDegat(43);
        playerInfoM.choixAttack = 0;

    }
    else if (playerInfoM.choixAttack == 2)
    {
        cout << " -   " << attM3.att2 << "\n" << endl;

        faireDegat(47);
        playerInfoM.choixAttack = 0;
    }
    else if (playerInfoM.choixAttack == 3)
    {
        cout << " -   " << attM3.att3 << "\n" << endl;

        faireDegat(56);
        playerInfoM.choixAttack = 0;
    }
    else if (playerInfoM.choixAttack == 4)
    {
        cout << " -   " << attM3.att4 << "\n" << endl;

        faireDegat(1000);
        playerInfoM.choixAttack = 0;
    }
}