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
        EnRect(float x, float y, float Altura, float Largura);
        EnRect(int x1, int y1, int x2, int y2);
        ~EnRect();

    protected:
        void setX1(int x);
        void setY1(int Y);
        void setX2(int x);
        void setY2(int Y);
        void setAltura(int Altura);
        void setLargura(int Largura);

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
        cout << "Objeto criado" << endl;
    }
    EnRect::EnRect(float x, float y, float Altura, float Largura)
    {
        this->x = x;
        this->y = y;
        this->altura = Altura;
        this->largura = Largura;
    }
    EnRect::EnRect(int x1, int y1, int x2, int y2)
    {
        this->x = x1;
        this->y = y1;
        this->altura = (x2 - x1);
        this->largura = (y2 - y1);
    }

    EnRect::~EnRect()
    {
    }
}