#include <iostream>
using namespace std;
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

    int getLeft()
    {
    return lLeft;
    }

    int getTop()
    {
    return lTop;
    }

    int getRight()
    {
    return lRight;
    }

    int getBottom()
    {
    return lBottom;
    }

    void consult()
    {
        cout << "O Widget:" << endl;
        cout << "P Init - > ( " << getLeft() << " , " << getTop() << " ) " << endl;
        cout << "P Final - > ( " << getRight() << " , " << getBottom() << " ) " << endl;
        cout << "Size - > Comp. ( " << -1*(getLeft() - getRight()) << " ) " << endl;
        cout << "Size - > Alt. ( " << -1*(getTop() - getBottom()) << " ) " << endl;

    }
};

int main(){
    RECT widget;
    widget.setLeft(10);
    widget.setTop(10);
    widget.setRight(750);
    widget.setBottom(650);

    widget.consult();

    return 0;
}