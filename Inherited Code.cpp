
class BadLengthException : public exception {
private:
    int len=0;
public:
    BadLengthException(int length)
    {
        len=length;
    }

    virtual const int what()
    {
        return len;
    }
};

