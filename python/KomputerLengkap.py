class KomputerLengkap:
    def __init__(self, nama, tipe_komputer, cpu, ram_list, harddrive_list, gpu, motherboard, power_supply, 
                 monitor, network_adapter, keyboard, mouse):
        self.nama = nama
        self.tipe_komputer = tipe_komputer
        self.cpu = cpu
        self.ram_list = ram_list
        self.harddrive_list = harddrive_list
        self.gpu = gpu
        self.motherboard = motherboard
        self.power_supply = power_supply
        self.monitor = monitor
        self.network_adapter = network_adapter
        self.keyboard = keyboard
        self.mouse = mouse

    def set_nama(self, nama):
        self.nama = nama

    def set_tipe_komputer(self, tipe_komputer):
        self.tipe_komputer = tipe_komputer

    def add_ram(self, ram):
        self.ram_list.append(ram)

    def add_harddrive(self, harddrive):
        self.harddrive_list.append(harddrive)

    def display_info(self):
        print("=== Informasi Komputer Lengkap ===")
        print(f"Nama: {self.nama}")
        print(f"Tipe: {self.tipe_komputer}")

        # CPU
        print("\n--- CPU ---")
        print(self.cpu)

        # RAM
        print("\n--- RAM ---")
        for i, ram in enumerate(self.ram_list, 1):
            print(f"RAM #{i}: {ram}")

        # Harddrive
        print("\n--- Storage ---")
        for i, drive in enumerate(self.harddrive_list, 1):
            print(f"Drive #{i}: {drive}")

        # GPU
        print("\n--- GPU ---")
        print(self.gpu)

        # Motherboard
        print("\n--- Motherboard ---")
        print(self.motherboard)

        # Power Supply
        print("\n--- Power Supply ---")
        print(self.power_supply)

        # Monitor
        print("\n--- Monitor ---")
        print(self.monitor)

        # Network Adapter
        print("\n--- Network Adapter ---")
        print(self.network_adapter)

        # Keyboard
        print("\n--- Keyboard ---")
        print(self.keyboard)

        # Mouse
        print("\n--- Mouse ---")
        print(self.mouse)
