from Komponen import Komponen
from NetworkDevice import NetworkDevice
class NetworkAdapter(Komponen, NetworkDevice) :
    def __init__(self, isWifi, isBluetooth, macAddress, merk, nama, networkProtocol, speedMbps):
        Komponen.__init__(self, merk, nama)
        NetworkDevice.__init__(self, networkProtocol, speedMbps)
        
        self.__isWifi = isWifi
        self.__isBluetooth = isBluetooth
        self.__macAddress = macAddress
        
    def get_isWifi(self):
        return self.__isWifi
    def get_isBluetooth(self):
        return self.__isBluetooth
    def get_macAddress(self):
        return self.__macAddress
    
    # Setter methods
    def set_isWifi(self, isWifi):
        self.__isWifi = isWifi
    def set_isBluetooth(self, isBluetooth):
        self.__isBluetooth = isBluetooth
    def set_macAddress(self, macAddress):
        self.__isBluetooth = macAddress
        