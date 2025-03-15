from Komponen import Komponen
from PeripheralDevice import PeripheralDevice
class Keyboard(Komponen, PeripheralDevice) :
    def __init__(self, mechanical, layoutType, hasBackLight, merk, nama, interfaceType, isWireless):
        Komponen.__init__(self, merk, nama)
        PeripheralDevice.__init__(self, interfaceType, isWireless)
        
        self.__mechanical = mechanical
        self.__layoutType = layoutType
        self.__hasBackLight = hasBackLight
        
    def get_mechanical(self):
        return self.__mechanical
    def get_layoutType(self):
        return self.__layoutType
    def get_hasBackLight(self):
        return self.__hasBackLight
    
    # Setter methods
    def set_mechanical(self, mechanical):
        self.__mechanical = mechanical
    def set_layoutType(self, layoutType):
        self.__layoutType = layoutType
    def set_hasBackLight(self, hasBackLight):
        self.__hasBackLight = hasBackLight
        