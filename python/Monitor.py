from Komponen import Komponen
from PeripheralDevice import PeripheralDevice
class Monitor(Komponen, PeripheralDevice) :
    def __init__(self, sizeInch, resolution, refreshRate, merk, nama, interfaceType, isWireless):
        Komponen.__init__(self, merk, nama)
        PeripheralDevice.__init__(self, interfaceType, isWireless)
        
        self.__sizeInch = sizeInch
        self.__resolution = resolution
        self.__refreshRate = refreshRate
        
    def get_sizeInch(self):
        return self.__sizeInch
    def get_resolution(self):
        return self.__resolution
    def get_refreshRate(self):
        return self.__refreshRate
    
    # Setter methods
    def set_sizeInch(self, sizeInch):
        self.__sizeInch = sizeInch
    def set_resolution(self, resolution):
        self.__resolution = resolution
    def set_refreshRate(self, refreshRate):
        self.__refreshRate = refreshRate
        