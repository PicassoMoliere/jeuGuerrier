// Jeu2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//█ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ 

#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <string>
#include <time.h>
#include <ctime>
#include <random>
#include <cstdlib>
#include <iomanip>
using namespace std;


//Header
//█ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █

#include "enemyInfos.h"
#include "Players.h"
#include "Clear.h"
#include "RandomEnemyFaibleHeader.h"
#include "PersoDrawingHeader.h"
#include "ChoixDuPersonageHeader.h"
#include "AnyattaquesHeader.h"
#include "FaireDuDegatHeader.h"

#include "FaireDuDegatHeader.h"
#include "AttacksEpeisteHeader.h"
#include "AttacksArcherHeader.h"
#include "AttacksMageHeader.h"
#include "AttacksChatHeader.h"
#include "AttacksHealerHeader.h"


//Class
//█ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █

degatDesEnemy EnemyDamage;
vieDesEnemy EnemyHealth;

CoolE coolE;CoolA coolA;CoolM coolM;CoolC coolC;CoolH coolH;
//AttE attE; AttA attA; AttM attM; AttC attC; AttH attH;
PlayerInfo playerInfo;


//Variable
//█ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █

bool afficher;
bool rejouer;
bool toujoursEnVie = true;
bool enemyEnVie = true;

int degatDuGuerrier = 0;

float xPerience = 0.0f;

string choix;


//Functions
//█ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █ █

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void openInv()
{
    cout << "ouverture de l'inventaire" << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void attacks()
{
    cout << "A votre tour d'attaquer" << endl;
    cout << endl;
    if (playerInfo.guerrier == "epeiste")
    {
        AttacksEpeiste();
    }
    else if (playerInfo.guerrier == "archer")
    {
        attacksArcher();
    }
    else if (playerInfo.guerrier == "mage")
    {
        attacksMage();
    }
    else if (playerInfo.guerrier == "chat")
    {
        attacksChat();
    }
    else if (playerInfo.guerrier == "healer")
    {
        attacksHealer();
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Choix()
{
    if (!afficher)
    {
        cout << "'/attaque' pour attaquer" << endl << "'/inv' pour ouvrir votre inventaire" << endl << "'/tree' pour votre arbre de connaisance" << endl;
        cout << "ecrire 'x' si vous ne voulez plus voir les information des diferente action : " << endl;
    }
    if (afficher)
    {
        cout << "'/attaque'" << endl << "'/inv'" << endl << "'/tree'" << endl;
    }

    cin >> choix; cout << endl;
    if (choix == "x")
    {
        afficher = false;
        cout << "parfait vous ne vous ferer plus deranger, que voulez vous faire maintenant?" << endl;
        Choix();
    }

    if (choix == "/attaque")
    {
        attacks();
    }
    else if (choix == "/inv")
    {
        openInv();
    }
    else if (choix == "/tree")
    {

    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void action()
{
    while (toujoursEnVie)
    {
        
        if (playerInfo.vieDuGuerrier < 0)
        {
            toujoursEnVie = false;
        }
        if (vieEnemy < 0)
        {
            enemyEnVie = false;
        }

        if (!enemyEnVie)
        {
            if (vieEnemy < 0)
            {
                enemyEnVie = true;
                return;
            }
        }
        else if (enemyEnVie)
        {
            if (!toujoursEnVie)
            {
                cout << "Vous êtes mort. Loser!" << endl;
                cout << "Voulez vous rejouer? 'oui' ou 'non' pour confirmer votre choix: " << endl;
                cin >> rejouer; cout << endl;
                if (rejouer)
                {
                    return;
                }
                else
                {
                    break;
                }
            }
            else
            {
                cout << left << "Vie: " << playerInfo.vieDuGuerrier << setfill(' ') << setw(100) << right << "Vie du " << enemy << " : " << vieEnemy << "\n";
                cout << "Xp: " << xPerience << "\n";
                cout << endl;
                cout << endl << endl;
                Choix();
                if (enemy == "Vaurien")
                {
                    playerInfo.vieDuGuerrier -= EnemyDamage.V;
                }
                else if (enemy == "Sorciere")
                {
                    playerInfo.vieDuGuerrier -= EnemyDamage.S;
                }
                else if (enemy == "Romain")
                {
                    playerInfo.vieDuGuerrier -= EnemyDamage.R;
                }
                else if (enemy == "Ninja")
                {
                    playerInfo.vieDuGuerrier -= EnemyDamage.N;
                }
            }
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void level1()
{

    clear();

    randomEnemyFaible();

    cout << "Votre advairsaire est: " << enemy << "\n";

    cout << endl;

    cout << endl;

    action();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    //cout << "Hello World!\n";

    playerInfo.guerrier = choixperso();
    cout << "Votre guerrier est: " << playerInfo.guerrier << " Bonne aventure! \n";
    cout << endl;
    cout << endl;

    if (playerInfo.guerrier == "epeiste")
    {
        playerInfo.vieDuGuerrier = 200;
        degatDuGuerrier = 50;
    }
    else if (playerInfo.guerrier == "archer")
    {
        playerInfo.vieDuGuerrier = 175;
        degatDuGuerrier = 75;
    }
    else if (playerInfo.guerrier == "mage")
    {
        playerInfo.vieDuGuerrier = 100;
        degatDuGuerrier = 89;
    }
    else if (playerInfo.guerrier == "chat")
    {
        playerInfo.vieDuGuerrier = 1000;
        degatDuGuerrier = 1000;
    }
    else if (playerInfo.guerrier == "healer")
    {
        playerInfo.vieDuGuerrier = 500;
        degatDuGuerrier = 15;
    }

    cout << "Votre guerrier a " << playerInfo.vieDuGuerrier << " point de vie\n";
    cout << "Votre guerrier a " << degatDuGuerrier << " point d'attaque\n";

    level1();
}