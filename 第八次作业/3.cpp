class Pig{
    public:
    Pig(){
        puts("Pig 申请了空间...");
    }
    virtual ~Pig(){
        puts("Pig 释放了空间...");
    }
    virtual void climb(){
        puts("我只是个平凡的猪猪。");
    }
};
class MagicPig:public Pig{
    public:
    MagicPig(){
        puts("MagicPig 申请了空间...");
    }
    virtual ~MagicPig(){
        puts("MagicPig 释放了空间...");
    }
    virtual void climb(){
        puts("我能上树了耶！");
    }
};