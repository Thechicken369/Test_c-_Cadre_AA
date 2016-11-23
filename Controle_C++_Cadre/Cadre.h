#pragma once
#include <iostream>
#include<windows.h>

using namespace std;


//Structure pour le point d'encrage 
struct Point
{
	int x;
	int y;
};


class Cadre
{
private:
	Point pointDEncrage;
	int width;
	int height;
	char motifTrace;
	//Recupere La console de sortie
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD CursorPosition;

public:
	//Constructeur 
	Cadre();
	//Constructeur par recopie 
	Cadre(const Cadre* nCadre);

	//-----Mutateur-----

	//geteur
	const int get_Width();
	const int get_Height();
	const char get_Motif();

	//seteur
	void set_Width(int nWidth);
	void set_Height(int nHeight);
	void set_Motif(char nMotif);

	//------affichage------
	void affichageCara();

	//----Positionner le curseur dans la console 
	void gotoXY(int x, int y);

	//-----Dessin du cadre-----
	void drawCadre();
	
	//------Calcule de la surface est du périmetre 
	const int CalcPerimetre();
	const int CalcSurface();

	//----Test si le cadre est carré
	const bool isCarre();





	~Cadre();
};

