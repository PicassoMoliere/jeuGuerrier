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

#include "enemyInfos.h"



using namespace std;



degatDesEnemy EnemyDamages;
vieDesEnemy EnemyHealths;



int vieEnemy;
int degatEnemy;





string enemy;

void randomEnemyFaible()
{
    string enemyFaibleArray[4] = { "Vaurien", "Sorciere", "Ninja", "Romain" };
    random_device rd;  //Will be used to obtain a seed for the random number engine
    mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    uniform_int_distribution<> distrib(0, 3);

    enemy = enemyFaibleArray[distrib(gen)];



    if (enemy == "Vaurien")
    {
        vieEnemy = EnemyHealths.V;
        degatEnemy = EnemyDamages.V;
    }
    else if (enemy == "Sorciere")
    {
        vieEnemy = EnemyHealths.S;
        degatEnemy = EnemyDamages.S;
    }
    else if (enemy == "Ninja")
    {
        vieEnemy = EnemyHealths.N;
        degatEnemy = EnemyDamages.N;
    }
    else if (enemy == "Romain")
    {
        vieEnemy = EnemyHealths.R;
        degatEnemy = EnemyDamages.R;
    }

}