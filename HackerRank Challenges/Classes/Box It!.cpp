//  github.com/DaniAngelov

class Box
{
    private:
    int l;
    int h;
    int b;

    public:
    
    Box()
    {
        this->l =0;
        this->b = 0;
        this->h = 0;
    }
    Box(int l,int b,int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    Box(Box& bo)
    {
        this->l = bo.l;
        this->h = bo.h;
        this->b = bo.b;
    }

    int getLength()
    {
        return this->l;
    }
    int getBreadth()
    {
        return this->b;
    }
    int getHeight()
    {
        return this->h;
    }

    long long CalculateVolume()
    {
        return this->l * (long long)(this->b) * this->h;
    }

    bool operator<(Box& bo)
    {
        if(this->l < bo.l)
       return true;
       else if(this->b < bo.b && this->l == bo.l)
       {
           return true;
       }
       else if(this->h < bo.h && this->b == bo.b && this->l == bo.l)
       return true;

        return false;
    }

   friend ostream& operator<<(ostream& out,const Box& B)
    {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};


