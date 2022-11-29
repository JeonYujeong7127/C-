#pragma once
#include "JYJProduct.h"
class JYJTV :
    public JYJProduct
{
private:
    string company = "0";
    string model = "0";
    int size = 0;

public:
    JYJTV();
    JYJTV(string num, string category, int count, int price, string company, string model, int size);
    ~JYJTV();
    virtual void join(string name);
    friend ostream& operator<<(ostream& out, JYJTV& tv);
    bool operator==(string& model);
    virtual void show();
};

