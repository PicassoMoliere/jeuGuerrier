// Jeu2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

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


//Class_______________________________________________________________________________________________________________________________________________
#include "enemyInfo.h"
degatDesEnemy EnemyDamage;
vieDesEnemy EnemyHealth;

#include "Player.h"
CoolE coolE;CoolA coolA;CoolM coolM;CoolC coolC;CoolH coolH;
AttE attE; AttA attA; AttM attM; AttC attC; AttH attH;

//Variable________________________________________________________________________________________________________________________________________

string guerrier;
int vieDuGuerrier = 0;
int degatDuGuerrier = 0;
float xPerience = 0.0f;

string enemy;
int vieEnemy = 0;
int degatEnemy = 0;


int choixAttack;
bool shield = false;
int vieDeChat = 9;


//Functions___________________________________________________________________________________________________________________________________
void random(int max, bool zero)
{
    srand(time(0));
     
    for (int x = 1; x < 25; x++)
    {
        if (zero = true)
        {
            cout << 1 + max + (rand() % 10) << endl;
        }
        else 
        {
            cout << max + (rand() % 10) << endl;
        }
    }
}


void faireDegat(int degatAFaire)
{
    vieEnemy -= degatAFaire;
     
    cout << "\n Vous avez infligé " << degatAFaire << " degats a l'enemy" << enemy;

}

void anyattackE()
{
    cout << attE.att1 << "(1)" << endl << endl;
     
    if (coolE.cool2 == 0)
    {
        cout << attE.att2 << "(2)" << endl << endl;
    }
    if (coolE.cool3 == 0)
    {
        cout << attE.att3 << "(3)" << endl << endl;
    }
    if (coolE.cool4 == 0)
    {
        cout << attE.att4 << "(4)" << endl << endl;
    }
}

void anyattackA()
{
    cout << attA.att1 << "(1)" << endl << endl;
    if (coolA.cool2 == 0)
    {
        cout << attA.att2<< "(2)" << endl << endl;
    }
    if (coolA.cool3 == 0)
    {
        cout << attA.att3 << "(3)" << endl << endl;
    }
    if (coolA.cool4 == 0)
    {
        cout << attA.att4 << "(4)" << endl << endl;
    }
}

void anyattackM()
{
    cout << attM.att1 << "(1)" << endl << endl;
    if (coolM.cool2 == 0)
    {
        cout << attM.att2 << "(2)" << endl << endl;
    }
    if (coolM.cool3 == 0)
    {
        cout << attM.att3 << "(3)" << endl << endl;
    }
    if (coolM.cool4 == 0)
    {
        cout << attM.att4 << "(4)" << endl << endl;
    }
}

void anyattackC()
{
    cout << attC.att1 << "(1)" << endl << endl;
    if (coolC.cool2 == 0)
    {
        cout << attC.att2 << "(2)" << endl << endl;
    }
    if (coolC.cool3 == 0)
    {
        cout << attC.att3 << "(3)" << endl << endl;
    }
}

void anyattackH()
{
    cout << attH.att1 << "(1)" << endl << endl;
    if (coolH.cool2 == 0)
    {
        cout << attH.att2 << "(2)" << endl << endl;
    }
    if (coolH.cool3 == 0)
    {
        cout << attH.att3 << "(3)" << endl << endl;
    }
    if (coolH.cool4 == 0)
    {
        cout << attH.att4 << "(4)" << endl << endl;
    }
}




