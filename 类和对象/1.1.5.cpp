#include <iostream>
using namespace std;

class Cube {
public:
    // 行为
    // 设置长
    void setL(int L) {
        m_L = L;
    }

    // 获取长
    int getL() {
        return m_L;
    }
    // 设置宽
    void setW(int W) {
        m_W = W;
    }

    // 获取宽
    int getW() {
        return m_W;
    }

    // 设置高
    void setH(int H) {
        m_H = H;
    }
    // 获取高
    int getH() {
        return m_H;
    }

    // 获取长方体面积
    int getArea() {
        return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
    }

    // 获取长方体体积
    int getVolume() {
        return m_L * m_W * m_H;
    }

    // 利用成员函数判断两个长方体是否相等
    bool isEqualByClass(Cube& cube) {
        return m_L == cube.getL() && m_W == cube.getW() && m_H == cube.getH();
    }

private:
    // 属性
    int m_L;
    int m_W;
    int m_H;
    
};

// 利用全局函数判断两个长方体是否相等
bool isEqual(Cube& cube1, Cube& cube2) {
    return cube1.getL() == cube2.getL() && cube1.getW() == cube2.getW() && cube1.getH() == cube2.getH();
}

int main() {
    Cube cube;
    cube.setL(10);
    cube.setW(20);
    cube.setH(30);
    cout << "面积：" << cube.getArea() << endl;
    cout << "体积：" << cube.getVolume() << endl;

    Cube cube2;
    cube2.setL(10);
    cube2.setW(20);
    cube2.setH(30);
    cout << "第二个长方体的长宽高：" << cube2.getL() << " " << cube2.getW() << " " << cube2.getH() << endl;
    if (cube.isEqualByClass(cube2)) {
        cout << "利用成员函数判断，两个长方体相等" << endl;
    }
    else {
        cout << "利用成员函数判断，两个长方体不相等" << endl;
    }

    if (isEqual(cube, cube2)) {
        cout << "利用全局函数判断，两个长方体相等" << endl;
    }
    else {
        cout << "利用全局函数判断，两个长方体不相等" << endl;
    }

    return 0;
    
}