class ParkingSystem {
public:
    vector<int> count;
    ParkingSystem(int big, int medium, int small) {
        count = {big, medium, small};
    }

    bool addCar(int carType) {
        // return count[carType - 1]-- > 0;
        if(carType == 1)
        {
            if(count[0] > 0)
            {
                count[0]--;
                return true;
            }
            else
                return false;
        }
        if(carType == 2)
        {
            if(count[1] > 0)
            {
                count[1]--;
                return true;
            }
            else
                return false;
        }
        if(carType == 3)
        {
            if(count[2] > 0)
            {
                count[2]--;
                return true;
            }
            else
                return false;
        }
        
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */