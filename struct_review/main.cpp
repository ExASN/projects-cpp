#include <iostream>

struct RECT
{
    int32_t lLeft;
    int32_t lTop;
    int32_t lRight;
    int32_t lBottom;

void setLeft(int32_t left)
{
if(left!=lLeft)
lLeft = left;
}

void setTop(int32_t top)
{
if(top!=lTop)
lTop = top;
}

void setRight(int32_t right)
{
if(right!=lRight)
lRight = right;
}

void setBottom(int32_t bottom)
{
if(bottom!=lBottom)
lBottom = bottom;
}

};

int main(){
    return 0;
}