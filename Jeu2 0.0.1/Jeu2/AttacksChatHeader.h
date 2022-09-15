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
PlayerInfo playerInfoC;
CoolC coolC3;
AttC attC3;

void attacksChat()
{
    anyattackC();

    cout << "ecrire le numero de l'attaque: " << endl;

    cin >> playerInfoC.choixAttack; cout << endl;

    if (playerInfoC.choixAttack == 1)
    {
        if (coolC3.cool2 > 0)
        {
            coolC3.cool2--;
        }
        if (coolC3.cool3 > 0)
        {
            coolC3.cool3--;
        }
    }

    else if (playerInfoC.choixAttack == 2)
    {
        if (coolC3.cool2 > 0)
        {
            cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolC3.cool2 << endl;
            attacksChat();
        }
        else
        {
            coolC3.cool2 = 2;
            if (coolC3.cool3 > 0)
            {
                coolC3.cool3--;
            }
        }
    }
    else if (playerInfoC.choixAttack == 3)
    {
        if (coolC3.cool3 > 0)
        {
            cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolC3.cool3 << endl;
            attacksChat();
        }
        else
        {
            coolC3.cool3 = 5;
            if (coolC3.cool2 > 0)
            {
                coolC3.cool2--;
            }
        }
    }

    if (playerInfoC.choixAttack == 1)
    {
        cout << " -   " << attC3.att1 << "\n" << endl;

        faireDegat(9);
        playerInfoC.choixAttack = 0;

    }
    else if (playerInfoC.choixAttack == 2)
    {
        cout << " -   " << attC3.att2 << "\n" << endl;

        faireDegat(90);
        playerInfoC.choixAttack = 0;
    }
    else if (playerInfoC.choixAttack == 3)
    {
        cout << " -   " << attC3.att3 << "\n" << endl;

        faireDegat(900);
        playerInfoC.choixAttack = 0;
    }

    if (playerInfoC.vieDuGuerrier <= 1)
    {
        cout << "\n" << attC3.att4 << endl;

        playerInfoC.vieDeChat --;
        cout << "Vous venez de perdre 1 vie il vous en reste " << playerInfoC.vieDeChat << " sur 9" << endl;
        playerInfoC.vieDuGuerrier += 1000;
        cout << "Vous avez " << playerInfoC.vieDuGuerrier << "points de vie restant" << endl;
    }



}