// Main.cpp - Kode Utama Program
#include <bits/stdc++.h>
#include "KomputerLengkap.cpp"
using namespace std;

int main() {
   ios::sync_with_stdio(0); cin.tie();
   
   // Inisialisasi komponen-komponen
   Cpu cpu(12, 4.2, "AMD", "Ryzen 9 5900X");
   
   // Inisialisasi RAM
   vector<Ram> ramList;
   ramList.push_back(Ram(16, "DDR4", "Corsair", "Vengeance RGB Pro"));
   ramList.push_back(Ram(16, "DDR4", "Corsair", "Vengeance RGB Pro"));
   
   // Inisialisasi Harddrive
   vector<Harddrive> harddriveList;
   harddriveList.push_back(Harddrive(1000, "NVMe SSD", "Samsung", "970 EVO Plus"));
   harddriveList.push_back(Harddrive(2000, "SATA SSD", "Samsung", "870 EVO"));
   
   // Inisialisasi komponen lainnya
   Gpu gpu(12, "RDNA 2", true, "AMD", "Radeon RX 6800 XT");
   Motherboard motherboard("X570", "ATX", 4, "ASUS", "ROG Strix X570-E Gaming");
   PowerSupply powerSupply(850, "80+ Gold", true, "Corsair", "RM850x");
   
   // Inisialisasi peripheral
   Monitor monitor(27, "2560x1440", 165, "DisplayPort", false, "LG", "27GL850-B");
   NetworkAdapter networkAdapter(true, true, "88:88:88:88:88:88", "802.11ax", 1000, "Intel", "Wi-Fi 6 AX200");
   Keyboard keyboard(true, "ANSI", true, "USB", false, "Logitech", "G915");
   Mouse mouse(16000, 8, true, "USB", false, "Logitech", "G Pro Wireless");
   
   // Membuat objek komputer lengkap
   KomputerLengkap komputer("PC Gaming Pro", "Desktop Gaming", cpu, ramList, harddriveList, 
                          gpu, motherboard, powerSupply, monitor, networkAdapter, keyboard, mouse);
   
   // Menambahkan RAM tambahan
   komputer.addRam(Ram(16, "DDR4", "G.Skill", "Trident Z Neo"));
   
   // Menambahkan Harddrive tambahan
   komputer.addHarddrive(Harddrive(4000, "HDD", "Western Digital", "Black"));
   
   // Menampilkan informasi komputer
   komputer.displayInfo();
   
   return 0;
}