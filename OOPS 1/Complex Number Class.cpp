class ComplexNumbers {
    // Complete this class
    int r,i;
    public:
    ComplexNumbers(int r,int i){
        this->r=r;
        this->i=i;
    }
    void plus(ComplexNumbers c2){
        r=r+c2.r;
        i=i+c2.i;
    }
    void multiply(ComplexNumbers c3){
        int n=(r*c3.r)+(-1)*(i*c3.i);
        int m=(r*c3.i)+(c3.r*i);
        i=m;
        r=n;
    }
    void print(){
        if(i<0){
        cout<<r<<" - i"<<(-1)*(i);
        }
        else{
            cout<<r<<" + i"<<i;
        }
    }
    
};
