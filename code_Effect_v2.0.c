#include <REGX52.H>
#include<stdlib.h>
unsigned int i,j,k,n;

sbit 	d1 = P1^0;
sbit 	d2 = P1^1;
sbit	d3 = P1^2;
sbit	d4 = P1^3;
sbit	d5 = P1^4;
sbit	d6 = P1^5;
sbit	d7 = P1^6;
sbit	d8 = P1^7;
sbit	d9 = P3^0;
sbit	d10 = P3^1;
sbit	d11 = P3^2;
sbit	d12 = P3^3;
sbit	d13 = P3^4;
sbit	d14 = P3^5;
sbit	d15 = P3^6;
sbit	d16 = P3^7;
sbit	d17 = P2^0;
sbit	d18 = P2^1;
sbit	d19 = P2^2;
sbit	d20 = P2^3;
sbit	d21 = P2^4;
sbit	d22 = P2^5;
sbit	d23 = P2^6;
sbit	d24	= P2^7;
sbit 	led = P0^6;
sbit 	d25=P0^6;
sbit	c1 = P0^0;
sbit	c2 = P0^1;
sbit	c3 = P0^2;
sbit	c4 = P0^3;
sbit	c5 = P0^4;
//===========================================================
void delay(unsigned int time)
{
    while(time--)
    {
        unsigned char j = 125;
        while(j--);
    };
}
//===========================================================
void delay0 (unsigned int t)
{
    for(i=0; i<=t; i++);
}
//===========================================================

//HIEU UNG CHAY VONG TRON
void vongtron(unsigned char ms,unsigned char n)
{
    P1=P2=P3=0xff;
    led=1;
    for(i=0; i<n; i++)
    {
        c1=0;
        d21=0;
        delay(ms);
        d20=0;
        delay(ms);
        d11=0;
        delay(ms);
        d10=0;
        delay(ms);
        d1=0;
        delay(ms);
        d2=0;
        delay(ms);
        d3=0;
        delay(ms);
        d4=0;
        delay(ms);
        d5=0;
        delay(ms);
        d6=0;
        delay(ms);
        d15=0;
        delay(ms);
        d16=0;
        delay(ms);
        led=0;
        delay(ms);
        d24=0;
        delay(ms);
        d23=0;
        delay(ms);
        d22=0;
        delay(ms);
        d19=0;
        delay(ms);
        d12=0;
        delay(ms);
        d9=0;
        delay(ms);
        d8=0;
        delay(ms);
        d7=0;
        delay(ms);
        d14=0;
        delay(ms);
        d17=0;
        delay(ms);
        d18=0;
        delay(ms);
        d13=0;
        delay(ms);
    }

}
//===========================================================

//HIEU UNG LOP NGANG CHAY LEN _ XUONG
void nuocdang(unsigned char ms,unsigned char n)
{
    for(j=0; j<n; j++)
    {
        unsigned char M[9]= {0xBE,0xBD,0xBB,0xB7,0xAF,0xB7,0xBB,0xBD,0xBE };
        P1=0;
        P2=0;
        P3=0;
        for(i=0; i<9; i++)
        {
            P0=M[i];
            delay(ms);
        }
    }
}

//===========================================================
//HIEU UNG LOP NGANG CHAY LEN _ XUONG pro
void nuocdang1(unsigned char ms,unsigned char n)
{
    for(j=0; j<n; j++)
    {
        unsigned char M[10]= {0xBE,0xBc,0xB8,0xB0,0xA0,0xB0,0xB8,0xBc,0xBE,0xff };
        P1=0;
        P2=0;
        P3=0;
        for(i=0; i<10; i++)
        {
            P0=M[i];
            delay(ms);
        }
    }
}

//===========================================================

//HIEU UNG LOP DUNG DI CHUYEN
void pittong(unsigned char ms,unsigned char n)
{
    for(i=0; i<n; i++)
    {
        P0=0;
        P2=0x0F;
        P1=0XFF;
        P3=0XFF;
        delay(ms);
        P3=0x7F;
        P2=0xF0;
        P1=0XFF;
        led=1;
        delay(ms);
        P3=0x83;
        P1=0XFF;
        P2=0XFF;
        delay(ms);
        P1=0x1F;
        P3=0xFC;
        delay(ms);
        P1=0xE0;
        P2=0XFF;
        P3=0XFF;
        delay(ms);
        P1=0x1F;
        P3=0xFC;
        delay(ms);
        P3=0x83;
        P1=0XFF;
        P2=0XFF;
        delay(ms);
        P3=0x7F;
        P2=0xF0;
        P1=0XFF;
        delay(ms);
        P2=0x0F;
        P1=0XFF;
        P3=0XFF;
        led=0;
        delay(ms);
    }
}

//===========================================================
//HIEU UNG NAM MOC LEN
void nammoc(unsigned char ms,unsigned char n)
{
    for(i=0; i<n; i++)
    {
        P0=0xFE;
        P3=0xEF;
        P2=0XFF;
        P1=0XFF;
        delay(ms);
        P0=0xFD;
        P3=0xC7;
        P2=0XFF;
        P1=0XFF;
        delay(ms);
        P0=0xFB;
        P3=0xC7;
        P1=0x7F;
        P2=0xFD;
        delay(ms);
        P0=0xF7;
        P3=0xC6;
        P1=0x3F;
        P2=0xF8;
        delay(ms);
        P0=0xAF;
        P1=0;
        P2=0;
        P3=0;
        delay(ms);

        P0=0xAF;
        P1=0;
        P2=0;
        P3=0;
        delay(ms);
        P0=0xAF;
        P1=0xC0;
        P3=0x39;
        P2=0x07;
        delay(ms);
        P0=0xB7;
        P1=0xC0;
        P3=0x39;
        P2=0x07;
        delay(ms);
        P0=0xBB;
        P1=0xC0;
        P3=0x39;
        P2=0x07;
        delay(ms);
        P0=0xBD;
        P1=0xC0;
        P3=0x39;
        P2=0x07;
        delay(ms);
        P0=0xBE;
        P1=0xC0;
        P3=0x39;
        P2=0x07;
        delay(ms);
    }
}


