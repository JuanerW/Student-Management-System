
#ifndef STUSYSTEMGUI_DEPTARTMENT_H
#define STUSYSTEMGUI_DEPTARTMENT_H
#include<iostream>
using namespace std;


class Deptartment {

private:

    //ϵid
    int did;

    //ϵ��
    string name;

    //ϵ����
    string director;

    //ϵ����
    int capcity;
    //
    //��������
    int num;

public:
    //���캯����did����
    Deptartment(const string& name, const string& director, int capcity, int num);

    //�޲ι���
    Deptartment();

    int getDid() const;

    void setDid(int did);

    const string& getName() const;

    void setName(const string& name);

    const string& getDirector() const;

    void setDirector(const string& director);

    int getCapcity() const;

    void setCapcity(int capcity);

    int getNum() const;

    void setNum(int num);

    //����==�����
    bool operator==(const Deptartment& rhs) const;

    //����!=�����
    bool operator!=(const Deptartment& rhs) const;

    //����<<
    friend ostream& operator<<(ostream& os, const Deptartment& deptartment);
};


#endif //STUSYSTEMGUI_DEPTARTMENT_H
