#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people) //przyjmuje referencję
{
    std::vector<char> result; //zwraca wektor char

    for(Human& human : people)
    {
        human.birthday();
        result.push_back(human.isMonster() ? 'n':'y'); //warunek ? wartość1 : wartość2
    }

    std::reverse(result.begin(),result.end());

    return result;
}
