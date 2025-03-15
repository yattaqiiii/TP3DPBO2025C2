from Komponen import Komponen
class Motherboard(Komponen) :
    def __init__(self, chipset, formFactor, maxRamSlots, merk, nama):
        super().__init__(merk, nama)
        
        self.__chipset = chipset
        self.__formFactor = formFactor
        self.__maxRamSlots = maxRamSlots
        
    def get_chipset(self):
        return self.__chipset
    def get_formFactor(self):
        return self.__formFactor
    def get_maxRamSlots(self):
        return self.__maxRamSlots
    
    # Setter methods
    def set_chipset(self, chipset):
        self.__chipset = chipset
    def set_formFactor(self, formFactor):
        self.__formFactor = formFactor
    def set_maxRamSlots(self, maxRamSlots):
        self.__formFactor = maxRamSlots
        