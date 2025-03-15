// Gpu.cpp
#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

class Gpu : public Komponen {
private:
    int vramGB;
    string architectureType;
    bool supportRayTracing;
    
public:
    Gpu() {}
    
    Gpu(int vramGB, string architectureType, bool supportRayTracing, string merk, string nama) : Komponen(merk, nama) {
        this->vramGB = vramGB;
        this->architectureType = architectureType;
        this->supportRayTracing = supportRayTracing;
    }
    
    void setVramGB(int vramGB) {
        this->vramGB = vramGB;
    }
    
    void setArchitectureType(string architectureType) {
        this->architectureType = architectureType;
    }
    
    void setSupportRayTracing(bool supportRayTracing) {
        this->supportRayTracing = supportRayTracing;
    }
    
    int getVramGB() {
        return this->vramGB;
    }
    
    string getArchitectureType() {
        return this->architectureType;
    }
    
    bool getSupportRayTracing() {
        return this->supportRayTracing;
    }
    
    ~Gpu() {}
};