from Komponen import Komponen
from PeripheralDevice import PeripheralDevice
class Mouse(Komponen, PeripheralDevice) :
    def __init__(self, dpi, bottonCount, refreshRate, merk, nama, interfaceType, isWireless):
        Komponen.__init__(self, merk, nama)
        PeripheralDevice.__init__(self, interfaceType, isWireless)
        
        self.__dpi = dpi
        self.__bottonCount = bottonCount
        self.__refreshRate = refreshRate
        
    def get_dpi(self):
        return self.__dpi
    def get_bottonCount(self):
        return self.__bottonCount
    def get_refreshRate(self):
        return self.__refreshRate
    
    # Setter methods
    def set_dpi(self, dpi):
        self.__dpi = dpi
    def set_bottonCount(self, bottonCount):
        self.__bottonCount = bottonCount
    def set_refreshRate(self, refreshRate):
        self.__bottonCount = refreshRate
        