void attacks()
{
    cout << "A votre tour d'attaquer" << endl;
    cout << endl;
    if(guerrier == "epeiste")
    {
         
        
         
        anyattackE();
         
        cout << "ecrire le numero de l'attaque: " << endl;
         
        cin >> choixAttack; cout << endl;
         
        if (choixAttack == 1)
        {
            if (coolE.cool2 > 0)
            {
                coolE.cool2 -= 1;
            }
            
            if (coolE.cool3 > 0)
            {
                coolE.cool3 -= 1;
            }
            if (coolE.cool4 > 0)
            {
                coolE.cool4 -= 1;
            }
        }
         
        if (choixAttack == 2)
        {
            if (coolE.cool2 > 0)
            {
                cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolE.cool2 << endl;
                attacks();
            }
            else 
            {
                coolE.cool2 = 2;
                if (coolE.cool3 > 0)
                {
                    coolE.cool3 -= 1;
                }
                if (coolE.cool4 > 0)
                {
                    coolE.cool4 -= 1;
                }
                
            }
        }
        else if (choixAttack == 3)
        {
            if (coolE.cool3 > 0)
            {
                cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolE.cool3 << endl;
                attacks();
            }
            else
            {
                coolE.cool3 = 4;
                if (coolE.cool2 > 0)
                {
                    coolE.cool2 -= 1;
                }
                if (coolE.cool4 > 0)
                {
                    coolE.cool4 -= 1;
                }
             
            
            }
        
        }
         
        else if (choixAttack == 4)
        {
            if (coolE.cool4 > 0)
            {
                
                cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolE.cool4 << endl;
                attacks();
            }
            else if (coolE.cool4 == 0)
            {
                if (shield = true)
                {
                    cout << "Vouz avez deja un bouclier" << endl;
                    attacks();
                }
            }
            else
            {
                coolE.cool4 = 6;
                if (coolE.cool2 > 0)
                {
                    coolE.cool2 -= 1;
                }
                if (coolE.cool3 > 0)
                {
                    coolE.cool3 -= 1;
                }
                 
            }
         
        }
        else 
        {
            attacks();
        }
    
        if (choixAttack == 1)
        {
            cout <<" -   " << attE.att1 << "\n" << endl;
            
            faireDegat(43);
            choixAttack = 0;
            
        }
        else if (choixAttack == 2)
        {
            cout << " -   " << attE.att2 << "\n" << endl;
            
            faireDegat(47);
            choixAttack = 0;
        }
        else if (choixAttack == 3)
        {
            cout << " -   " << attE.att3 << "\n" << endl;
            
            faireDegat(56);
            choixAttack = 0;
        }
        else if (choixAttack == 4)
        {
            cout << " -   " << attE.att4 << "\n" << endl;
            
            shield = true;
            choixAttack = 0;
        }
         
    }
    else if (guerrier == "archer")
    {
        anyattackA();
        
        cout << "ecrire le numero de l'attaque: " << endl;
           
        cin >> choixAttack; cout << endl;
        
        if (choixAttack == 1)
        {
            if (coolA.cool2 > 0)
            {
                coolA.cool2 -= 1;
            }
            if (coolA.cool3 > 0)
            {
                coolA.cool3 -= 1;
            }
            if (coolA.cool4 > 0)
            {
                coolA.cool4 -= 1;
            }
        }


        else if (choixAttack == 2)
        {
            if (coolA.cool2 > 0)
            {
                cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolA.cool2 << endl;
                attacks();
            }
            else
            {
                coolA.cool2 = 2;
                if (coolA.cool3 > 0)
                {
                    coolA.cool3 -= 1;
                }
                if (coolA.cool4 > 0)
                {
                    coolA.cool4 -= 1;
                }
              
            }
        }
        else if (choixAttack == 3)
        {
            if (coolA.cool3 > 0)
            {
                cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolA.cool3 << endl;
                attacks();
            }
            else
            {
                coolA.cool3 = 4;
                if (coolA.cool2 > 0)
                {
                    coolA.cool2 -= 1;
                }
                if (coolA.cool4 > 0)
                {
                    coolA.cool4 -= 1;
                }
            }
        }
         
        else if (choixAttack == 4)
        {
            if (coolA.cool4 > 0)
            {
                cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolA.cool4 << endl;
                attacks();
            }
            else
            {
                coolA.cool4 = 7;
                if (coolA.cool2 > 0)
                {
                    coolA.cool2 -= 1;
                }
                if (coolA.cool3 > 0)
                {
                    coolA.cool3 -= 1;
                }
            }
           
        } 
         
        if (choixAttack == 1)
        {
            cout << " -   " << attA.att1 << "\n" << endl;
             
            faireDegat(43);
            choixAttack = 0;
         
        }
        else if (choixAttack == 2)
        {
            cout << " -   " << attA.att2 << "\n" << endl;
             
            faireDegat(47);
            choixAttack = 0;
        }
        else if (choixAttack == 3)
        {
            cout << " -   " << attA.att3 << "\n" << endl;
             
            faireDegat(56);
            choixAttack = 0;
        }
        else if (choixAttack == 4)
        {
            cout << " -   " << attA.att4 << "\n" << endl;
             
            faireDegat(79);
            choixAttack = 0;
        }
        
    }
     
    //Mage 
     
    else if (guerrier == "mage")
    {
        anyattackM();
           
        cout << "ecrire le numero de l'attaque: " << endl;
        
        cin >> choixAttack; cout << endl;
        
        if (choixAttack == 1)
        {
            if (coolM.cool2 > 0)
            {
                coolM.cool2 -= 1;
            }
            if (coolM.cool3 > 0)
            {
                coolM.cool3 -= 1;
            }
            if (coolM.cool4 > 0)
            {
                coolM.cool4 -= 1;
            }
        }

        if (choixAttack == 2)
        {
            if (coolM.cool2 > 0)
            {
                cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolM.cool2 << endl;
                attacks();
            }
            else
            {
                coolM.cool2 = 2;
                
                if (coolM.cool3 > 0)
                {
                    coolM.cool3--;
                }
                if (coolM.cool4 > 0)
                {
                    coolM.cool4--;
                }
             
            }
        }
        if (choixAttack == 3)
        {
            if (coolM.cool3 > 0)
            {
                cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolM.cool3 << endl;
                attacks();
            }
            else
            {
                coolM.cool3 = 4;
                if (coolM.cool3 > 0)
                {
                    coolM.cool2 --;
                }
                if (coolM.cool4 > 0)
                {
                    coolM.cool4--;
                }
            }
        }
        
        if (choixAttack == 4)
        {
            if (coolM.cool4 > 0)
            {
                cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolM.cool4 << endl;
                attacks();
            }
            else
            {
                coolM.cool4 = 8;
                if (coolM.cool2 > 0)
                {
                    coolM.cool2 --;
                }
                if (coolM.cool3 > 0)
                {
                    coolM.cool3--;
                }
               
            }
        }
        
        if (choixAttack == 1)
        {
            cout << " -   " << attM.att1 << "\n" << endl;
             
            faireDegat(43);
            choixAttack = 0;
             
        }
        else if (choixAttack == 2)
        {
            cout << " -   " << attM.att2 << "\n" << endl;
             
            faireDegat(47);
            choixAttack = 0;
        }
        else if (choixAttack == 3)
        {
            cout << " -   " << attM.att3 << "\n" << endl;
             
            faireDegat(56);
            choixAttack = 0;
        }
        else if (choixAttack == 4)
        {
            cout << " -   " << attM.att4 << "\n" << endl;
             
            faireDegat(1000);
            choixAttack = 0;
        }
         
    }
    
    //Chat
    
    else if (guerrier == "chat")
    {
        anyattackC();
        
        cout << "ecrire le numero de l'attaque: " << endl;
         
        cin >> choixAttack; cout << endl;
         
        if (choixAttack == 1)
        {
            if (coolC.cool2 > 0)
            {
                coolC.cool2 --;
            }
            if (coolC.cool3> 0)
            {
                coolC.cool3--;
            }
        }
         
        else if (choixAttack == 2)
        {
            if (coolC.cool2 > 0)
            {
                cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolC.cool2 << endl;
                attacks();
            }
            else
            {
                coolC.cool2 = 2;
                if (coolC.cool3 > 0)
                {
                    coolC.cool3 --;
                }
            }
        }
        else if (choixAttack == 3)
        {
            if (coolC.cool3 > 0)
            {
                cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolC.cool3 << endl;
                attacks();
            }
            else
            {
                coolC.cool3 = 5;
                if (coolC.cool2 > 0)
                {
                    coolC.cool2--;
                }
            }
        }
         
        if (choixAttack == 1)
        {
            cout << " -   " << attC.att1 << "\n" << endl;
             
            faireDegat(9);
            choixAttack = 0;
             
        }
        else if (choixAttack == 2)
        {
            cout << " -   " << attC.att2 << "\n" << endl;
             
            faireDegat(90);
            choixAttack = 0;
        }
        else if (choixAttack == 3)
        {
            cout << " -   " << attC.att3 << "\n" << endl;
             
            faireDegat(900);
            choixAttack = 0;
        }
         
        if (vieDuGuerrier <= 1)
        {
            cout << "\n"<< attC.att4 << endl;
             
            vieDeChat--;
            cout << "Vous venez de perdre 1 vie il vous en reste " << vieDeChat << " sur 9" << endl;
            vieDuGuerrier += 1000;
            cout << "Vous avez " << vieDuGuerrier << "points de vie restant" << endl;
        }
        
           
        
         
    }
     
    //Healer
     
    else if (guerrier == "healer")
    {
        anyattackH();
         
        cout << "ecrire le numero de l'attaque: " << endl;
         
        cin >> choixAttack; cout << endl;
         
        if (choixAttack == 1)
        {
            if (coolH.cool2 > 0)
            {
                coolH.cool2--;
            }
            if (coolH.cool3 > 0)
            {
                coolH.cool3--;
            }
            if (coolH.cool4 > 0)
            {
                coolH.cool4--;
            }
        }
         
        else if (choixAttack == 2)
        {
            if (coolH.cool2 > 0)
            {
                cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolH.cool2 << endl;
                attacks();
            }
            else
            {
                 
                coolH.cool2 = 2;
                if (coolH.cool3 > 0)
                {
                    coolH.cool3--;
                }
                if (coolH.cool4 > 0)
                {
                    coolH.cool4--;
                }
            }
        }
        else if (choixAttack == 3)
        {
            if (coolH.cool3 > 0)
            {
                cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolH.cool3 << endl;
                attacks();
            }
            else 
            {
                coolH.cool3 = 6;
                if (coolH.cool2 > 0)
                {
                    coolH.cool2--;
                }
                if (coolH.cool4 > 0)
                {
                    coolH.cool4--;
                }
            }
        }
         
        else if (choixAttack == 4)
        {
            if (coolH.cool4 > 0)
            {
                cout << "Vous ne pouvez pas utilisé cette capcité vous devez attendre la fin du cooldown: " << coolH.cool4 << endl;
                attacks();
            }
            else 
            {
                coolH.cool4 = 9;
                if (coolH.cool2 > 0)
                {
                    coolH.cool2--;
                }
                if (coolH.cool3 > 0)
                {
                    coolH.cool3--;
                }
            }
        }
         
         
        if (choixAttack == 1)
        {
            cout << " -   " << attH.att1 << "\n" << endl;
             
            faireDegat(25);
            choixAttack = 0;
             
        }
        else if (choixAttack == 2)
        {
            cout << " -   " << attH.att2<<"\n" << endl;
             
            faireDegat(29);
            choixAttack = 0;
        }
        else if (choixAttack == 3)
        {
            cout << " -   " << attH.att3 << "\n" << endl;
             
            faireDegat(40);
            choixAttack = 0;
        }
        else if (choixAttack == 4)
        {
            cout << " -   " << attH.att4 << "\n" << endl;
             
            vieDuGuerrier += 80;
             
            choixAttack = 0;
        }
        
    }
}









