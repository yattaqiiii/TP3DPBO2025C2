// Mouse.cpp (Hybrid Inheritance)
#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
#include "PeripheralDevice.cpp"
using namespace std;

class Mouse : public Komponen, public PeripheralDevice {
private:
    int dpi;
    int buttonCount;
    bool isGaming;
    
public:
    Mouse() {}
    
    Mouse(int dpi, int buttonCount, bool isGaming,
         string interfaceType, bool isWireless,
         string merk, string nama) : 
         Komponen(merk, nama), PeripheralDevice(interfaceType, isWireless) {
        this->dpi = dpi;
        this->buttonCount = buttonCount;
        this->isGaming = isGaming;
    }
    
    void setDpi(int dpi) {
        this->dpi = dpi;
    }
    
    void setButtonCount(int buttonCount) {
        this->buttonCount = buttonCount;
    }
    
    void setIsGaming(bool isGaming) {
        this->isGaming = isGaming;
    }
    
    int getDpi() {
        return this->dpi;
    }
    
    int getButtonCount() {
        return this->buttonCount;
    }
    
    bool getIsGaming() {
        return this->isGaming;
    }
    
    ~Mouse() {}
};
