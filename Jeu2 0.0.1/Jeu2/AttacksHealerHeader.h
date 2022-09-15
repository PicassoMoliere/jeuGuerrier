#pragma once
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <string>



#include "AnyattaquesHeader.h"
#include "Players.h"
#include "FaireDuDegatHeader.h"

using namespace std;


PlayerInfo playerInfoH;
CoolH coolH3;
 AttH attH3;


 void attacksHealer()
 {
     anyattackH();

     cout << "ecrire le numero de l'attaque: " << endl;

     cin >> playerInfoH.choixAttack; cout << endl;

     if (playerInfoH.choixAttack == 1)
     {
         if (coolH3.cool2 > 0)
         {
             coolH3.cool2--;
         }
         if (coolH3.cool3 > 0)
         {
             coolH3.cool3--;
         }
         if (coolH3.cool4 > 0)
         {
             coolH3.cool4--;
         }
     }

     else if (playerInfoH.choixAttack == 2)
     {
         if (coolH3.cool2 > 0)
         {
             cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolH3.cool2 << endl;
             attacksHealer();
         }
         else
         {

             coolH3.cool2 = 2;
             if (coolH3.cool3 > 0)
             {
                 coolH3.cool3--;
             }
             if (coolH3.cool4 > 0)
             {
                 coolH3.cool4--;
             }
         }
     }
     else if (playerInfoH.choixAttack == 3)
     {
         if (coolH3.cool3 > 0)
         {
             cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolH3.cool3 << endl;
             attacksHealer();
         }
         else
         {
             coolH3.cool3 = 6;
             if (coolH3.cool2 > 0)
             {
                 coolH3.cool2--;
             }
             if (coolH3.cool4 > 0)
             {
                 coolH3.cool4--;
             }
         }
     }

     else if (playerInfoH.choixAttack == 4)
     {
         if (coolH3.cool4 > 0)
         {
             cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolH3.cool4 << endl;
             attacksHealer();
         }
         else
         {
             coolH3.cool4 = 9;
             if (coolH3.cool2 > 0)
             {
                 coolH3.cool2--;
             }
             if (coolH3.cool3 > 0)
             {
                 coolH3.cool3--;
             }
         }
     }


     if (playerInfoH.choixAttack == 1)
     {
         cout << " -   " << attH3.att1 << "\n" << endl;

         faireDegat(25);
         playerInfoH.choixAttack = 0;

     }
     else if (playerInfoH.choixAttack == 2)
     {
         cout << " -   " << attH3.att2 << "\n" << endl;

         faireDegat(29);
         playerInfoH.choixAttack = 0;
     }
     else if (playerInfoH.choixAttack == 3)
     {
         cout << " -   " << attH3.att3 << "\n" << endl;

         faireDegat(40);
         playerInfoH.choixAttack = 0;
     }
     else if (playerInfoH.choixAttack == 4)
     {
         cout << " -   " << attH3.att4 << "\n" << endl;

         playerInfoH.vieDuGuerrier += 80;

         playerInfoH.choixAttack = 0;
     }
 }