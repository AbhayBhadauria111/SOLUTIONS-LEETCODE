class ParkingSystem {
    int big,medium,small;
public:
    ParkingSystem(int big, int medium, int small):big(big),medium(medium),small(small) {
        
    }
    
    bool addCar(int carType) {
        if(carType==1){return (big>0)?  big--: 0;}
        if(carType==2){return (medium>0)? medium--:0;}
        return(small>0)?small--: 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */