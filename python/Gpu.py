from Komponen import Komponen
class Gpu(Komponen) :
    def __init__(self, vramGB, architectureType, supportRayTracing, merk, nama):
        super().__init__(merk, nama)
        
        self.__vramGB = vramGB
        self.__architectureType = architectureType
        self.__supportRayTracing = supportRayTracing
        
    def get_vramGB(self):
        return self.__vramGB
    def get_architectureType(self):
        return self.__architectureType
    def get_supportRayTracing(self):
        return self.__supportRayTracing
    
    # Setter methods
    def set_vramGB(self, vramGB):
        self.__vramGB = vramGB
    def set_architectureType(self, architectureType):
        self.__architectureType = architectureType
    def set_suppoerRayTracing(self, suppoerRayTracing):
        self.__suppoerRayTracing = suppoerRayTracing
        