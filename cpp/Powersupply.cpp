// PowerSupply.cpp
#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

class PowerSupply : public Komponen {
private:
    int wattage;
    string certification;
    bool modular;
    
public:
    PowerSupply() {}
    
    PowerSupply(int wattage, string certification, bool modular, string merk, string nama) : Komponen(merk, nama) {
        this->wattage = wattage;
        this->certification = certification;
        this->modular = modular;
    }
    
    void setWattage(int wattage) {
        this->wattage = wattage;
    }
    
    void setCertification(string certification) {
        this->certification = certification;
    }
    
    void setModular(bool modular) {
        this->modular = modular;
    }
    
    int getWattage() {
        return this->wattage;
    }
    
    string getCertification() {
        return this->certification;
    }
    
    bool getModular() {
        return this->modular;
    }
    
    ~PowerSupply() {}
};
