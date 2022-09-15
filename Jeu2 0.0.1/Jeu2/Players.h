#pragma once
#include <string>



class PlayerInfo
{
public:
    int choixAttack;
    bool shield = false;
    string guerrier;
    int vieDuGuerrier = 0;
    int vieDeChat = 9;
};


class CoolE
{
public:

    int cool2 = 0;
    int cool3 = 0;
    int cool4 = 0;
};

class CoolA
{
public:
    int cool2 = 0;
    int cool3 = 0;
    int cool4 = 0;
};

class CoolM
{
public:
    int cool2 = 0;
    int cool3 = 0;
    int cool4 = 0;
};

class CoolC
{
public:
    int cool2 = 0;
    int cool3 = 0;
};

class CoolH
{
public:
    int cool2 = 0;
    int cool3 = 0;
    int cool4 = 0;
};

class AttE
{
public:
    std::string att1 = "Coup droit"; //fait des damage
    std::string att2 = "Revert"; //fait des damage
    std::string att3 = "Coup tranchant"; //fait des damage
    std::string att4 = "Bouclier"; // protège de la prochaine attaque
};

class AttA
{
public:
    std::string att1 = "Fleche";  //fait des damage
    std::string att2 = "Fleche de feux"; //Fait des degat = des degat sur la duré
    std::string att3 = "Fleche percente"; //Fait des degat
    std::string att4 = "Fleche puissante"; //fait bcp de degat
};

class AttM
{
public:
    std::string att1 = "Boule de feu"; //fait des degat
    std::string att2 = "Vent glacial"; // fait des degat
    std::string att3 = "Coup de foudre"; // fait des degat
    std::string att4 = "Avadakadabra"; //75% tu l'ennemis one tape 25% vie player / 2
};
class AttC
{
public:
    std::string att1 = "Griffure"; //fait des degat
    std::string att2 = "Mosure"; //fait des degat
    std::string att3 = "Miaulement supreme"; //tue l'enemy
    std::string att4 = "les 9 vie du chat"; //respawn 9 fois
};

class AttH
{
public:
    std::string att1 = "coup de point"; //fait des degat
    std::string att2 = "coup de pied"; //fait des degat
    std::string att3 = "summon golem"; //summon un golem qui protege pour un coup et attaque
    std::string att4 = "heal"; // Se heal
};