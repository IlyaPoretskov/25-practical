#pragma once

#include <iostream>

struct coordinate
{
    double x = 0, y = 0;

    void hemostat() const
    {
        std::cout << x << " " << y << std::endl
                  << "Clamp has been made in this point" << std::endl;
    }

    void tweezers() const
    {
        std::cout << x << " " << y << std::endl
                  << "The hook has been made in this point" << std::endl;
    }
};

void scalpel(coordinate x, coordinate y);

void suture(coordinate x, coordinate y);

void input_command(std::string &command, int n);

bool double_input_control(std::string n);

void input_coordinate(coordinate &x);

void input_scalpel(coordinate &x, coordinate &y);

void input_hs(coordinate &x);

void input_suture(coordinate scx, coordinate scy, coordinate &x, coordinate &y);