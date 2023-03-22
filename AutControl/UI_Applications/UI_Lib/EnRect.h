#pragma once

#include <iostream>
#include <map>

namespace geoUiLib
{
    using namespace std;

    class EnRect
    {
    public:
        EnRect();
        EnRect(float x, float y, float altura, float largura);
        ~EnRect();

    private:
        float x;
        float y;
        float altura;
        float largura;
    };

    EnRect::EnRect()
    {
        this->x = 0;
        this->y = 0;
        this->altura = 0;
        this->largura = 0;
    }
    EnRect::EnRect(float x, float y, float altura, float largura)
    {
        this->x = x;
        this->y = y;
        this->altura = altura;
        this->largura = largura;
    }

    EnRect::~EnRect()
    {
    }
}