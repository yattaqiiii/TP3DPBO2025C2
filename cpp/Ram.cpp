#pragma once
#include "Komponen.cpp"
#include <iostream>
#include <string>
using namespace std;
class Ram : public Komponen {
private:
    int kapasitasGB;
    string ddr;

public:
    Ram() {
    }
    Ram(int kapasitasGB, string ddr, string merk, string nama) : Komponen(merk, nama) {
        this->kapasitasGB = kapasitasGB;
        this->ddr = ddr;
    }
    void setKapasitasGB(int kapasitasGB) {

        this->kapasitasGB = kapasitasGB;
    }
    void setDdr(float ddr) {
        this->ddr = ddr;
    }
    int getKapasitasGB() {
        return this->kapasitasGB;
    }
    string getDdr() {
        return this->ddr;
    }
    ~Ram() {
    }
};