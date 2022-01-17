class ParkingSystem {
private:
int m_big;
int m_medium;
int m_small;
public:
    ParkingSystem(int big, int medium, int small): m_big(big),  m_medium(medium), m_small(small) {
        
    }
    
    bool addCar(int carType) {
        bool answ = false;
        
        switch(carType)
        {
            case 1:
                {
                   answ = ( m_big > 0 )? true:  false;
                    --m_big;
                }
                break;
            case 2:
                {
                    answ = ( m_medium > 0 )? true:  false;
                    --m_medium;
                } 
                break;
            case 3: 
                {
                   answ = ( m_small > 0 )? true:  false;
                    --m_small;
                }
                break;
            default:
                {
                    cout << "Something gone wrong " << errno;
                }
        }
        return answ;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */