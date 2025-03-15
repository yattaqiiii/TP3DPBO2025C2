// Monitor.cpp (Multiple Inheritance)
#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
#include "PeripheralDevice.cpp"
using namespace std;

class Monitor : public Komponen, public PeripheralDevice {
private:
    int sizeInch;
    string resolution;
    int refreshRate;
    
public:
    Monitor() {}
    
    Monitor(int sizeInch, string resolution, int refreshRate, 
           string interfaceType, bool isWireless,
           string merk, string nama) : 
           Komponen(merk, nama), PeripheralDevice(interfaceType, isWireless) {
        this->sizeInch = sizeInch;
        this->resolution = resolution;
        this->refreshRate = refreshRate;
    }
    
    void setSizeInch(int sizeInch) {
        this->sizeInch = sizeInch;
    }
    
    void setResolution(string resolution) {
        this->resolution = resolution;
    }
    
    void setRefreshRate(int refreshRate) {
        this->refreshRate = refreshRate;
    }
    
    int getSizeInch() {
        return this->sizeInch;
    }
    
    string getResolution() {
        return this->resolution;
    }
    
    int getRefreshRate() {
        return this->refreshRate;
    }
    
    ~Monitor() {}
};
