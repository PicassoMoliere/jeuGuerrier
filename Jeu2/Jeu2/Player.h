#pragma once
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
	string att1 = "Coup droit"; //fait des damage
	string att2 = "Revert"; //fait des damage
	string att3 = "Coup tranchant"; //fait des damage
	string att4 = "Bouclier"; // protège de la prochaine attaque
};

class AttA
{
public:
	string att1 = "Fleche";  //fait des damage
	string att2 = "Fleche de feux"; //Fait des degat = des degat sur la duré
	string att3 = "Fleche percente"; //Fait des degat
	string att4 = "Fleche puissante"; //fait bcp de degat
};

class AttM
{
public:
	string att1 = "Boule de feu"; //fait des degat
	string att2 = "Vent glacial"; // fait des degat
	string att3 = "Coup de foudre"; // fait des degat
	string att4 = "Avadakadabra"; //75% tu l'ennemis one tape 25% vie player / 2
};
class AttC
{
public:
	string att1 = "Griffure"; //fait des degat
	string att2 = "Mosure"; //fait des degat
	string att3 = "Miaulement supreme"; //tue l'enemy
	string att4 = "les 9 vie du chat"; //respawn 9 fois
};

class AttH
{
public:
	string att1 = "coup de point"; //fait des degat
	string att2 = "coup de pied"; //fait des degat
	string att3 = "summon golem"; //summon un golem qui protege pour un coup et attaque
	string att4 = "heal"; // Se heal
};