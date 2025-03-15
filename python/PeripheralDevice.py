class PeripheralDevice :
    def __init__(self, interfaceType, isWireless):
        
        self.__interfaceType = interfaceType
        self.__isWireless = isWireless
        
    def get_interfaceType(self):
        return self.__interfaceType
    def get_isWireless(self):
        return self.__isWireless
    
    # Setter methods
    def set_interfaceType(self, interfaceType):
        self.__interfaceType = interfaceType
    def set_isWireless(self, isWireless):
        self.__isWireless = isWireless