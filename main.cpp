#include "Cadre.h"
#include <iostream>


/*Reponse au question du cour:

1/ Un constructeur permet l'instancition d'un objet en initialisant les donn� menbre de l'objet cr�e et en allouant la m�moire pour celui-ci , il est  execut� lors de la cr�ation de l objet
par la syntaxe suivante : Objet monObjet = new Constructeur(....); . Il peut prendre plusieur param�tre ou aucun.

2/Un detructeur permet de detruire l'objet est de d�salou� la memoire ocup� par l'objet 

3/Un constructeur est une fonction sans type de retour(pas de void non plus)et  qui a le meme nom que la clase par exemple :Cadre(...);
il peut il ya voir autant de constructeur que l'on veut il suffit qu'il ce diff�rencie par leur param�tre :
Cadre(int width) != Cadre(int height)

4/Une surd�finition de fonction est qu'and deux fonction on la meme signature mais que l'on change le corps de la fonction 

5/Publique et private repr�sente l'encapsulation des donn�e menbre et des fonstion. Un donn�e publis pouras etre acceder de partout dans le programe
alors que priavte ne sera accesible que dans la meme clase, il faudra passer par un mutateur pour pouvoir y accerder


*/

int main()
{

	//Construction du cadre 1 
	Cadre c1 = new Cadre();
	Cadre c3 = new Cadre();
	c1.affichageCara();

	//Modification des donn�e du cadre 1
	c1.set_Width(10);
	c1.set_Height(5);
	c1.set_Motif('z');

	c1.affichageCara();

	//Construction du cadre 2 par recopie 
	Cadre c2 = new Cadre(c1);

	c2.affichageCara();

	//Test de fonctinnement de la fonction isCarre()
	if (c2.isCarre())
		cout << "Le cadre 2 est carre" << endl;
	else
		cout << "Le cadre 2 n'est pas carre " << endl;

	
	//Test de ma Fonction de dessin 
	c2.drawCadre();
	
	c3.drawCadre();

	system("pause");
	return 0;
}