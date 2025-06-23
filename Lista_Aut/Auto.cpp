#include "Auto.h"
#include <iostream>
#include <string>
using namespace std;
int Auto::nextId=1;
Auto::Auto() : m_id(0), m_marka(""), m_kolor(""), m_rejestracja(""), m_przebieg(0), m_rokProdukcji(0) {}
Auto::Auto(string marka, string kolor, string rejestracja, int rokProdukcji, int przebieg)
{
    m_marka = marka;
    m_kolor = kolor;
    m_rejestracja = rejestracja;
    m_przebieg = przebieg;
    m_rokProdukcji = rokProdukcji;
    m_id = nextId++;
}

int Auto::getId() const {return m_id;}
string Auto::getMarka() const {return m_marka;}
string Auto::getKolor() const {return m_kolor;}
string Auto::getRejestracja() const {return m_rejestracja;}
int Auto::getPrzebieg() const {return m_przebieg;}
int Auto::getRokProdukcji() const {return m_rokProdukcji;}


void Auto::display() const {
    cout <<"ID:"<< m_id <<endl;
    cout <<"Marka:"<<m_marka <<endl;
    cout <<"Kolor:"<<m_kolor <<endl;
    cout <<"RokProdukcji:"<<m_rokProdukcji <<endl;
    cout <<"Przebieg:"<<m_przebieg <<endl;
    cout <<"Rejestracja:"<<m_rejestracja <<endl;
}