//choix du perssonage plus confirmation
string choixperso()
{
    string verification;
     
    string userperso;
    cout << "Choisissez une guerrier entre: epeiste, archer, mage, chat, healer:\n";
    cin >> userperso;cout<< endl;
     
    if (userperso != "epeiste")
    {
    if (userperso != "archer")
    {
    if (userperso != "mage")
    {
    if (userperso != "chat")
    {
    if( userperso != "healer")
    {
    choixperso();
    }}}}}
    cout << "confirmez votre choix "<<userperso<<" en ecrivant 'OK':\n";
    cin >> verification;
    if (verification == "OK"){
    return userperso;
    }
    else{
    choixperso();
    return "failed";
    }
}




int persoDrawing()
{
    int value1 = 47, value2 = 124, value3 = 92;
    //cout << endl; cout << endl; cout << endl;
     
    cout << " O" << endl;
    
    printf("%c", value1); printf("%c", value2); printf("%c", value3); cout << endl;
    
    cout << " LL" << endl;
    return  0;


}


int clear() {
    
    system("cls");
    
    return 0;
}

void randomEnemyFaible()
{
    string enemyFaibleArray[4] = { "Vaurien", "Sorciere", "Ninja", "Romain" };
    random_device rd;  //Will be used to obtain a seed for the random number engine
    mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    uniform_int_distribution<> distrib(0, 3);
    
    enemy = enemyFaibleArray[distrib(gen)];
    
    
    
    if (enemy == "Vaurien")
    {
        vieEnemy = EnemyHealth.V;
        degatEnemy = EnemyDamage.V;
    }
    else if (enemy == "Sorciere")
    {
        vieEnemy = EnemyHealth.S;
        degatEnemy = EnemyDamage.S;
    }
    else if (enemy == "Ninja")
    {
        vieEnemy = EnemyHealth.N;
        degatEnemy = EnemyDamage.N;
    }
    else if (enemy == "Romain")
    {
        vieEnemy = EnemyHealth.R;
        degatEnemy = EnemyDamage.R;
    }
    
}

