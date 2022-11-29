#pragma once

#include "Salesman.h"

#include <memory>

using std::unique_ptr;

using std::shared_ptr;

class SalesReport

{

private:

    //Salesman* team;

    //unique_ptr<Salesman[]> team;

    double highestSales;

    double averageSales;

    size_t m_number;

    //shared_ptr<Salesman[]> team;

    //Salesman* (*team);   //2�����迭�ƴϿ��� ���� ������ �����ϴ� ��� ���� 5���� 17�� �ٽõ��...

    shared_ptr<shared_ptr<Salesman>[]> team;    

    int m_count = 0;

public:

    SalesReport();

    SalesReport(const size_t& number);

    ~SalesReport();

    void computeStats();

    Salesman& getBestClerk();

    string getTeamInfo();

    size_t getNumber();

    void addMember();

};

