from Komponen import Komponen
class PowerSupply(Komponen) :
    def __init__(self, wattage, certification, modular, merk, nama):
        super().__init__(merk, nama)
        
        self.__wattage = wattage
        self.__certification = certification
        self.__modular = modular
        
    def get_wattage(self):
        return self.__wattage
    def get_certification(self):
        return self.__certification
    def get_modular(self):
        return self.__modular
    
    # Setter methods
    def set_wattage(self, wattage):
        self.__wattage = wattage
    def set_certification(self, certification):
        self.__certification = certification
    def set_modular(self, modular):
        self.__certification = modular
        