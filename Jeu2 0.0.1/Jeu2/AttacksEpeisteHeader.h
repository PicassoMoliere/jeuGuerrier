#pragma once
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <string>


#include "AnyattaquesHeader.h"
#include "Players.h"
#include "FaireDuDegatHeader.h"



using namespace std;

CoolE coolE3;
AttE attE3;
PlayerInfo playerInfoE;




void AttacksEpeiste()
{
    anyattackE();

    cout << "ecrire le numero de l'attaque: " << endl;

    cin >> playerInfoE.choixAttack; cout << endl;

    if (playerInfoE.choixAttack == 1)
    {
        if (coolE3.cool2 > 0)
        {
            coolE3.cool2 -= 1;
        }

        if (coolE3.cool3 > 0)
        {
            coolE3.cool3 -= 1;
        }
        if (coolE3.cool4 > 0)
        {
            coolE3.cool4 -= 1;
        }

    }

    if (playerInfoE.choixAttack == 2)
    {
        if (coolE3.cool2 > 0)
        {
            cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolE3.cool2 << endl;
            AttacksEpeiste();
        }
        else
        {
            coolE3.cool2 = 2;
            if (coolE3.cool3 > 0)
            {
                coolE3.cool3 -= 1;
            }
            if (coolE3.cool4 > 0)
            {
                coolE3.cool4 -= 1;
            }

        }
    }
    else if (playerInfoE.choixAttack == 3)
    {
        if (coolE3.cool3 > 0)
        {
            cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolE3.cool3 << endl;
            AttacksEpeiste();
        }
        else
        {
            coolE3.cool3 = 4;
            if (coolE3.cool2 > 0)
            {
                coolE3.cool2 -= 1;
            }
            if (coolE3.cool4 > 0)
            {
                coolE3.cool4 -= 1;
            }


        }

    }

    else if (playerInfoE.choixAttack == 4)
    {
        if (coolE3.cool4 > 0)
        {

            cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolE3.cool4 << endl;
            AttacksEpeiste();
        }
        else if (coolE3.cool4 == 0)
        {
            if (playerInfoE.shield = true)
            {
                cout << "Vouz avez deja un bouclier" << endl;
                AttacksEpeiste();
            }
        }
        else
        {
            coolE3.cool4 = 6;
            if (coolE3.cool2 > 0)
            {
                coolE3.cool2 -= 1;
            }
            if (coolE3.cool3 > 0)
            {
                coolE3.cool3 -= 1;
            }

        }

    }
    else
    {
        AttacksEpeiste();
    }

    if (playerInfoE.choixAttack == 1)
    {
        cout << " -   " << attE3.att1 << "\n" << endl;

        faireDegat(43);
        playerInfoE.choixAttack = 0;
    }
    else if (playerInfoE.choixAttack == 2)
    {
        cout << " -   " << attE3.att2 << "\n" << endl;

        faireDegat(47);
        playerInfoE.choixAttack = 0;
    }
    else if (playerInfoE.choixAttack == 3)
    {
        cout << " -   " << attE3.att3 << "\n" << endl;

        faireDegat(56);
        playerInfoE.choixAttack = 0;
    }
    else if (playerInfoE.choixAttack == 4)
    {
        cout << " -   " << attE3.att4 << "\n" << endl;

        playerInfoE.shield = true;
        playerInfoE.choixAttack = 0;
    }

}