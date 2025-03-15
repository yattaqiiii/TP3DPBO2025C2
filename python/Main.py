from KomputerLengkap import KomputerLengkap
from Cpu import Cpu
from Ram import Ram
from HardDrive import HardDrive
from Gpu import Gpu
from Motherboard import Motherboard
from PowerSupply import PowerSupply
from Monitor import Monitor
from NetworkAdapter import NetworkAdapter
from Keyboard import Keyboard
from Mouse import Mouse

def main():
    # Inisialisasi komponen utama
    cpu = Cpu(12, 4.2, "AMD", "Ryzen 9 5900X")

    # Inisialisasi RAM
    ram_list = [
        Ram(16, "DDR4", "Corsair", "Vengeance RGB Pro"),
        Ram(16, "DDR4", "Corsair", "Vengeance RGB Pro")
    ]

    # Inisialisasi Harddrive
    harddrive_list = [
        HardDrive(1000, "NVMe SSD", "Samsung", "970 EVO Plus"),
        HardDrive(2000, "SATA SSD", "Samsung", "870 EVO")
    ]

    # Inisialisasi GPU, Motherboard, dan Power Supply
    gpu = Gpu(12, "RDNA 2", True, "AMD", "Radeon RX 6800 XT")
    motherboard = Motherboard("X570", "ATX", 4, "ASUS", "ROG Strix X570-E Gaming")
    power_supply = PowerSupply(850, "80+ Gold", True, "Corsair", "RM850x")

    # Inisialisasi Monitor, Network Adapter, Keyboard, dan Mouse
    monitor = Monitor(165, 27, "2560x1440", "LG", "27GL850-B", "DisplayPort", False)
    network_adapter = NetworkAdapter(True, True, "88:88:88:88:88:88", "Intel", "Wi-Fi 6 AX200", "802.11ax", 1000)
    keyboard = Keyboard(True, "USB", False, "Logitech", "G915", True, "ANSI")
    mouse = Mouse(16000, "USB", 8, "Logitech", "G Pro Wireless", True, True)

    # Membuat objek KomputerLengkap
    komputer = KomputerLengkap(
        "PC Gaming Pro", "Desktop Gaming", cpu, ram_list, harddrive_list,
        gpu, motherboard, power_supply, monitor, network_adapter, keyboard, mouse
    )

    # Menambahkan RAM tambahan
    komputer.add_ram(Ram(16, "DDR4", "G.Skill", "Trident Z Neo"))

    # Menambahkan Harddrive tambahan
    komputer.add_harddrive(HardDrive(4000, "HDD", "Western Digital", "Black"))

    # Menampilkan informasi komputer
    komputer.display_info()

if __name__ == "__main__":
    main()
