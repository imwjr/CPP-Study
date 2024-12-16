#include <iostream>
using namespace std;

class Cube {
public:
    // ��Ϊ
    // ���ó�
    void setL(int L) {
        m_L = L;
    }

    // ��ȡ��
    int getL() {
        return m_L;
    }
    // ���ÿ�
    void setW(int W) {
        m_W = W;
    }

    // ��ȡ��
    int getW() {
        return m_W;
    }

    // ���ø�
    void setH(int H) {
        m_H = H;
    }
    // ��ȡ��
    int getH() {
        return m_H;
    }

    // ��ȡ���������
    int getArea() {
        return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
    }

    // ��ȡ���������
    int getVolume() {
        return m_L * m_W * m_H;
    }

    // ���ó�Ա�����ж������������Ƿ����
    bool isEqualByClass(Cube& cube) {
        return m_L == cube.getL() && m_W == cube.getW() && m_H == cube.getH();
    }

private:
    // ����
    int m_L;
    int m_W;
    int m_H;
    
};

// ����ȫ�ֺ����ж������������Ƿ����
bool isEqual(Cube& cube1, Cube& cube2) {
    return cube1.getL() == cube2.getL() && cube1.getW() == cube2.getW() && cube1.getH() == cube2.getH();
}

int main() {
    Cube cube;
    cube.setL(10);
    cube.setW(20);
    cube.setH(30);
    cout << "�����" << cube.getArea() << endl;
    cout << "�����" << cube.getVolume() << endl;

    Cube cube2;
    cube2.setL(10);
    cube2.setW(20);
    cube2.setH(30);
    cout << "�ڶ���������ĳ���ߣ�" << cube2.getL() << " " << cube2.getW() << " " << cube2.getH() << endl;
    if (cube.isEqualByClass(cube2)) {
        cout << "���ó�Ա�����жϣ��������������" << endl;
    }
    else {
        cout << "���ó�Ա�����жϣ����������岻���" << endl;
    }

    if (isEqual(cube, cube2)) {
        cout << "����ȫ�ֺ����жϣ��������������" << endl;
    }
    else {
        cout << "����ȫ�ֺ����жϣ����������岻���" << endl;
    }

    return 0;
    
}