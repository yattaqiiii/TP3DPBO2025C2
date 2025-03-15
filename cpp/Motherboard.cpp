// Motherboard.cpp
#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

class Motherboard : public Komponen {
private:
    string chipset;
    string formFactor;
    int maxRamSlots;
    
public:
    Motherboard() {}
    
    Motherboard(string chipset, string formFactor, int maxRamSlots, string merk, string nama) : Komponen(merk, nama) {
        this->chipset = chipset;
        this->formFactor = formFactor;
        this->maxRamSlots = maxRamSlots;
    }
    
    void setChipset(string chipset) {
        this->chipset = chipset;
    }
    
    void setFormFactor(string formFactor) {
        this->formFactor = formFactor;
    }
    
    void setMaxRamSlots(int maxRamSlots) {
        this->maxRamSlots = maxRamSlots;
    }
    
    string getChipset() {
        return this->chipset;
    }
    
    string getFormFactor() {
        return this->formFactor;
    }
    
    int getMaxRamSlots() {
        return this->maxRamSlots;
    }
    
    ~Motherboard() {}
};