#pragma once
#include "Hand.h"
#include <iostream>
#include <string>
class GenericPlayer :
    public Hand
{
    friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);
public:
    GenericPlayer(const std::string& name);
    virtual ~GenericPlayer();
    virtual bool IsHitting() const = 0; //показывает, хочет ли игрок продолжать брать карты
    bool IsBusted() const; //возвращает, есть ли у игрока перебор
    void Bust() const; //объявляет, что игрок имеет перебор
protected:
    std::string m_Name;
};

