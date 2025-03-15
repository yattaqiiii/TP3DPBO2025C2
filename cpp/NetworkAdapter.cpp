// NetworkAdapter.cpp (Multiple Inheritance)
#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
#include "NetworkDevice.cpp"
using namespace std;

class NetworkAdapter : public Komponen, public NetworkDevice {
private:
    bool isWifi;
    bool isBluetooth;
    string macAddress;
    
public:
    NetworkAdapter() {}
    
    NetworkAdapter(bool isWifi, bool isBluetooth, string macAddress,
                 string networkProtocol, float speedMbps,
                 string merk, string nama) : 
                 Komponen(merk, nama), NetworkDevice(networkProtocol, speedMbps) {
        this->isWifi = isWifi;
        this->isBluetooth = isBluetooth;
        this->macAddress = macAddress;
    }
    
    void setIsWifi(bool isWifi) {
        this->isWifi = isWifi;
    }
    
    void setIsBluetooth(bool isBluetooth) {
        this->isBluetooth = isBluetooth;
    }
    
    void setMacAddress(string macAddress) {
        this->macAddress = macAddress;
    }
    
    bool getIsWifi() {
        return this->isWifi;
    }
    
    bool getIsBluetooth() {
        return this->isBluetooth;
    }
    
    string getMacAddress() {
        return this->macAddress;
    }
    
    ~NetworkAdapter() {}
};