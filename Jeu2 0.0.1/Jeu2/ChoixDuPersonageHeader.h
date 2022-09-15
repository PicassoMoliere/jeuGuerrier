#pragma once

#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <string>


using namespace std;


string choixperso()
{
    string verification;

    string userperso;
    cout << "Choisissez une guerrier entre: epeiste, archer, mage, chat, healer:\n";
    cin >> userperso; cout << endl;

    if (userperso != "epeiste")
    {
        if (userperso != "archer")
        {
            if (userperso != "mage")
            {
                if (userperso != "chat")
                {
                    if (userperso != "healer")
                    {
                        choixperso();
                    }
                }
            }
        }
    }
    cout << "confirmez votre choix " << userperso << " en ecrivant 'OK':\n";
    cin >> verification;
    if (verification == "OK") {
        return userperso;
    }
    else {
        choixperso();
        return "failed";
    }
}
