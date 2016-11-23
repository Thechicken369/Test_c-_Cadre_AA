#include "Cadre.h"
#include <iostream>


/*Reponse au question du cour:

1/ Un constructeur permet l'instancition d'un objet en initialisant les donné menbre de l'objet crée et en allouant la mémoire pour celui-ci , il est  executé lors de la création de l objet
par la syntaxe suivante : Objet monObjet = new Constructeur(....); . Il peut prendre plusieur paramétre ou aucun.

2/Un detructeur permet de detruire l'objet est de désaloué la memoire ocupé par l'objet 

3/Un constructeur est une fonction sans type de retour(pas de void non plus)et  qui a le meme nom que la clase par exemple :Cadre(...);
il peut il ya voir autant de constructeur que l'on veut il suffit qu'il ce différencie par leur paramétre :
Cadre(int width) != Cadre(int height)

4/Une surdéfinition de fonction est qu'and deux fonction on la meme signature mais que l'on change le corps de la fonction 

5/Publique et private représente l'encapsulation des donnée menbre et des fonstion. Un donnée publis pouras etre acceder de partout dans le programe
alors que priavte ne sera accesible que dans la meme clase, il faudra passer par un mutateur pour pouvoir y accerder


*/

int main()
{

	//Construction du cadre 1 
	Cadre c1 = new Cadre();
	Cadre c3 = new Cadre();
	c1.affichageCara();

	//Modification des donnée du cadre 1
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