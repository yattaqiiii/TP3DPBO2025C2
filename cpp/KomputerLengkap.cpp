// KomputerLengkap.cpp (Composition lebih kompleks)
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Harddrive.cpp"
#include "Ram.cpp"
#include "Gpu.cpp"
#include "Motherboard.cpp"
#include "PowerSupply.cpp"
#include "Monitor.cpp"
#include "NetworkAdapter.cpp"
#include "Keyboard.cpp"
#include "Mouse.cpp"
using namespace std;

class KomputerLengkap {
private:
    string nama;
    string tipeKomputer;
    Cpu cpu;
    vector<Ram> ramList;
    vector<Harddrive> harddriveList;
    Gpu gpu;
    Motherboard motherboard;
    PowerSupply powerSupply;
    Monitor monitor;
    NetworkAdapter networkAdapter;
    Keyboard keyboard;
    Mouse mouse;
    
public:
    KomputerLengkap() {}
    
    KomputerLengkap(string nama, string tipeKomputer, Cpu cpu, vector<Ram> ramList, 
                  vector<Harddrive> harddriveList, Gpu gpu, Motherboard motherboard, 
                  PowerSupply powerSupply, Monitor monitor, NetworkAdapter networkAdapter,
                  Keyboard keyboard, Mouse mouse) {
        this->nama = nama;
        this->tipeKomputer = tipeKomputer;
        this->cpu = cpu;
        this->ramList = ramList;
        this->harddriveList = harddriveList;
        this->gpu = gpu;
        this->motherboard = motherboard;
        this->powerSupply = powerSupply;
        this->monitor = monitor;
        this->networkAdapter = networkAdapter;
        this->keyboard = keyboard;
        this->mouse = mouse;
    }
    
    void setNama(string nama) {
        this->nama = nama;
    }
    
    void setTipeKomputer(string tipeKomputer) {
        this->tipeKomputer = tipeKomputer;
    }
    
    void setCpu(Cpu cpu) {
        this->cpu = cpu;
    }
    
    void setRam(vector<Ram> ramList) {
        this->ramList = ramList;
    }
    
    void setHarddrive(vector<Harddrive> harddriveList) {
        this->harddriveList = harddriveList;
    }
    
    void setGpu(Gpu gpu) {
        this->gpu = gpu;
    }
    
    void setMotherboard(Motherboard motherboard) {
        this->motherboard = motherboard;
    }
    
    void setPowerSupply(PowerSupply powerSupply) {
        this->powerSupply = powerSupply;
    }
    
    void setMonitor(Monitor monitor) {
        this->monitor = monitor;
    }
    
    void setNetworkAdapter(NetworkAdapter networkAdapter) {
        this->networkAdapter = networkAdapter;
    }
    
    void setKeyboard(Keyboard keyboard) {
        this->keyboard = keyboard;
    }
    
    void setMouse(Mouse mouse) {
        this->mouse = mouse;
    }
    
    void addRam(Ram ram) {
        this->ramList.push_back(ram);
    }
    
    void addHarddrive(Harddrive harddrive) {
        this->harddriveList.push_back(harddrive);
    }
    
    string getNama() {
        return this->nama;
    }
    
    string getTipeKomputer() {
        return this->tipeKomputer;
    }
    
    Cpu getCpu() {
        return this->cpu;
    }
    
    vector<Ram> getRamList() {
        return this->ramList;
    }
    
    vector<Harddrive> getHarddriveList() {
        return this->harddriveList;
    }
    
    Gpu getGpu() {
        return this->gpu;
    }
    
    Motherboard getMotherboard() {
        return this->motherboard;
    }
    
    PowerSupply getPowerSupply() {
        return this->powerSupply;
    }
    
    Monitor getMonitor() {
        return this->monitor;
    }
    
    NetworkAdapter getNetworkAdapter() {
        return this->networkAdapter;
    }
    
    Keyboard getKeyboard() {
        return this->keyboard;
    }
    
    Mouse getMouse() {
        return this->mouse;
    }
    
