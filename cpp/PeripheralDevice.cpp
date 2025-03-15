// PeripheralDevice.cpp
#pragma once
#include <iostream>
#include <string>
using namespace std;

class PeripheralDevice {
protected:
    string interfaceType;
    bool isWireless;
    
public:
    PeripheralDevice() {}
    
    PeripheralDevice(string interfaceType, bool isWireless) {
        this->interfaceType = interfaceType;
        this->isWireless = isWireless;
    }
    
    void setInterfaceType(string interfaceType) {
        this->interfaceType = interfaceType;
    }
    
    void setWireless(bool isWireless) {
        this->isWireless = isWireless;
    }
    
    string getInterfaceType() {
        return this->interfaceType;
    }
    
    bool getIsWireless() {
        return this->isWireless;
    }
    
    ~PeripheralDevice() {}
};