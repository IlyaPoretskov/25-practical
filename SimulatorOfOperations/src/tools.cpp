#include <iostream>
#include <string>

#include "../include/tools.h"

void scalpel(coordinate x, coordinate y)
{
    std::cout << "1: " << x.x << " " << x.y << std::endl <<
                 "2: " << y.x << " " << y.y << std::endl <<
                 "The incision has been made in this area" << std::endl;
}

void suture(coordinate x, coordinate y)
{
    std::cout << "1: " << x.x << " " << x.y << std::endl <<
              "2: " << y.x << " " << y.y << std::endl <<
              "The seam has been made in this area" << std::endl;
}

void input_command(std::string &command, const int n)
{
    std::cout << "Action №" << n + 1 << ", please, input the command: ";
    std::cin >> command;

    while (command != "hemostat" &&
           command != "tweezers" &&
           command != "scalpel"  &&
           command != "suture")
    {
        std::cerr << "Wrong input, please, try again" << std::endl;
        std::cout << "Action №" << n + 1 << ", please, input the command: ";
        std::cin >> command;
    }

    while ((n == 0            &&  command !=  "scalpel") ||
           (n == 3            &&  command !=   "suture") ||
           (n == 1 || n == 2) && (command != "hemostat" && command != "tweezers"))
    {
        std::cerr << "Wrong action sequence, please, try again" << std::endl;

        std::cout << "Action №" << n + 1 << ", please, input the command: ";
        std::cin >> command;

        while (command != "hemostat" &&
               command != "tweezers" &&
               command != "scalpel"  &&
               command != "suture")
        {
            std::cerr << "Wrong input, please, try again" << std::endl;
            std::cout << "Action №" << n + 1 << ", please, input the command: ";
            std::cin >> command;
        }
    }
}

bool double_input_control(std::string n)
{
    for (int i = 0; n[i]; i++)
    {
        if (!(n[i] >= '0' && n[i] <= '9' || n[i] == '.' || n[i] == '-'))
        {
            return false;
        }
    }
    return true;
}

void input_coordinate(coordinate &x)
{
    std::string x_str, y_str;
    std::cin >> x_str >> y_str;

    while (!(double_input_control(x_str) && double_input_control(y_str)))
    {
        std::cerr << "Wrong input, please try again" << std::endl;
        std::cout << "Input coordinate: ";
        std::cin >> x_str >> y_str;
    }
    x.x = stof(x_str);
    x.y = stof(y_str);
}

void input_scalpel(coordinate &x, coordinate &y)
{
    std::cout << "Input first coordinate (x y): ";
    input_coordinate(x);

    std::cout << "Input second coordinate (x y): ";
    input_coordinate(y);
}

void input_hs(coordinate &x)
{
    std::cout << "Input coordinate (x, y): ";
    input_coordinate(x);
}

void input_suture(coordinate scx, coordinate scy, coordinate &x, coordinate &y)
{
    std::cout << "Input first coordinate (x y): ";
    input_coordinate(x);

    std::cout << "Input second coordinate (x y): ";
    input_coordinate(y);

    while (x.x != scx.x || x.y != scx.y || y.x != scy.x || y.y != scy.y)
    {
        std::cerr << "Wrong input, please, input the same coordinates as scalpel coordinates" << std::endl;

        std::cout << "Input first coordinate (x y): ";
        input_coordinate(x);

        std::cout << "Input second coordinate (x y): ";
        input_coordinate(y);
    }
}