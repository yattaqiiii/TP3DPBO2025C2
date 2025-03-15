#pragma once
#include "Komponen.cpp"
#include <iostream>
#include <string>
using namespace std;
class Harddrive : public Komponen {
private:
    int kapasitasGB;
    string tipeDrive;

public:
    Harddrive()

    {
    }
    Harddrive(int kapasitasGB, string tipeDrive, string merk, string nama)
        : Komponen(merk, nama) {
        this->kapasitasGB = kapasitasGB;
        this->tipeDrive = tipeDrive;
    }
    void setKapasitasGB(int kapasitasGB) {
        this->kapasitasGB = kapasitasGB;
    }
    void setTipeDrive(float tipeDrive) {
        this->tipeDrive = tipeDrive;
    }
    int getKapasitasGB() {
        return this->kapasitasGB;
    }
    string getTipeDrive() {
        return this->tipeDrive;
    }
    ~Harddrive() {
    }
};