//===========================================================
/*
//CHOP TAT KHOI
void choptat(unsigned char ms,unsigned char n)
{
for(i=0;i<n;i++)
{
P0=0;P1=0;P2=0;P3=0;delay(ms);
P0=P1=P2=P3=0xff;delay(ms);
}
}
*/
//===========================================================
/*
void socxien(unsigned char ms,unsigned char n)
{
for(i=0;i<n;i++)
{
P0=0xE0;P1=0xEF;P2=0XFF;P3=0XFF;delay(ms);//X1
P0=0XE0;P1=0xD7;P3=0XFF;P2=0XFF;delay(ms);//X2
P0=0XE0;P1=0xBB;P3=0xBF;P2=0XFF;delay(ms);//X3
P0=0XE0;P1=0x7D;P3=0x5F;P2=0XFF;delay(ms);//X4
P0=0;P1=0xFE;P3=0xEE;P2=0xFE;delay(ms);//X5
P0=0XE0;P1=0XFF;P3=0xF5;P2=0x7D;delay(ms);//X6
P0=0XE0;P1=0XFF;P3=0xFB;P2=0xBB;delay(ms);//X7
P0=0XE0;P1=0XFF;P3=0XFF;P2=0xD7;delay(ms);//X8
P0=0XE0;P1=0XFF;P3=0XFF;P2=0xEF;delay(ms);//X9
}
}
*/

//===========================================================
/*
//hieu ung dem nguoc
void demnguoc(unsigned int ms)
{
//so 9

for(n=0;n<=ms;n++)
{
P0=0xfe;P1=P3=0xff;P2=0x1f;led=0;delay(1);
P0=0xfd;P1=P3=0xff;P2=0xff;led=0;delay(1);
P0=0xfb;P1=P3=0xff;P2=0x1f;led=0;delay(1);
P0=0xf7;P1=P3=0xff;P2=0xdf;led=0;delay(1);
P0=0xef;P1=P3=0xff;P2=0x1f;led=0;delay(1);
}
//so 8
for(n=0;n<=ms;n++)
{
P0=0xfe;P1=P3=0xff;P2=0x1f;led=0;delay(1);
P0=0xfd;P1=P3=0xff;P2=0xdf;led=0;delay(1);
P0=0xfb;P1=P3=0xff;P2=0x1f;led=0;delay(1);
P0=0xf7;P1=P3=0xff;P2=0xdf;led=0;delay(1);
P0=0xef;P1=P3=0xff;P2=0x1f;led=0;delay(1);
}
//so 7
for(n=0;n<=ms;n++)
{
P0=0xfe;P1=P3=0xff;P2=0xdf;led=1;delay(1);
P0=0xfd;P1=P3=0xff;P2=0xbf;led=1;delay(1);
P0=0xfb;P1=P3=0xff;P2=0x7f;led=1;delay(1);
P0=0xf7;P1=P3=0xff;P2=0xff;led=0;delay(1);
P0=0xef;P1=P3=0xff;P2=0x0f;led=0;delay(1);
}

//so 6
for(n=0;n<=ms;n++)
{
P0=0xfe;P1=P3=0xff;P2=0x1f;led=0;delay(1);
P0=0xfd;P1=P3=0xff;P2=0xdf;led=0;delay(1);
P0=0xfb;P1=P3=0xff;P2=0x1f;led=0;delay(1);
P0=0xf7;P1=P3=0xff;P2=0xdf;led=1;delay(1);
P0=0xef;P1=P3=0xff;P2=0x1f;led=0;delay(1);
}
//so 5
for(n=0;n<=ms;n++)
{
P0=0xfe;P1=P3=0xff;P2=0x1f;led=0;delay(1);
P0=0xfd;P1=P3=0xff;P2=0xff;led=0;delay(1);
P0=0xfb;P1=P3=0xff;P2=0x1f;led=0;delay(1);
P0=0xf7;P1=P3=0xff;P2=0xdf;led=1;delay(1);
P0=0xef;P1=P3=0xff;P2=0x1f;led=0;delay(1);
}
//so 4
for(n=0;n<=ms;n++)
{
P0=0xfe;P1=P3=0xff;P2=0xff;led=0;delay(1);
P0=0xfd;P1=P3=0xff;P2=0xff;led=0;delay(1);
P0=0xfb;P1=P3=0xff;P2=0x1f;led=0;delay(1);
P0=0xf7;P1=P3=0xff;P2=0xdf;led=0;delay(1);
P0=0xef;P1=P3=0xff;P2=0xdf;led=0;delay(1);
}
//so 3
for(n=0;n<=ms;n++)
{
P0=0xfe;P1=P3=0xff;P2=0x1f;led=0;delay(1);
P0=0xfd;P1=P3=0xff;P2=0xff;led=0;delay(1);
P0=0xfb;P1=P3=0xff;P2=0x1f;led=0;delay(1);
P0=0xf7;P1=P3=0xff;P2=0xff;led=0;delay(1);
P0=0xef;P1=P3=0xff;P2=0x1f;led=0;delay(1);
}
//so 2
for(n=0;n<=ms;n++)
{
P0=0xfe;P1=P3=0xff;P2=0x1f;led=0;delay(1);
P0=0xfd;P1=P3=0xff;P2=0xbf;led=1;delay(1);
P0=0xfb;P1=P3=0xff;P2=0x7f;led=1;delay(1);
P0=0xf7;P1=P3=0xff;P2=0xdf;led=0;delay(1);
P0=0xef;P1=P3=0xff;P2=0x3f;led=1;delay(1);
}
//so 1
for(n=0;n<=ms;n++)
{
P0=0xfe;P1=P3=0xff;P2=0x1f;delay(1);
P0=0xfd;P1=P3=0xff;P2=0xbf;delay(1);
P0=0xfb;P1=P3=0xff;P2=0xbf;delay(1);
P0=0xf7;P1=P3=0xff;P2=0x9f;delay(1);
P0=0xef;P1=P3=0xff;P2=0xbf;delay(1);
}
//so 0
for(n=0;n<=ms;n++)
{
P0=0xfe;P1=P3=0xff;P2=0x1f;led=0;delay(1);
P0=0xfd;P1=P3=0xff;P2=0xdf;led=0;delay(1);
P0=0xfb;P1=P3=0xff;P2=0xdf;led=0;delay(1);
P0=0xf7;P1=P3=0xff;P2=0xdf;led=0;delay(1);
P0=0xef;P1=P3=0xff;P2=0x1f;led=0;delay(1);
}
}

*/
void chu_M(unsigned char ms)
{
//============== ADD THEM CHU MR.TEE===============================
//chu M
    for(n=0; n<=ms; n++)
    {
        P0=0xbe;
        P1=0xff;
        P3=0x7f;
        P2=0xe7;
        delay(1);
        P0=0xbd;
        delay(1);
        P0=0xbb;
        P2=0xa5;
        delay(1);
        P0=0xb7;
        P2=0x42;
        delay(1);
        P0=0xaf;
        P2=0xe7;
        delay(1);
    }
    P0=P1=P2=P3=0xff;
}
//=====================================

void chu_R(unsigned char ms)
{
//chu R
    for(n=0; n<=ms; n++)
    {
        P0=0xbe;
        P1=0xff;
        P3=0x7f;
        P2=0xdb;
        delay(1);
        P0=0xfd;
        P3=0xff;
        P2=0x5a;
        delay(1);
        P0=0xfb;
        P2=0x18;
        delay(1);
        P0=0xb7;
        P3=0x7f;
        P2=0xdb;
        delay(1);
        P0=0xef;
        P3=0xff;
        P2=0x18;
        delay(1);
    }
    P0=P1=P2=P3=0xff;
}

//=====================================

void chu_T(unsigned char ms)
{
//chu T
    for(n=0; n<=ms; n++)
    {
        P0=0xfe;
        P1=0xff;
        P3=0xff;
        P2=0xbd;
        delay(1);
        P0=0xfd;
        delay(1);
        P0=0xfb;
        delay(1);
        P0=0xf7;
        delay(1);
        P0=0xaf;
        P3=0x7f;
        P2=0x00;
        delay(1);
    }
    P0=P1=P2=P3=0xff;
}
//=======================================

void chu_E(unsigned char ms)
{
//chu E
    for(n=0; n<=ms; n++)
    {
        P0=0xbe;
        P1=0xff;
        P3=0x7f;
        P2=0x00;
        delay(1);
        P0=0xfd;
        P3=0xff;
        P2=0xef;
        delay(1);
        P0=0xfb;
        P2=0x00;
        delay(1);
        P0=0xf7;
        P2=0xe7;
        delay(1);
        P0=0xaf;
        P3=0x7f;
        P2=0x00;
        delay(1);
    }
    P0=P1=P2=P3=0xff;
}


//================= ADD XONG CHU MR.TEE============================


void locxoay(unsigned char ms,unsigned char m)
{
    for(i=0; i<m; i++)
    {
//L1
        for(n=0; n<=ms; n++)
        {
            P0=0xbe;
            P1=0xfe;
            P3=0xff;
            P2=0xff;
            delay(1);
            P0=0xfd;
            P1=0xfd;
            P2=0x7f;
            delay(1);
            P0=0xfb;
            P1=0xfb;
            P2=0xbf;
            delay(1);
            P0=0xf7;
            P1=0xf7;
            P2=0xdf;
            delay(1);
            P0=0xef;
            P1=0xef;
            P2=0xef;
            delay(1);
        }
//L2
        for(n=0; n<=ms; n++)
        {
            P0=0xfe;
            P1=0xfd;
            P3=0xff;
            P2=0x7f;
            delay(1);
            P0=0xfd;
            P1=0xfb;
            P2=0xbf;
            delay(1);
            P0=0xfb;
            P1=0xf7;
            P2=0xdf;
            delay(1);
            P0=0xf7;
            P1=0xef;
            P2=0xef;
            delay(1);
            P0=0xef;
            P1=0xdf;
            P2=0xf7;
            delay(1);
        }
//L3
        for(n=0; n<=ms; n++)
        {
            P0=0xfe;
            P1=0xfb;
            P3=0xff;
            P2=0xbf;
            delay(1);
            P0=0xfd;
            P1=0xf7;
            P2=0xdf;
            delay(1);
            P0=0xfb;
            P1=0xef;
            P2=0xef;
            delay(1);
            P0=0xf7;
            P1=0xdf;
            P2=0xf7;
            delay(1);
            P0=0xef;
            P1=0xff;
            P3=0xbb;
            P2=0xff;
            delay(1);
        }
//L4
        for(n=0; n<=ms; n++)
        {
            P0=0xfe;
            P1=0xf7;
            P3=0xff;
            P2=0xdf;
            delay(1);
            P0=0xfd;
            P1=0xef;
            P2=0xef;
            delay(1);
            P0=0xfb;
            P1=0xdf;
            P2=0xf7;
            delay(1);
            P0=0xf7;
            P1=0xff;
            P3=0xbb;
            P2=0xff;
            delay(1);
            P0=0xef;
            P1=0xff;
            P3=0x7d;
            P2=0xff;
            delay(1);
        }
//L5
        for(n=0; n<=ms; n++)
        {
            P0=0xfe;
            P1=0xef;
            P3=0xff;
            P2=0xef;
            delay(1);
            P0=0xfd;
            P1=0xdf;
            P2=0xf7;
            delay(1);
            P0=0xfb;
            P1=0xff;
            P3=0xbb;
            P2=0xff;
            delay(1);
            P0=0xf7;
            P3=0x7d;
            delay(1);
            P0=0xaf;
            P1=0xfe;
            P3=0xff;
            delay(1);
        }
//L6
        for(n=0; n<=ms; n++)
        {
            P0=0xfe;
            P1=0xdf;
            P3=0xff;
            P2=0xf7;
            delay(1);
            P0=0xfd;
            P1=0xff;
            P3=0xbb;
            P2=0xff;
            delay(1);
            P0=0xfb;
            P3=0x7d;
            delay(1);
            P0=0xb7;
            P1=0xfe;
            P3=0xff;
            delay(1);
            P0=0xef;
            P1=0xfd;
            P2=0x7f;
            delay(1);
        }
//L7
        for(n=0; n<=ms; n++)
        {
            P0=0xfe;
            P1=0xff;
            P3=0xbb;
            P2=0xff;
            delay(1);
            P0=0xfd;
            P3=0x7d;
            delay(1);
            P0=0xbb;
            P1=0xfe;
            P3=0xff;
            delay(1);
            P0=0xf7;
            P1=0xfd;
            P2=0x7f;
            delay(1);
            P0=0xef;
            P1=0xfb;
            P3=0xff;
            P2=0xbf;
            delay(1);
        }
//L8
        for(n=0; n<=ms; n++)
        {
            P0=0xfe;
            P1=0xff;
            P3=0x7d;
            P2=0xff;
            delay(1);
            P0=0xbd;
            P1=0xfe;
            P3=0xff;
            delay(1);
            P0=0xfb;
            P1=0xfd;
            P2=0x7f;
            delay(1);
            P0=0xf7;
            P1=0xfb;
            P2=0xbf;
            delay(1);
            P0=0xef;
            P1=0xf7;
            P2=0xdf;
            delay(1);
        }
    }
}

//hieu ung quet toan bo khung

