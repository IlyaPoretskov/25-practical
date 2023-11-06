#include "../include/tools.h"

using namespace std;

int main()
{
    int c = 0;

    cout << "The operation has been started" << endl;

    coordinate scalpel_c[2];
    coordinate hemostat_c;
    coordinate tweezers_c;
    coordinate suture_c[2];

    while (c < 4)
    {
        string command;

        input_command(command, c);

        if (command == "scalpel")
        {
            input_scalpel(scalpel_c[0], scalpel_c[1]);
            scalpel(scalpel_c[0], scalpel_c[1]);
        }

        else if (command == "hemostat")
        {
            input_hs(hemostat_c);
            hemostat_c.hemostat();
        }

        else if (command == "tweezers")
        {
            input_hs(tweezers_c);
            tweezers_c.tweezers();
        }

        else if (command == "suture")
        {
            input_suture(scalpel_c[0], scalpel_c[1], suture_c[0], suture_c[1]);
            suture(suture_c[0], suture_c[1]);
        }

        c++;
    }
    system("pause");
}