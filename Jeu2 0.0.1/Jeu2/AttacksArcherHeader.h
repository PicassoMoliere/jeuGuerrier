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

PlayerInfo playerInfoA;
CoolA coolA3;
AttA attA3;

void attacksArcher()
{
    anyattackA();

    cout << "ecrire le numero de l'attaque: " << endl;

    cin >> playerInfoA.choixAttack; cout << endl;

    if (playerInfoA.choixAttack == 1)
    {
        if (coolA3.cool2 > 0)
        {
            coolA3.cool2 -= 1;
        }
        if (coolA3.cool3 > 0)
        {
            coolA3.cool3 -= 1;
        }
        if (coolA3.cool4 > 0)
        {
            coolA3.cool4 -= 1;
        }
    }


    else if (playerInfoA.choixAttack == 2)
    {
        if (coolA3.cool2 > 0)
        {
            cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolA3.cool2 << endl;
            attacksArcher();
        }
        else
        {
            coolA3.cool2 = 2;
            if (coolA3.cool3 > 0)
            {
                coolA3.cool3 -= 1;
            }
            if (coolA3.cool4 > 0)
            {
                coolA3.cool4 -= 1;
            }

        }
    }
    else if (playerInfoA.choixAttack == 3)
    {
        if (coolA3.cool3 > 0)
        {
            cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolA3.cool3 << endl;
            attacksArcher();
        }
        else
        {
            coolA3.cool3 = 4;
            if (coolA3.cool2 > 0)
            {
                coolA3.cool2 -= 1;
            }
            if (coolA3.cool4 > 0)
            {
                coolA3.cool4 -= 1;
            }
        }
    }

    else if (playerInfoA.choixAttack == 4)
    {
        if (coolA3.cool4 > 0)
        {
            cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolA3.cool4 << endl;
            attacksArcher();
        }
        else
        {
            coolA3.cool4 = 7;
            if (coolA3.cool2 > 0)
            {
                coolA3.cool2 -= 1;
            }
            if (coolA3.cool3 > 0)
            {
                coolA3.cool3 -= 1;
            }
        }

    }

    if (playerInfoA.choixAttack == 1)
    {
        cout << " -   " << attA3.att1 << "\n" << endl;

        faireDegat(43);
        playerInfoA.choixAttack = 0;

    }
    else if (playerInfoA.choixAttack == 2)
    {
        cout << " -   " << attA3.att2 << "\n" << endl;

        faireDegat(47);
        playerInfoA.choixAttack = 0;
    }
    else if (playerInfoA.choixAttack == 3)
    {
        cout << " -   " << attA3.att3 << "\n" << endl;

        faireDegat(56);
        playerInfoA.choixAttack = 0;
    }
    else if (playerInfoA.choixAttack == 4)
    {
        cout << " -   " << attA3.att4 << "\n" << endl;

        faireDegat(79);
        playerInfoA.choixAttack = 0;
    }
}