void quetkhung(unsigned char ms)
{
//L1
    for(n=0; n<=(ms+50); n++)
    {
        P0=0xbe;
        P1=0xc0;
        P3=0x39;
        P2=0x07;
        delay(1);
    }
//L2
    for(n=0; n<=(ms+40); n++)
    {
        P0=0xbe;
        P1=0xc0;
        P3=0x39;
        P2=0x07;
        delay(1);
        P0=0xbd;
        P1=0xee;
        P3=0xff;
        P2=0xef;
        delay(1);
    }
//L3
    for(n=0; n<=(ms+30); n++)
    {
        P0=0xbe;
        P1=0xc0;
        P3=0x39;
        P2=0x07;
        delay(1);
        P0=0xbd;
        P1=0xee;
        P3=0xff;
        P2=0xef;
        delay(1);
        P0=0xbb;
        P2=0xef;
        delay(1);
    }
//L4
    for(n=0; n<=(ms+20); n++)
    {
        P0=0xbe;
        P1=0xc0;
        P3=0x39;
        P2=0x07;
        delay(1);
        P0=0xbd;
        P1=0xee;
        P3=0xff;
        P2=0xef;
        delay(1);
        P0=0xbb;
        P3=0xff;
        P2=0xef;
        delay(1);
        P0=0xb7;
        P1=0xee;
        P3=0xff;
        P2=0xef;
        delay(1);
    }
//L5
    for(n=0; n<=ms; n++)
    {
        P0=0xbe;
        P1=0xc0;
        P3=0x39;
        P2=0x07;
        delay(1);
        P0=0xfd;
        P1=0xee;
        P3=0xff;
        P2=0xef;
        led=0;
        delay(1);
        P0=0xfb;
        led=0;
        delay(1);
        P0=0xf7;
        led=0;
        delay(1);
        P0=0xef;
        led=0;
        delay(1);
    }
//L6
    for(n=0; n<=ms; n++)
    {
        P0=0xfe;
        P1=0xc0;
        P3=0x39;
        P2=0x07;
        led=0;
        delay(1);
        P0=0xfd;
        P1=0xee;
        P3=0xff;
        P2=0xef;
        led=0;
        delay(1);
        P0=0xfb;
        led=0;
        delay(1);
        P0=0xf7;
        led=0;
        delay(1);
        P0=0xef;
        P1=0xc4;
        P3=0x7d;
        P2=0x47;
        led=0;
        delay(1);
    }
//L7
    for(n=0; n<=(ms-50); n++)
    {
        P0=0xfe;
        P1=0xc0;
        P3=0x39;
        P2=0x07;
        led=0;
        delay(1);
        P0=0xfd;
        P1=0xee;
        P3=0xff;
        P2=0xef;
        led=0;
        delay(1);
        P0=0xfb;
        led=0;
        delay(1);
        P0=0xf7;
        led=0;
        delay(1);
        P0=0xef;
        P1=0xc4;
        P3=0x7d;
        P2=0x47;
        led=0;
        delay(1);
    }
//L8
    for(n=0; n<=(ms+100); n++)
    {
        P0=0xfe;
        P1=0xc0;
        P3=0x39;
        P2=0x07;
        led=0;
        delay(1);
        P0=0xfd;
        P1=0xee;
        P3=0xff;
        P2=0xef;
        led=0;
        delay(1);
        P0=0xfb;
        led=0;
        delay(1);
        P0=0xf7;
        led=0;
        delay(1);
        P0=0xef;
        P1=0xc0;
        P3=0x39;
        P2=0x07;
        led=0;
        delay(1);
    }

    P0=P1=P2=P3=0xff;
    delay(2000);
    for(i=0; i<8; i++)
    {
        for(n=0; n<=ms; n++)
        {
            P0=0xfb;
            P3=0xef;
            delay(1);
        }
        for(n=0; n<=ms; n++)
        {
            P0=0xf5;
            P3=0xfe;
            P2=0xfa;
            P1=0xbf;
            delay(1);
        }
        for(n=0; n<=ms; n++)
        {
            P0=0xfe;
            P1=0xc0;
            P3=0x39;
            P2=0x07;
            led=0;
            delay(1);
            P0=0xfd;
            P1=0xee;
            P3=0xff;
            P2=0xef;
            led=0;
            delay(1);
            P0=0xfb;
            led=0;
            delay(1);
            P0=0xf7;
            led=0;
            delay(1);
            P0=0xef;
            P1=0xc0;
            P3=0x39;
            P2=0x07;
            led=0;
            delay(1);
        }
    }
}

//=================================================
/*
//guong nuoc
void guongnuoc1(unsigned char ms,unsigned char a)
{
for(i=0;i<a;i++)
{
//L1
for(n=0;n<=ms;n++)
{
P0=0xef;P1=0xe0;P3=0xff;P2=0xff;delay(1);
P0=0xf7;P1=0x1f;P3=0xfc;delay(1);
P0=0xfb;P1=0xff;P3=0x83;delay(1);
P0=0xfd;P3=0x7f;P2=0xf0;delay(1);
P0=0xfe;P3=0xff;P2=0x0f;led=0;delay(1);
}
//L2
for(n=0;n<=(5*ms);n++)
{
P0=0xfb;P1=0x00;P3=0x00;P2=0x00;led=0;delay(1);
}
//L3
for(n=0;n<=ms;n++)
{
P0=0xfe;P1=0xe0;P3=0xff;P2=0xff;delay(1);
P0=0xfd;P1=0x1f;P3=0xfc;delay(1);
P0=0xfb;P1=0xff;P3=0x83;delay(1);
P0=0xf7;P3=0x7f;P2=0xf0;delay(1);
P0=0xef;P3=0xff;P2=0x0f;led=0;delay(1);
}
//L4
for(n=0;n<=(ms*5);n++)
{
P0=0xe0;P1=0xff;P3=0x83;P2=0xff;delay(1);
}
}
}
*/
//============================================

//guong nuoc 2
void guongnuoc2(unsigned char ms,unsigned char a)
{
    for(i=0; i<a; i++)
    {
//L1
        for(n=0; n<=ms; n++)
        {
            P0=0xfe;
            P1=0xfe;
            P3=0xf9;
            P2=0xe7;
            delay(1);
            P0=0xfd;
            P1=0xfd;
            P3=0xf6;
            P2=0xdb;
            delay(1);
            P0=0xfb;
            P1=0x7b;
            P3=0xef;
            P2=0xbd;
            delay(1);
            P0=0xf7;
            P1=0xb7;
            P3=0xdf;
            P2=0x7e;
            delay(1);
            P0=0xef;
            P1=0xcf;
            P3=0x3f;
            P2=0xff;
            led=0;
            delay(1);
        }
//L2
        for(n=0; n<=(5*ms); n++)
        {
            P0=0xfb;
            P1=0x00;
            P3=0x00;
            P2=0x00;
            led=0;
            delay(1);
        }
//L3
        for(n=0; n<=ms; n++)
        {
            P0=0xef;
            P1=0xfe;
            P3=0xf9;
            P2=0xe7;
            delay(1);
            P0=0xf7;
            P1=0xfd;
            P3=0xf6;
            P2=0xdb;
            delay(1);
            P0=0xfb;
            P1=0x7b;
            P3=0xef;
            P2=0xbd;
            delay(1);
            P0=0xfd;
            P1=0xb7;
            P3=0xdf;
            P2=0x7e;
            delay(1);
            P0=0xfe;
            P1=0xcf;
            P3=0x3f;
            P2=0xff;
            led=0;
            delay(1);
        }
//L4
        for(n=0; n<=(5*ms); n++)
        {
            P0=0xe0;
            P1=0x7b;
            P3=0xef;
            P2=0xbd;
            delay(1);
        }
    }
}
void guongnuoc3(unsigned char ms,unsigned char n)
{
    P0=0x40;
    P1=P3=P2=0xff;
    d21=0;
    delay(1000);
    d18=0;
    delay(1000);
    d15=0;
    delay(1000);
    d15=1;
    d18=1;
    d13=0;
    d5=d19=d7=0;
    delay(1000);
    for(i=0; i<n; i++)
    {
        {
            P0=0x40;
            P1=0xAF;
            P3=0xEF;
            P2=0xEB;
            delay(ms);
            P0=0x40;
            P1=0x7B;
            P3=0xEF;
            P2=0xBD;
            delay(ms);
            P0=0 ;
            P1=0xFE;
            P3=0xEE;
            P2=0xFE;
            delay(ms);
            P0=0x40;
            P3=0x83;
            delay(ms);
        }
    }
}


//=================================================================
void lapdien(unsigned char ms,unsigned char n)
{
    for(i=0; i<n; i++)
    {
        P0=0xAF;
        P1=0;
        P2=0;
        P3=0;
        delay(ms);//TREN CUNG
        P0=0x40;
        P1=0xE0;
        P2=0XFF;
        P3=0XFF;
        delay(ms); //MAT1
        P1=0xFE;
        P3=0xF9;
        P2=0xE7;
        delay(ms);//MAT2
        P0=0;
        P2=0x0F;
        P1=0XFF;
        P3=0XFF;
        delay(ms); //MAT3
        P1=0xCF;
        P3=0x3F;
        P2=0XFF;
        delay(ms);//MAT4
        P0=0xBE;
        P1=0;
        P2=0;
        P3=0;
        delay(ms);//DUOI CUNG
        P0=0;
        P1=0xCF;
        P3=0x3F;
        P2=0XFF;
        delay(ms);//MAT4
        P2=0x0F;
        P1=0XFF;
        P3=0XFF;
        delay(ms); //MAT3
        P0=0x40;
        P1=0xFE;
        P3=0xF9;
        P2=0xE7;
        delay(ms);//MAT2
        P1=0xE0;
        P2=0XFF;
        P3=0XFF;
        delay(ms); //MAT1
    }
}

void songbien(unsigned char ms,unsigned char m)
{
    for(i=0; i<m; i++)
    {
//L1
        for(n=0; n<=ms; n++)
        {
            P0=0xfb;
            P1=0xfe;
            P3=0xf9;
            P2=0xe7;
            delay(1);
            P0=0xf7;
            P1=0xfd;
            P3=0xf6;
            P2=0xdb;
            delay(1);
            P0=0xef;
            P1=0x7b;
            P3=0xef;
            P2=0xbd;
            delay(1);
            P0=0xf7;
            P1=0xb7;
            P3=0xdf;
            P2=0x7e;
            delay(1);
            P0=0xfb;
            P1=0xcf;
            P3=0x3f;
            P2=0xff;
            led=0;
            delay(1);
        }
//L2
        for(n=0; n<=ms; n++)
        {
            P0=0xfd;
            P1=0xfe;
            P3=0xf9;
            P2=0xe7;
            delay(1);
            P0=0xfb;
            P1=0xfd;
            P3=0xf6;
            P2=0xdb;
            delay(1);
            P0=0xf7;
            P1=0x7b;
            P3=0xef;
            P2=0xbd;
            delay(1);
            P0=0xef;
            P1=0xb7;
            P3=0xdf;
            P2=0x7e;
            delay(1);
            P0=0xf7;
            P1=0xcf;
            P3=0x3f;
            P2=0xff;
            led=0;
            delay(1);
        }
//L3
        for(n=0; n<=ms; n++)
        {
            P0=0xfe;
            P1=0xfe;
            P3=0xf9;
            P2=0xe7;
            delay(1);
            P0=0xfd;
            P1=0xfd;
            P3=0xf6;
            P2=0xdb;
            delay(1);
            P0=0xfb;
            P1=0x7b;
            P3=0xef;
            P2=0xbd;
            delay(1);
            P0=0xf7;
            P1=0xb7;
            P3=0xdf;
            P2=0x7e;
            delay(1);
            P0=0xef;
            P1=0xcf;
            P3=0x3f;
            P2=0xff;
            led=0;
            delay(1);
        }
//L4
        for(n=0; n<=ms; n++)
        {
            P0=0xfd;
            P1=0xfe;
            P3=0xf9;
            P2=0xe7;
            delay(1);
            P0=0xfe;
            P1=0xfd;
            P3=0xf6;
            P2=0xdb;
            delay(1);
            P0=0xfd;
            P1=0x7b;
            P3=0xef;
            P2=0xbd;
            delay(1);
            P0=0xfb;
            P1=0xb7;
            P3=0xdf;
            P2=0x7e;
            delay(1);
            P0=0xf7;
            P1=0xcf;
            P3=0x3f;
            P2=0xff;
            led=0;
            delay(1);
        }
//L5
        for(n=0; n<=ms; n++)
        {
            P0=0xfb;
            P1=0xfe;
            P3=0xf9;
            P2=0xe7;
            delay(1);
            P0=0xfd;
            P1=0xfd;
            P3=0xf6;
            P2=0xdb;
            delay(1);
            P0=0xfe;
            P1=0x7b;
            P3=0xef;
            P2=0xbd;
            delay(1);
            P0=0xfd;
            P1=0xb7;
            P3=0xdf;
            P2=0x7e;
            delay(1);
            P0=0xfb;
            P1=0xcf;
            P3=0x3f;
            P2=0xff;
            led=0;
            delay(1);
        }
//L6
        for(n=0; n<=ms; n++)
        {
            P0=0xf7;
            P1=0xfe;
            P3=0xf9;
            P2=0xe7;
            delay(1);
            P0=0xfb;
            P1=0xfd;
            P3=0xf6;
            P2=0xdb;
            delay(1);
            P0=0xfd;
            P1=0x7b;
            P3=0xef;
            P2=0xbd;
            delay(1);
            P0=0xfe;
            P1=0xb7;
            P3=0xdf;
            P2=0x7e;
            delay(1);
            P0=0xfd;
            P1=0xcf;
            P3=0x3f;
            P2=0xff;
            led=0;
            delay(1);
        }
//L7
        for(n=0; n<=ms; n++)
        {
            P0=0xef;
            P1=0xfe;
            P3=0xf9;
            P2=0xe7;
            delay(1);
            P0=0xf7;
            P1=0xfd;
            P3=0xf6;
            P2=0xdb;
            delay(1);
            P0=0xfb;
            P1=0x7b;
            P3=0xef;
            P2=0xbd;
            delay(1);
            P0=0xfd;
            P1=0xb7;
            P3=0xdf;
            P2=0x7e;
            delay(1);
            P0=0xfe;
            P1=0xcf;
            P3=0x3f;
            P2=0xff;
            led=0;
            delay(1);
        }
//L8
        for(n=0; n<=ms; n++)
        {
            P0=0xf7;
            P1=0xfe;
            P3=0xf9;
            P2=0xe7;
            delay(1);
            P0=0xef;
            P1=0xfd;
            P3=0xf6;
            P2=0xdb;
            delay(1);
            P0=0xf7;
            P1=0x7b;
            P3=0xef;
            P2=0xbd;
            delay(1);
            P0=0xfb;
            P1=0xb7;
            P3=0xdf;
            P2=0x7e;
            delay(1);
            P0=0xfd;
            P1=0xcf;
            P3=0x3f;
            P2=0xff;
            led=0;
            delay(1);
        }
    }
}