    void displayInfo() {
        cout << "Informasi Komputer Lengkap:" << endl;
        cout << "Nama: " << this->nama << endl;
        cout << "Tipe Komputer: " << this->tipeKomputer << endl;
        
        // CPU Info
        cout << "\n--- CPU ---" << endl;
        cout << "Merk: " << cpu.getMerk() << endl;
        cout << "Nama: " << cpu.getNama() << endl;
        cout << "Jumlah Core: " << cpu.getJumlahCore() << endl;
        cout << "Kecepatan: " << cpu.getKecepatanGHz() << " GHz" << endl;
        
        // RAM Info
        cout << "\n--- RAM ---" << endl;
        for (int i = 0; i < ramList.size(); i++) {
            cout << "RAM #" << (i + 1) << ":" << endl;
            cout << "  Merk: " << ramList[i].getMerk() << endl;
            cout << "  Nama: " << ramList[i].getNama() << endl;
            cout << "  Kapasitas: " << ramList[i].getKapasitasGB() << " GB" << endl;
            cout << "  Tipe: " << ramList[i].getDdr() << endl;
        }
        
        // Harddrive Info
        cout << "\n--- Storage ---" << endl;
        for (int i = 0; i < harddriveList.size(); i++) {
            cout << "Drive #" << (i + 1) << ":" << endl;
            cout << "  Merk: " << harddriveList[i].getMerk() << endl;
            cout << "  Nama: " << harddriveList[i].getNama() << endl;
            cout << "  Kapasitas: " << harddriveList[i].getKapasitasGB() << " GB" << endl;
            cout << "  Tipe: " << harddriveList[i].getTipeDrive() << endl;
        }
        
        // GPU Info
        cout << "\n--- GPU ---" << endl;
        cout << "Merk: " << gpu.getMerk() << endl;
        cout << "Nama: " << gpu.getNama() << endl;
        cout << "VRAM: " << gpu.getVramGB() << " GB" << endl;
        cout << "Arsitektur: " << gpu.getArchitectureType() << endl;
        cout << "Ray Tracing: " << (gpu.getSupportRayTracing() ? "Ya" : "Tidak") << endl;
        
        // Motherboard Info
        cout << "\n--- Motherboard ---" << endl;
        cout << "Merk: " << motherboard.getMerk() << endl;
        cout << "Nama: " << motherboard.getNama() << endl;
        cout << "Chipset: " << motherboard.getChipset() << endl;
        cout << "Form Factor: " << motherboard.getFormFactor() << endl;
        cout << "Max RAM Slots: " << motherboard.getMaxRamSlots() << endl;
        
        // Power Supply Info
        cout << "\n--- Power Supply ---" << endl;
        cout << "Merk: " << powerSupply.getMerk() << endl;
        cout << "Nama: " << powerSupply.getNama() << endl;
        cout << "Wattage: " << powerSupply.getWattage() << " W" << endl;
        cout << "Sertifikasi: " << powerSupply.getCertification() << endl;
        cout << "Modular: " << (powerSupply.getModular() ? "Ya" : "Tidak") << endl;
        
        // Monitor Info
        cout << "\n--- Monitor ---" << endl;
        cout << "Merk: " << monitor.getMerk() << endl;
        cout << "Nama: " << monitor.getNama() << endl;
        cout << "Ukuran: " << monitor.getSizeInch() << " inch" << endl;
        cout << "Resolusi: " << monitor.getResolution() << endl;
        cout << "Refresh Rate: " << monitor.getRefreshRate() << " Hz" << endl;
        cout << "Interface: " << monitor.getInterfaceType() << endl;
        cout << "Wireless: " << (monitor.getIsWireless() ? "Ya" : "Tidak") << endl;
        
        // Network Adapter Info
        cout << "\n--- Network Adapter ---" << endl;
        cout << "Merk: " << networkAdapter.getMerk() << endl;
        cout << "Nama: " << networkAdapter.getNama() << endl;
        cout << "Wi-Fi: " << (networkAdapter.getIsWifi() ? "Ya" : "Tidak") << endl;
        cout << "Bluetooth: " << (networkAdapter.getIsBluetooth() ? "Ya" : "Tidak") << endl;
        cout << "MAC Address: " << networkAdapter.getMacAddress() << endl;
        cout << "Protocol: " << networkAdapter.getNetworkProtocol() << endl;
        cout << "Speed: " << networkAdapter.getSpeedMbps() << " Mbps" << endl;
        
        // Keyboard Info
        cout << "\n--- Keyboard ---" << endl;
        cout << "Merk: " << keyboard.getMerk() << endl;
        cout << "Nama: " << keyboard.getNama() << endl;
        cout << "Mechanical: " << (keyboard.getMechanical() ? "Ya" : "Tidak") << endl;
        cout << "Layout: " << keyboard.getLayoutType() << endl;
        cout << "Backlight: " << (keyboard.getHasBacklight() ? "Ya" : "Tidak") << endl;
        cout << "Interface: " << keyboard.getInterfaceType() << endl;
        cout << "Wireless: " << (keyboard.getIsWireless() ? "Ya" : "Tidak") << endl;
        
        // Mouse Info
        cout << "\n--- Mouse ---" << endl;
        cout << "Merk: " << mouse.getMerk() << endl;
        cout << "Nama: " << mouse.getNama() << endl;
        cout << "DPI: " << mouse.getDpi() << endl;
        cout << "Jumlah Tombol: " << mouse.getButtonCount() << endl;
        cout << "Gaming: " << (mouse.getIsGaming() ? "Ya" : "Tidak") << endl;
        cout << "Interface: " << mouse.getInterfaceType() << endl;
        cout << "Wireless: " << (mouse.getIsWireless() ? "Ya" : "Tidak") << endl;
    }
    
    ~KomputerLengkap() {}
 };