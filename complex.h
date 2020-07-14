class complex
{
private:
    float image;
    float real;
public:
    void print();
    complex();
    complex(float r,float i)
    {
        real = r;
        image = i;
    }
    virtual ~complex();
    friend complex operator + (complex a,complex b);
    friend complex operator - (complex a,complex b);
    friend complex operator * (complex a,complex b);
    friend complex operator / (complex a,complex b);
};