//==========================================================

void thap(unsigned char ms,unsigned char m)
{
    for(i=0; i<m; i++)
    {
        for(n=0; n<=ms; n++)
        {
            P0=0xfe;
            P1=0xc0;
            P3=0x39;
            P2=0x07;
            led=0;
            delay(1);
            P0=0xfd;
            P1=0x3f;
            P3=0xd6;
            P2=0xf8;
            delay(1);
            P0=0xfb;
            P1=0xff;
            P3=0xef;
            P2=0xff;
            delay(1);
        }
        for(n=0; n<=ms; n++)
        {
            P0=0xfd;
            P1=0xc0;
            P3=0x39;
            P2=0x07;
            led=0;
            delay(1);
            P0=0xfb;
            P1=0x3f;
            P3=0xd6;
            P2=0xf8;
            delay(1);
            P0=0xf7;
            P1=0xff;
            P3=0xef;
            P2=0xff;
            delay(1);
        }
        for(n=0; n<=ms; n++)
        {
            P0=0xfb;
            P1=0xc0;
            P3=0x39;
            P2=0x07;
            led=0;
            delay(1);
            P0=0xf7;
            P1=0x3f;
            P3=0xd6;
            P2=0xf8;
            delay(1);
            P0=0xef;
            P1=0xff;
            P3=0xef;
            P2=0xff;
            delay(1);
        }
    }
}

//======================================================

void thap1(unsigned char ms,unsigned char m)
{
    for(i=0; i<m; i++)
    {
        for(n=0; n<=ms; n++)
        {
            P0=0xef;
            P1=0xc0;
            P3=0x39;
            P2=0x07;
            led=0;
            delay(1);
            P0=0xf7;
            P1=0x3f;
            P3=0xd6;
            P2=0xf8;
            delay(1);
            P0=0xfb;
            P1=0xff;
            P3=0xef;
            P2=0xff;
            delay(1);
        }
        for(n=0; n<=ms; n++)
        {
            P0=0xf7;
            P1=0xc0;
            P3=0x39;
            P2=0x07;
            led=0;
            delay(1);
            P0=0xfb;
            P1=0x3f;
            P3=0xd6;
            P2=0xf8;
            delay(1);
            P0=0xfd;
            P1=0xff;
            P3=0xef;
            P2=0xff;
            delay(1);
        }
        for(n=0; n<=ms; n++)
        {
            P0=0xfb;
            P1=0xc0;
            P3=0x39;
            P2=0x07;
            led=0;
            delay(1);
            P0=0xfd;
            P1=0x3f;
            P3=0xd6;
            P2=0xf8;
            delay(1);
            P0=0xfe;
            P1=0xff;
            P3=0xef;
            P2=0xff;
            delay(1);
        }
    }
}


//===============================================================

