#include "The_Sky_Castle/cell.h"
#include "The_Sky_Castle/character.h"
#include "The_Sky_Castle/game.h"

void pause_console(void)
{
    std::cout << "\n\tAppuyer sur Entrée pour continuer.\n";
    std::cin.ignore();
}


Character *set_main_character()
{
    char ok = 'N';
    string name;
    string sexe;

    do
    {
        cout << "\t*  Entrez le nom du héro : ";
        getline(cin, name);
        cout << "\n\n\tVotre personnage s'appelle " << name << endl;
        cout << "\n\t\t- Ce choix vous convient-il [O/n] ? ";
        cin >> ok;
        cout << "\n -------------------------------------------------";
        cin.ignore();
        cout << "\n\n";

        if(ok == 'O' || ok == 'o')
            return (new Character(name));
    }
    while(ok != 'O' || ok != 'o');

    return NULL;
}


void title(ifstream &file)
{

}


/* ------------------------------- */
/* -------- Main begining -------- */
/* ------------------------------- */

int main(int argc, char** argv)
{

    exit(EXIT_SUCCESS);
}

