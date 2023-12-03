#include "computer.h"

using namespace std;

int main()
{
    computer n{};

    std::string command;

    while (true)
    {
        std::cout << "Please, enter the command: " << std::endl;
        std::cin >> command;

        if (command == "sum")
        {
            n.compute();
        }
        else if (command == "save")
        {
            n.save();
        }
        else if (command == "load")
        {
            n.load();
        }
        else if (command == "display")
        {
            n.gpu();
        }
        else if (command == "input")
        {
            n.kbd();
        }
        else if (command == "exit")
        {
            break;
        }
    }
    system("pause");
    return 0;
}