void phaohoa(unsigned char ms,unsigned char m)
{
    P0=P1=P2=P3=0xff;
    c1=0;
    d13=0;
    delay(ms);
    c2=0;
    delay(ms);
    c3=0;
    delay(ms);
    c4=0;
    delay(ms);
    c5=0;
    delay(ms);
//L1
    for(n=0; n<=m; n++)
    {
        P0=0xfe;
        P1=P2=P3=0xff;
        delay(1);
        P0=0xfd;
        d13=0;
        delay(1);
        P0=0xfb;
        d13=0;
        delay(1);
        P0=0xf7;
        d13=0;
        delay(1);
        P0=0xef;
        d13=0;
        d9=0;
        d7=0;
        d19=0;
        d17=0;
        delay(1);
    }
//L2
    for(n=0; n<=m; n++)
    {
        P0=0xfe;
        P1=P2=P3=0xff;
        delay(1);
        P0=0xfd;
        delay(1);
        P0=0xfb;
        d13=0;
        delay(1);
        P0=0xf7;
        d13=0;
        delay(1);
        P0=0xef;
        d13=0;
        d1=0;
        d5=0;
        d21=0;
        led=0;
        delay(1);
    }
//L3
    for(n=0; n<=m; n++)
    {
        P0=0xfe;
        P1=P2=P3=0xff;
        delay(1);
        P0=0xfd;
        delay(1);
        P0=0xfb;
        d13=0;
        delay(1);
        P0=0xf7;
        d13=0;
        d1=0;
        d5=0;
        d21=0;
        led=0;
        delay(1);
        P0=0xef;
        d13=0;
        d1=0;
        d5=0;
        d21=0;
        led=0;
        delay(1);
    }
//L4
    for(n=0; n<=m; n++)
    {
        P0=0xfe;
        P1=P2=P3=0xff;
        delay(1);
        P0=0xfd;
        delay(1);
        P0=0xfb;
        d1=0;
        d5=0;
        d21=0;
        led=0;
        delay(1);
        P0=0xf7;
        d13=0;
        d1=0;
        d5=0;
        d21=0;
        led=0;
        delay(1);
        P0=0xef;
        d13=0;
        d1=0;
        d5=0;
        d21=0;
        led=0;
        delay(1);
    }
//L5
    for(n=0; n<=m; n++)
    {
        P0=0xfe;
        P1=P2=P3=0xff;
        delay(1);
        P0=0xfd;
        d1=0;
        d5=0;
        d21=0;
        led=0;
        delay(1);
        P0=0xfb;
        d1=0;
        d5=0;
        d21=0;
        led=0;
        delay(1);
        P0=0xf7;
        d1=0;
        d5=0;
        d21=0;
        led=0;
        delay(1);
        P0=0xef;
        d13=0;
        d1=0;
        d5=0;
        d21=0;
        led=0;
        delay(1);
    }
    c1=c2=c3=c4=c5=0;
    d1=0;
    d5=0;
    d21=0;
    led=0;
    d13=1;
    delay(ms);
    c5=1;
    delay(ms);
    c4=1;
    delay(ms);
    c3=1;
    delay(ms);
    c2=1;
    delay(ms);
    c1=1;
    delay(ms);
}
void tunghung(unsigned char ms,unsigned char n)
{
    for(i=0; i<n; i++)
    {
        P0=0xbe;
        P1=0xce;
        P3=0x39;
        P2=0xe7;
        delay(ms);
        P0=0xfd;
        P1=0xb5;
        P3=0xd6;
        P2=0x5a;
        delay(ms);
        P0=0xfb;
        P1=0x7b;
        P3=0xef;
        P2=0xbd;
        delay(ms);
        P0=0xf7;
        P1=0xb5;
        P3=0xd6;
        P2=0x5a;
        delay(ms);
        P0=0xaf;
        P1=0xce;
        P3=0x39;
        P2=0xe7;
        delay(ms);
        P0=0xb7;
        delay(ms);
        P0=0xbb;
        delay(ms);
        P0=0xbd;
        delay(ms);
        P0=0xbe;
        delay(ms);
    }
}
void chu_I(unsigned char ms)
{
//chu I
    for(n=0; n<=ms; n++)
    {
        P0=0xbe;
        P1=0xff;
        P3=0x7f;
        P2=0x00;
        delay(1);
        P0=0xfd;
        P3=0xff;
        P2=0xbd;
        delay(1);
        P0=0xfb;
        P2=0xbd;
        delay(1);
        P0=0xf7;
        P2=0xbd;
        delay(1);
        P0=0xaf;
        P3=0x7f;
        P2=0x00;
        delay(1);
    }
    P0=P1=P2=P3=0xff;
}
void chu_L(unsigned char ms)
{
//chu love
    for(n=0; n<=ms; n++)
    {
        P0=0xfe;
        P1=0xff;
        P3=0xff;
        P2=0xbd;
        delay(1);
        P0=0xfd;
        P2=0x18;
        delay(1);
        P0=0xbb;
        P3=0x7f;
        P2=0x00;
        delay(1);
        P0=0xf7;
        delay(1);
        P0=0xef;
        P3=0xff;
        P2=0x5a;
        delay(1);
    }
    P0=P1=P2=P3=0xff;
}
void chu_U(unsigned char ms)
{
//chu you
    for(n=0; n<=ms; n++)
    {
        P0=0xfe;
        P1=0xff;
        P3=0xff;
        P2=0x18;
        delay(1);
        P0=0xbd;
        P3=0x7f;
        P2=0xe7;
        delay(1);
        P0=0xbb;
        delay(1);
        P0=0xb7;
        delay(1);
        P0=0xaf;;
        P3=0x3f;
        P3=0x7f;
        P2=0xe7;
        delay(1);
    }
    P0=P1=P2=P3=0xff;
}


