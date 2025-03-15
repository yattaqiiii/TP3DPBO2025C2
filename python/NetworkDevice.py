class NetworkDevice() :
    def __init__(self, networkProtocol, speedMbps):
        
        self.__networkProtocol = networkProtocol
        self.__speedMbps = speedMbps
        
    def get_networkProtocol(self):
        return self.__networkProtocol
    def get_speedMbps(self):
        return self.__speedMbps
    
    # Setter methods
    def set_networkProtocol(self, networkProtocol):
        self.__networkProtocol = networkProtocol
    def set_speedMbps(self, speedMbps):
        self.__speedMbps = speedMbps