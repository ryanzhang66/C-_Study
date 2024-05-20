// 练习案例：设计立方体类
#include <iostream>
using namespace std;

class Cube{
    private:
        int m_L;
        int m_H;
        int m_W;
    
    public:
        void SetNumber(int l,int h,int w){
            m_L = l;
            m_H = h;
            m_W = w;
        }

        int GetArea(){
            return 2*(m_H*m_L)+2*(m_L*m_W)+2*(m_H*m_W);
        }

        int GetVolume(){
            return m_L * m_H * m_W;
        }

};

int GetCubeEqual(Cube c1, Cube c2){
    if (c1.GetArea() == c2.GetArea() && c1.GetVolume() == c2.GetVolume())
    {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    Cube c1;
    Cube c2;
    c1.SetNumber(10,2,3);
    c2.SetNumber(10,2,3);
    if (GetCubeEqual(c1,c2) == 1){
        cout << "相等" << endl;
    }
    else {
        cout << "不相等" << endl;
    }
}