/*
void diemsang(unsigned char ms,unsigned char n)
{
P0=P1=P2=P3=0xff;
for(i=0;i<n;i++)
{
c3=0;d13=0;delay(ms);c3=1;d13=1;
c2=0;c4=0;d9=0;d7=0;d19=0;d17=0;delay(ms);c2=1;c4=1;d9=1;d7=1;d19=1;d17=1;
c1=0;c5=0;d1=d5=d21=led=0;delay(ms);c1=1;c5=1;d1=d5=d21=led=1;
c2=0;c4=0;d9=0;d7=0;d19=0;d17=0;delay(ms);c2=1;c4=1;d9=1;d7=1;d19=1;d17=1;
c3=0;d13=0;delay(ms);c3=1;d13=1;
}
}

*/
void hinhvuongnho(unsigned char ms,unsigned char n)
{
    c1=c2=c3=c4=c5=0;
    for(i=0; i<n; i++)
    {
        P1=P2=P3=0xff;
        led=0;
        delay(ms);
        d16=d17=d24=0;
        delay(ms);
        d17=1;
        d13=d14=d15=d18=d23=0;
        delay(ms);
        d13=d14=d18=1;
        d22=d19=d12=d9=d8=d7=d6=0;
        delay(ms);
        P1=0xc0;
        P3=0x39;
        P2=0x07;
        led=0;
        delay(ms);
    }
}
void toa_ra (void)
{
    d13=0;
    c1=0;
    delay0(10000);
    c1=1;
    c2=0;
    delay0(10000);
    c2=1;
    c3=0;
    delay0(10000);
    c3=1;
    c4=0;
    delay0(10000);
    c4=1;
    c5=0;
    delay0(10000);
    delay0(20000);
    d13=1;
    d7=d8=d9=d12=d14=d17=d18=d19=0;
    delay0(15000);
    d7=d8=d9=d12=d14=d17=d18=d19=1;
    d1=d2=d3=d4=d5=d10=d15=d20=d25=d24=d23=d22=d21=d16=d11=d6=0;
    delay0(10000);
    c5=1;
    c4=0;
    delay0(10000);
    c4=1;
    c3=0;
    delay0(8000);
    c3=1;
    c2=0;
    delay0(6000);
    c2=1;
    c1=0;
    delay0(4000);
    c1=1;
    d1=d2=d3=d4=d5=d10=d15=d20=d25=d24=d23=d22=d21=d16=d11=d6=1;
    delay0(10000);
    c1=0;
    d1=d2=d3=d4=d5=d10=d15=d20=d25=d24=d23=d22=d21=d16=d11=d6=0;
    delay0(4000);
    c1=1;
    c2=0;
    delay0(4000);
    c2=1;
    c3=0;
    delay0(6000);
    c3=1;
    c4=0;
    delay0(8000);
    c4=1;
    c5=0;
    delay0(10000);
    d1=d2=d3=d4=d5=d10=d15=d20=d25=d24=d23=d22=d21=d16=d11=d6=1;
    delay0(10000);
    d7=d8=d9=d12=d14=d17=d18=d19=0;
    delay0(10000);
    d7=d8=d9=d12=d14=d17=d18=d19=1;
}
void cotxoay(unsigned char ms,unsigned char n)
{
    P0=0x00;
    led=1;
    for(i=0; i<n; i++)
    {
        d1=d5=d21=d25=0;
        delay(ms);
        d1=d5=d21=d25=1;
        d4=d10=d22=d16=0;
        delay(ms);
        d4=d10=d22=d16=1;
        d3=d11=d23=d15=0;
        delay(ms);
        d3=d11=d23=d15=1;
        d2=d20=d24=d6=0;
        delay(ms);
        d2=d20=d24=d6=1;
    }
}
void giunbo(unsigned char ms,unsigned char n)
{
    P0=P1=P2=P3=0xff;
    for(i=0; i<n; i++)
    {
        c5=0;
        d5=0;
        delay(ms);
        d4=0;
        delay(ms);
        d3=0;
        delay(ms);
        d2=0;
        delay(ms);
        d1=0;
        delay(ms);
        d5=1;
        delay(ms);
        d4=1;
        delay(ms);
        d3=1;
        delay(ms);
        d2=1;
        delay(ms);
        d1=1;
        delay(ms);
        c5=1;
        c4=0;
        d3=0;
        delay(ms);
        d8=0;
        delay(ms);
        d13=0;
        delay(ms);
        d18=0;
        delay(ms);
        d23=0;
        delay(ms);
        d3=1;
        delay(ms);
        d8=1;
        delay(ms);
        d13=1;
        delay(ms);
        d18=1;
        delay(ms);
        d23=1;
        delay(ms);
        c4=1;
        c3=0;
        d25=0;
        delay(ms);
        d17=0;
        delay(ms);
        d13=0;
        delay(ms);
        d9=0;
        delay(ms);
        d1=0;
        delay(ms);
        d25=1;
        delay(ms);
        d17=1;
        delay(ms);
        d13=1;
        delay(ms);
        d9=1;
        delay(ms);
        d1=1;
        delay(ms);
        c3=1;
        c1=0;
        d21=0;
        delay(ms);
        d22=0;
        delay(ms);
        d23=0;
        delay(ms);
        d24=0;
        delay(ms);
        d25=0;
        delay(ms);
        d21=1;
        delay(ms);
        d22=1;
        delay(ms);
        d23=1;
        delay(ms);
        d24=1;
        delay(ms);
        d25=1;
        delay(ms);
        c1=1;
        c2=0;
        d5=0;
        delay(ms);
        d7=0;
        delay(ms);
        d13=0;
        delay(ms);
        d19=0;
        delay(ms);
        d21=0;
        delay(ms);
        d5=1;
        delay(ms);
        d7=1;
        delay(ms);
        d13=1;
        delay(ms);
        d19=1;
        delay(ms);
        d21=1;
        delay(ms);
        c2=1;
    }
}
void pittong_1()
{
    P0=0x00;
    P1=P2=P3=0xff;
    led=0;
    delay(1000);
    d24=0;
    delay(1000);
    d23=0;
    delay(1000);
    d22=0;
    delay(1000);
    d21=0;
    delay(1000);
}

//============================== HAM CHINH ==================================
void main(void)
{
    P0=P1=P2=P3=0xff;
    delay(800);
    while(1)
    {
        chu_M(700);
        delay(500);
        chu_R(700);
        delay(500);
        chu_T(700);
        delay(500);
        chu_E(700);
        delay(500);
        chu_E(700);
        delay(500);
        locxoay(20,10);
        vongtron(200,1);
        phaohoa(100,30);
//choptat(300,3);
//diemsang(100,3);
        chu_I(600);
        delay(300);
        chu_I(600);
        delay(300);
        chu_L(600);
        delay(300);
        chu_L(600);
        delay(300);
        chu_U(600);
        delay(300);
        chu_U(600);
        delay(300);
        for(i=0; i<4; i++)
            phaohoa(100,30);
        vongtron(200,1);
        thap(150,4);
        thap1(150,4);
        lapdien(150,4);
        nuocdang(100,3);
        pittong(100,3);
        songbien(30,10);
        guongnuoc3(150,10);
        quetkhung(100);
        P0=0xbf;
        delay(200);
        toa_ra();
        delay(200);
        toa_ra();
        delay(200);
        toa_ra();
        delay(200);
        toa_ra();
        delay(200);
        hinhvuongnho(1000,2);
        tunghung(150,6);
        tunghung(60,12);
        tunghung(30,18);
        tunghung(5,60);
        P0=P1=P2=P3=0xff;
        c1=c2=c3=c4=c5=0;
        vongtron(200,1);
        nuocdang1(120,3);
        nuocdang1(60,6);
        nuocdang1(30,18);
        nuocdang(10,40);
//guongnuoc1(27,4);
        guongnuoc2(27,4);
        nammoc(120,4);
        cotxoay(600,16);
//choptat(300,3);
        giunbo(100,6);
        for(i=0; i<4; i++)
            phaohoa(100,30);
        delay(300);
        chu_I(600);
        delay(300);
        chu_I(600);
        delay(300);
        chu_L(600);
        delay(300);
        chu_L(600);
        delay(300);
        chu_U(600);
        delay(300);
        chu_U(600);
        delay(300);
        vongtron(200,1);
        thap(150,4);
        thap1(150,4);
        hinhvuongnho(1000,4);
        locxoay(20,10);
        tunghung(150,6);
        tunghung(60,12);
        tunghung(30,18);
        tunghung(5,60);
        chu_M(600);
        delay(300);
        chu_R(600);
        delay(300);
        chu_T(600);
        delay(300);
        chu_E(600);
        delay(300);
        chu_E(600);
        delay(300);
        P0=P1=P2=P3=0xff;
        c1=c2=c3=c4=c5=0;
        vongtron(200,1);
        songbien(30,10);
        guongnuoc3(150,12);
        lapdien(150,4);
//diemsang(100,12);
        cotxoay(600,16);
//guongnuoc1(27,10);
        quetkhung(100);
        vongtron(200,1);
        nuocdang(130,2);
        pittong_1();
        pittong(130,3);
        guongnuoc2(27,10);
        nammoc(120,4);
        giunbo(100,6);
//nuocdang1(120,3);
//nuocdang1(60,6);
        nuocdang1(30,18);
//nuocdang(10,40);
        toa_ra();
        delay(200);
        toa_ra();
        delay(200);
        toa_ra();
        delay(200);
        toa_ra();
        delay(200);
        locxoay(20,10);
//diemsang(100,4);
        for(i=0; i<4; i++)
            phaohoa(100,30);
        giunbo(100,4);
    }
}