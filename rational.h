class rational
{
private:
    void optimization();
    int denominator;
    int numerator;
public:
    void print();
    rational(int x=0,int y=0);
    virtual ~rational();
    rational operator + (rational& other);
    rational operator - (rational& other);
    rational operator * (rational& other);
    rational operator / (rational& other);
    double real(rational x);	
};


