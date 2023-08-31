#include <NTL/c_RR.h>


NTL_START_IMPL

ostream& operator<<(ostream& os, const c_RR& a){
    os<<"("<<a.real;
    if(a.imag<0){
        os<<" - ";
    }else{
        os<<" + ";
    }
    os<<abs(a.imag)<<"j)";
    return os;
}

long IsZero(const c_RR &a)
{
    if (a.real == 0 && a.imag == 0)
        return 1;
    return 0; 
}

long IsOne(const c_RR &a)
{
    if (a.real == 1 && a.imag == 0)
        return 1;
    return 0;
    
}

void conj(c_RR &z, const c_RR &a)
{
    z.real = a.real;
    z.imag = -a.imag;
}


void negate(c_RR &z, const c_RR &a)
{
    z.real = -a.real;
    z.imag = -a.imag;
}




void add(c_RR &z, const c_RR &a, const c_RR &b)
{
    z.real = a.real + b.real;
    z.imag = a.imag + b.imag;
}

void add(c_RR &z, const c_RR &a, RR b)
{
    z.real = a.real + b;
    z.imag = a.imag;

}

void add(c_RR &z, const c_RR &a, double b)
{
    z.real = a.real+b;
    z.imag = a.imag;
}

void sub(c_RR &z, const c_RR &a, const c_RR &b)
{
    z.real = a.real - b.real;
    z.imag = a.imag - b.imag;
}


void sub(c_RR &z, const c_RR &a, RR b)
{
    z.real = a.real-b;
    z.imag = a.imag;
}

void sub(c_RR &z, const c_RR &a, double b)
{
    z.real = a.real-b;
    z.imag = a.imag;
}

void mul(c_RR &z, const c_RR &a, const c_RR &b)
{
    c_RR temp = a;
    z.real = temp.real*b.real - temp.imag*b.imag;
    z.imag = temp.real*b.imag + temp.imag*b.real;
}

void mul(c_RR &z, const c_RR &a, RR b)
{
    z.real = a.real*b;
    z.imag = a.imag*b;
}

void mul(c_RR &z, const c_RR &a, double b)
{
    z.real = a.real*b;
    z.imag = a.imag*b;
}


void div(c_RR &z, const c_RR &a, double b)
{
    z.real = a.real/b;
    z.imag = a.imag/b;
}


void div(c_RR &z, const c_RR &a, RR b)
{
    z.real = a.real/b;
    z.imag = a.imag/b;
}


void div(c_RR &z, const c_RR &a, const c_RR &b)
{
    c_RR a_temp =a;
    z.real = (a_temp.real*b.real + a_temp.imag*b.imag)/(b.real*b.real + b.imag*b.imag);
    z.imag = (a_temp.imag*b.real - a_temp.real*b.imag)/(b.real*b.real + b.imag*b.imag);
}

void inv(c_RR &z, const c_RR &a)
{
    c_RR temp = a;
    z.real = temp.real;
    z.imag = -temp.imag;
    div(z,z,temp.real * temp.real + temp.imag * temp.imag);
}

void power(c_RR &z, const c_RR &a, long e)
{

    if(e==0){
        z.real = 1;
        z.imag = 0;
        return ;
    }
    if(e==1){
        z = a;
        return ;
    }
    else{
        c_RR temp(1.0);
        c_RR a_temp = a;
        while (e>0)
        {
            if(e%2==1){
                mul(temp,temp,a_temp);
            }
            // a_temp*=a_temp;
            mul(a_temp,a_temp,c_RR(a_temp));
            e/=2;
        }
        z = temp;
    }
}

void clear(c_RR &a)
{
    clear(a.real);clear(a.imag);
}

void random(c_RR &a, double start, double end)
{
    a.real = random_RR()*RR(end-start)+RR(start);
    a.imag = random_RR()*RR(end-start)+RR(start);
}

void swap(c_RR &a, c_RR &b){
    swap(a.real,b.real);
    swap(a.imag,b.imag);
}

void abs(RR &a, const c_RR &b)
{
    a = sqrt(b.real*b.real + b.imag*b.imag);
}

void sqrt(c_RR &z, const c_RR &a)
{
    RR r = abs(a);
    RR theta = conv<RR>(atan2(to_double(a.real),to_double(a.real)));
    RR rr = sqrt(r);
    RR rt = rr/2;
    z.real = rr * cos(theta);
    z.imag = rt * sin(theta);
}

void RoundPrec(c_RR &z, const c_RR &a, long prec)
{
    if(&z != &a)
        z=a;
    RoundPrec(z.real,z.real,prec);
    RoundPrec(z.imag,z.imag,prec);

}

void ConvPrec(c_RR &z, const c_RR &a, long prec)
{
    if(&z != &a)
        z=a;
    ConvPrec(z.real,z.real,prec);
    ConvPrec(z.imag,z.imag,prec);
}

void RootOfUnit(c_RR &z, int N)
{
    RR PI(3.141592653589);
    RR angel(PI/N);
    clear(z);
    z.real = cos(angel);
    z.imag = sin(angel);
}

NTL_END_IMPL

