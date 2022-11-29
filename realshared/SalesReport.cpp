
#include "SalesReport.h"

#include <iostream>

using namespace std;

using std::make_unique;



SalesReport::SalesReport()

    :SalesReport(0)

{

}



SalesReport::SalesReport(const size_t& number)

    : m_number(number), averageSales(0.0), highestSales(0.0), team(new shared_ptr<Salesman>[m_number]) //team(make_unique<Salesman[]>(m_number))

{

    if (m_number > 0) {

        //team = new Salesman[m_number];

        //team = make_unique<Salesman[]>(m_number);

        //team = shared_ptr<Salesman[]>(new Salesman[m_number]);

        //team = new Salesman * [m_number];         // ������ �迭�� ��ü ����!!! �ٽ� �ѹ� Ȯ�� �ʿ�...



    }

    else

        team = nullptr;

}



SalesReport::~SalesReport()

{

    /*if (team != nullptr) {

       for (int i = 0; i < m_count; i++)

          delete team[i];

       delete[] team;

    }*/

}



void SalesReport::computeStats()

{

    if (team != nullptr) {

        double sum = team[0]->getSales();

        highestSales = team[0]->getSales();

        for (size_t i = 1; i < m_number; i++) {

            if (highestSales < team[i]->getSales()) {

                highestSales = team[i]->getSales();

            }

            sum += team[i]->getSales();

        }

        averageSales = sum / m_number;

    }

}



Salesman& SalesReport::getBestClerk()

{

    size_t bestIndex = 0;

    for (size_t i = 1; i < m_number; i++) {

        if (team[bestIndex]->getSales() < team[i]->getSales()) {

            bestIndex = i;

        }

    }

    return *team[bestIndex];

}



string SalesReport::getTeamInfo()

{

    string info = "�ο��� : " + to_string(m_number);

    info += "\n��� �Ǹŷ� : " + to_string(averageSales);

    info += "\n�ְ� �Ǹŷ� : " + to_string(highestSales) + "\n";



    return info;

}



size_t SalesReport::getNumber()

{

    return m_number;

}



void SalesReport::addMember()

{

    if (m_count < m_number) {

        string name;

        double sales;



        cout << "�̸� : ";

        cin >> name;

        cout << "�Ǹűݾ� : ";

        cin >> sales;

        team[m_count++] = shared_ptr<Salesman>(new Salesman(name, sales));

        //team[m_count] = new Salesman();

        //team[m_count]->readInput();   //�ּҰ��� �����ϰ� ��ü�� ����Ű�� �ִ� ���¸� -> . ��� ���

        //m_count++;

    }

    else {

        cout << "���̻� ���ڸ��� ����" << endl;

    }

}