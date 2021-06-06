
class Box{
private:
    int l, b, h; 
public:
    Box(){
        l = 0 ; 
        b = 0 ; 
        h = 0 ; 
    }
    Box(int length, int breadth, int height){
        l = length ; 
        b = breadth ; 
        h = height ; 
    }
    Box(const Box& B){
        l = B.l ; 
        b = B.b ; 
        h = B.h ; 
    }
    int getLength(){
        return l ;
    }
    int getBreadth(){
        return b ;
    }
    int getHeight(){
        return h ;
    }
    long long CalculateVolume(){
        return (long long)l*h*b ;
    }
    bool operator<(const Box& B){
        return (l<B.l || (b<B.b && l == B.l) || (h<B.h && l == B.l && b == B.b)) ; 
    }
};
ostream& operator<<(ostream& out, Box B)
{
    int l=B.getLength();
    int b=B.getBreadth();
    int h=B.getHeight();
    return out<<l<<' '<<b<<' '<<h;
}

