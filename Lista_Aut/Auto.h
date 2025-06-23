#ifndef AUTO_H
#define AUTO_H
#include <string>
using namespace std;
class Auto {
private:
    static int nextId;
    int m_id;
    string m_marka;
    string m_kolor;
    string m_rejestracja;
    int m_rokProdukcji;
    int m_przebieg;
public:
    Auto();
    Auto(string marka, string kolor, string rejestracja, int rokProdukcji, int przebieg);
    int getId() const;
    string getMarka() const;
    string getKolor() const;
    string getRejestracja() const;
    int getRokProdukcji() const;
    int getPrzebieg() const;
    void display() const;

};

#endif //AUTO_H