void level1()
{
    clear();
     
    randomEnemyFaible();
     
    cout << "Votre advairsaire est: " << enemy << "\n";
    
    cout << endl;
     
    cout << endl;
    
    
    while(true)
    {
        
         
        cout << left << "Vie: " << vieDuGuerrier << setfill(' ') << setw(100) << right << "Vie du "<< enemy<<" : " << vieEnemy << "\n";
        cout << "Xp: " << xPerience << "\n";
        cout << endl;
         
         
         
        cout << endl << endl;
         
        persoDrawing();
         
        cout << endl << endl;
         
        attacks();
        if (vieEnemy > 0 && vieDuGuerrier > 0)
        {
            if (enemy == "Vaurien")
            {
                vieDuGuerrier -= EnemyDamage.V;
            }
            else if (enemy == "Sorciere")
            {
                vieDuGuerrier -= EnemyDamage.S;
            }
            else if (enemy == "Romain")
            {
                vieDuGuerrier -= EnemyDamage.R;
            }
            else if (enemy == "Ninja")
            {
                vieDuGuerrier -= EnemyDamage.N;
            }
        }
        else
        {
            if (vieDuGuerrier < 0)
            {
                 
            }
            else if (vieEnemy < 0)
            {
                 
            }
        }
    }
    
    
    
}

int main()
{
    //cout << "Hello World!\n";
    
    guerrier = choixperso();
    cout <<"Votre guerrier est: " << guerrier<<" Bonne aventure! \n";
    cout << endl;
    cout << endl;
    
    if (guerrier == "epeiste")
    {
        vieDuGuerrier = 200;
        degatDuGuerrier = 50;
    }
    else if (guerrier == "archer")
    {
        vieDuGuerrier = 175;
        degatDuGuerrier = 75;
    }
    else if (guerrier == "mage")
    {
        vieDuGuerrier = 100;
        degatDuGuerrier = 89;
    }
    else if (guerrier == "chat")
    {
        vieDuGuerrier = 1000;
        degatDuGuerrier = 1000;
    }
    else if (guerrier == "healer")
    {
        vieDuGuerrier = 500;
        degatDuGuerrier = 15;
    }
    
    cout << "Votre guerrier a " << vieDuGuerrier << " point de vie\n";
    cout << "Votre guerrier a " << degatDuGuerrier << " point d'attaque\n";
    
    level1();
     
     
    
}











// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
