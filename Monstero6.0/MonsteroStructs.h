#pragma once


struct EL {
	char moveName[30];
	float Power;
	float Dfs;
	float Brutality;
	float Spd;
	float Heart;
	float HP;
	char s[300];
	int  type; // single buff, single nerf,  double target, helps call stApply or dtApply 
			   //bool infection;
};
struct DTEL {
	char moveName[20];
	EL bt; // buff target
	EL nt; // nerf target
	char s[300];
	int type; // type one or two, single our double target move
};

struct Moveset
{
	EL moveArray[4]; //{ null, BitchSlap, Depression, Confidence };
	DTEL moveArrayD[4];// = { SpreadPeace, nullD, nullD, nullD };
	bool moveSorD[4];// = { false, true, true, true };
};

struct Monstero {
	float Power;
	float Dfs;
	float Brutality;
	float Spd;
	float Heart;
	float HP;
	//int turns;
	Moveset moves;
	//bool moveSorD[4];
	//EL moveArray[4];
	//DTEL moveArrayD[4];
	bool infection;

};

struct Player {
	Monstero m;
};

//Effect Layer


//EL apply(Monstero)

//Dual Target Effect Layer


void displayMoves(Moveset moveSet);
void stApply(EL e, Monstero &m);
void dtApply(DTEL e, Monstero &H, Monstero &V);
bool Combat(Player Hero, Player Villain);
void applyAttack(EL e, Monstero &m, Monstero &g);
void displayString(EL e);
void displayDTELstring(DTEL d);
void creation1(float &power, float &defense, float &brutality, float &speed, float &heart);
void creation2(float &power, float &defense, float &brutality, float &speed, float &heart);
void FillMoveFromFile(EL &move);