class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        return [273.15+celsius,celsius*1.80+32.00]
        