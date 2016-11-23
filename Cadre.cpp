#include "Cadre.h"


//********CONSTRUCTEUR********
Cadre::Cadre()
{
	this->pointDEncrage.x = 10;
	this->pointDEncrage.y = 5;
	this->width = 5;
	this->height = this->width * 2;
	this->motifTrace = '*';
}

Cadre::Cadre(const Cadre * nCadre)
{
	this->pointDEncrage = nCadre->pointDEncrage;
	this->width = nCadre->width;
	this->height = nCadre->height;
	this->motifTrace = nCadre->motifTrace;

}

//*******MUTATEUR *********

const int Cadre::get_Width()
{
	return this->width;
}

const int Cadre::get_Height()
{
	return this->height;
}

const char Cadre::get_Motif()
{
	return this->motifTrace;
}

void Cadre::set_Width(int nWidth)
{
	this->width = nWidth;
}

void Cadre::set_Height(int nHeight)
{
	this->height = nHeight;
}

void Cadre::set_Motif(char  nMotif)
{
	this->motifTrace = nMotif;
}


//*******FONCTION D'AFFICHAGE
void Cadre::affichageCara()
{
	cout << "Voici les caracteristique du cadre :" << endl;
	cout << "Point d'engrage x = " << this->pointDEncrage.x << " et y = " << this->pointDEncrage.y << endl;
	cout << "Largeur : " << this->width << endl;
	cout << "Longeur : " << this->height << endl;
	cout << "Motif du trace : " << this->motifTrace << endl;

	//Bonus affichage perimetre et surface 
	cout << "Perimetre : " << this->CalcPerimetre() << endl;
	cout << "Surface :" << this->CalcSurface() << endl;
	
}

//*********FONCTION DE POSITIONNEMENT DU CURSEUR DANS LA CONSOLE*****
void Cadre::gotoXY(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}
//********FONCTION QUI DESSINE LE CADRE *******
void Cadre::drawCadre()
{
	system("pause");
	system("cls");
	for (int i = 0; i < this->height; i++)
	{
		for (int j = 0; j < this->width; j++)
		{
			if ((i == 0 || i == this->height-1) || (j == 0 || j == this->width-1))
			{
				this->gotoXY(this->pointDEncrage.x + i, this->pointDEncrage.y + j);
				cout << this->motifTrace << endl;
			}
			
		}
		

	}
}

//******FONCTION DE CACULE DU PERIMETRE*******
const int Cadre::CalcPerimetre()
{
	return 2 *(this->width + this->height);
}
//********FONCTION DE CALCUL DE LA SURFACE******
const int Cadre::CalcSurface()
{
	return this->width * this->height;
}
//********FONCTION DE TEST SI LE CADRE EST CARRE****
const bool Cadre::isCarre()
{
	if (this->width != this->height)
	{
		return false;
	}
	else {
		return true;
	}
	
}




Cadre::~Cadre()
{

}
