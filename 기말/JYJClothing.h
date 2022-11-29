#pragma once
#include "JYJProduct.h"
class JYJClothing :
    public JYJProduct
{
private:
    string gender;
    string clothname;
    string clothsize;
public:
    JYJClothing();
    JYJClothing(string num, string category, int count, int price, string gender, string clothname, string clothsize);
    ~JYJClothing();
    void join(string name);
    friend ostream& operator<<(ostream& out, JYJClothing clothing);
    virtual void show();
    bool operator==(string& clothname);
    string getClothname() const;
};

