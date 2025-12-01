class StudentSubwayRecord:public SubwayRecord{
    public:
    StudentSubwayRecord(int distance, int duration):SubwayRecord(distance,duration){
        
    }
    virtual int fare(){
        if(duration>180||distance>50) return 5;
        else if(distance>20) return 4;
        return 2;
    }
};
class RegularSubwayRecord:public SubwayRecord{
    public:
    RegularSubwayRecord(int distance, int duration):SubwayRecord(distance,duration){
        
    }
    virtual int fare(){
        if(duration>180||distance>50) return 10;
        else if(distance>20) return 8;
        return 4;
    }
};