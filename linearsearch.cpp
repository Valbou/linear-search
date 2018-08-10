# include <iostream>

using namespace std;

void afficheTableau(int taille, int tab[])
{
	// AFfiche les elements du tableau separes par des espaces
	for (size_t i = 0; i < taille; ++i)
	{
		cout << i << " -> " << tab[i] << endl;
	}
}

int recherche_lineaire(int &recherche, int &iterations, int taille, int tab[])
{
    for (iterations = 0; iterations < taille; ++iterations)
    {
        if(tab[iterations] == recherche)
        {
            return iterations;
        }
    }
}

main()
{
    int tab[40] = { 9,98,5,6,-3,4,2,1,8,65,12,74,2,21,5,15,-17,18,54,20,100,20,125,134,185,165,14,-8,-23,45,-36,-2,97,63,82,10,-10, -99, 77,-89 }; // Tableau a trier
	int taille = 40;
	int nbIter = 0; // Nombre d'itérations realisées
    int recherche = 54;
    int position = -1;

    cout << "--- Linear Search ---" << endl << endl << "Tableau d'origine " << taille << " :" << endl;
	afficheTableau(taille, tab);

    position = recherche_lineaire(recherche, nbIter, taille, tab);

    cout << endl << "Nombre : " << recherche << " trouve apres " << nbIter << " iterations en position : " << position << endl;

    // La pause est nécessaire pour voir le resultat sous Windows avant la fermeture de la console
	system("pause");
    return 0;
}
