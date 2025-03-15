// Keyboard.cpp (Hybrid Inheritance)
#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
#include "PeripheralDevice.cpp"
using namespace std;

class Keyboard : public Komponen, public PeripheralDevice {
private:
    bool mechanical;
    string layoutType;
    bool hasBacklight;
    
public:
    Keyboard() {}
    
    Keyboard(bool mechanical, string layoutType, bool hasBacklight,
           string interfaceType, bool isWireless,
           string merk, string nama) : 
           Komponen(merk, nama), PeripheralDevice(interfaceType, isWireless) {
        this->mechanical = mechanical;
        this->layoutType = layoutType;
        this->hasBacklight = hasBacklight;
    }
    
    void setMechanical(bool mechanical) {
        this->mechanical = mechanical;
    }
    
    void setLayoutType(string layoutType) {
        this->layoutType = layoutType;
    }
    
    void setHasBacklight(bool hasBacklight) {
        this->hasBacklight = hasBacklight;
    }
    
    bool getMechanical() {
        return this->mechanical;
    }
    
    string getLayoutType() {
        return this->layoutType;
    }
    
    bool getHasBacklight() {
        return this->hasBacklight;
    }
    
    ~Keyboard() {}
};
