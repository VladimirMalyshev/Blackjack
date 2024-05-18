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
    virtual bool IsHitting() const = 0; //����������, ����� �� ����� ���������� ����� �����
    bool IsBusted() const; //����������, ���� �� � ������ �������
    void Bust() const; //���������, ��� ����� ����� �������
protected:
    std::string m_Name;
};

