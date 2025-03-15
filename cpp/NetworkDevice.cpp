// NetworkDevice.cpp
#pragma once
#include <iostream>
#include <string>
using namespace std;

class NetworkDevice {
protected:
    string networkProtocol;
    float speedMbps;
    
public:
    NetworkDevice() {}
    
    NetworkDevice(string networkProtocol, float speedMbps) {
        this->networkProtocol = networkProtocol;
        this->speedMbps = speedMbps;
    }
    
    void setNetworkProtocol(string networkProtocol) {
        this->networkProtocol = networkProtocol;
    }
    
    void setSpeedMbps(float speedMbps) {
        this->speedMbps = speedMbps;
    }
    
    string getNetworkProtocol() {
        return this->networkProtocol;
    }
    
    float getSpeedMbps() {
        return this->speedMbps;
    }
    
    ~NetworkDevice() {}
};
