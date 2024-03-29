// ClientStack.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Stack.h"
#include"Vector.h"
using namespace std;
using namespace geometrie;
using namespace Algo;

int main()
{
    
    Vector<string>*v=new Vector<string>();
    v->push("zineb");
    v->push("houda");

    Vector<string>* f = new Vector<string>();
    f->push("t");
    f->push("f");
    Stack<Vector<string>>* S = Stack<Vector<string>>::creator();
    S->push(v);
    S->push(f);
    S->print();
    cout << "========================" << endl;
    Stack<Vector<int>>* SS = Stack<Vector<int>>::creator();
    Vector<int>* ff = new Vector<int>();
    ff->push(9);
    ff->push(100);
    SS->push(ff);
    SS->print();
    Stack<Vector<string>>::garbage(S);
    Stack<Vector<int>>::garbage(SS);


}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
