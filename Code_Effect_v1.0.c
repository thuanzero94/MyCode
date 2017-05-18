#include <REGX52.H>
#include<stdlib.h>
unsigned int i,j,k,n;
 
 sbit 	c1 = P1^0;
 sbit 	c2 = P1^1;
 sbit	c3 = P1^2;
 sbit	c4 = P1^3;
 sbit	c5 = P1^4;
 sbit	c6 = P1^5;
 sbit	c7 = P1^6;
 sbit	c8 = P1^7;
 sbit	c9 = P3^0;
 sbit	c10 = P3^1;
 sbit	c11 = P3^2;
 sbit	c12 = P3^3;
 sbit	c13 = P3^4;
 sbit	c14 = P3^5;
 sbit	c15 = P3^6;
 sbit	c16 = P3^7;
 sbit	c17 = P2^0;
 sbit	c18 = P2^1;
 sbit	c19 = P2^2;
 sbit	c20 = P2^3;
 sbit	c21 = P2^4;
 sbit	c22 = P2^5;
 sbit	c23 = P2^6;
 sbit	c24 = P2^7;
 sbit   c25 = P0^6;
 
 sbit	L1 = P0^0;
 sbit	L2 = P0^1;
 sbit	L3 = P0^2;
 sbit	L4 = P0^3;
 sbit	L5 = P0^4;

//=======================================
void tre(unsigned int t)
	{
	unsigned int i;
	for(i=0;i<=t;i++);
	}
//---------------------------------------
void tatcacot()
	{
	P1=P2=P3=0x00;c25=0;
	}
//---------------------------------------
void xoatatcacot()
	{
	P1=P2=P3=0xff;c25=1;
	}
//---------------------------------------
void xoa()
	{
	P0=P1=P2=P3=0xff;
	}
//---------------------------------------
void toara(unsigned int time, unsigned char n)
	{
	xoa();
	for(i=0;i<=n;i++)
		{
		L1=L2=L3=L4=L5=0;c13=0;tre(time);
		xoa();
		L1=L2=L3=L4=L5=0;c7=c8=c9=c12=c14=c17=c18=c19=0;tre(time);
		xoa();
		L1=L2=L3=L4=L5=0;c1=c2=c3=c4=c5=c10=c15=c20=c25=c24=c23=c22=c21=c16=c11=c6=0;tre(time);
		xoa();
		}
	}
//----------------------------------------
void sangdan(unsigned int time, unsigned char n)
	{
	for(i=0;i<=n;i++)
		{
		xoa();
		L1=L2=L3=L4=L5=0;
		c13=0;tre(time);c18=0;tre(time);c19=0;tre(time);c14=0;tre(time);
		c9=0; tre(time);c8=0; tre(time);c7=0; tre(time);c12=0;tre(time);
		c17=0;tre(time);c22=0;tre(time);c23=0;tre(time);c24=0;tre(time);
		c25=0;tre(time);c20=0;tre(time);c15=0;tre(time);c10=0;tre(time);
		c5=0; tre(time);c4=0; tre(time);c3=0; tre(time);c2=0; tre(time);
		c1=0; tre(time);c6=0; tre(time);c11=0;tre(time);c16=0;tre(time);
		c21=0;tre(time);
		xoa();
		L1=L2=L3=L4=L5=0;
		c21=0;tre(time);
		c16=0;tre(time);c11=0;tre(time); c6=0; tre(time);c1=0; tre(time);
		c2=0; tre(time);c3=0; tre(time);c4=0; tre(time);c5=0; tre(time);
		c10=0;tre(time);c15=0;tre(time);c20=0;tre(time);c25=0;tre(time);
		c24=0;tre(time);c23=0;tre(time);c22=0;tre(time);c17=0;tre(time);
		c12=0;tre(time);c7=0; tre(time);c8=0; tre(time);c9=0; tre(time);
		c14=0;tre(time);c19=0;tre(time);c18=0;tre(time);c13=0;tre(time);
		}								   
	}
//----------------------------------------
void nuocdang(unsigned int time, unsigned char n)
	{
	unsigned char M[5]={0xfe,0xfd,0xfb,0xf7,0xef};
	xoa();
	for(i=0;i<=n;i++)
		{
		for(j=0;j<=4;j++)
			{
			P0=M[j];
			tatcacot();
			tre(time);
			}
		}
	}
//----------------------------------------
void choptat(unsigned int time,unsigned char n)
	{
	for(i=0;i<n;i++)
		{	
		P0=P1=P2=P3=0;tre(time);
		xoa();tre(time);
		}
	}
//----------------------------------------
void quaydung(unsigned int time,unsigned char n)
	{
	for(i=0;i<n;i++)
		{
		xoa();
		L1=L2=L3=L4=L5=0;
		c11=c12=c13=c14=c15=0;
		tre(time);

		xoa();
		L1=L2=L3=L4=L5=0;
		c6=c13=c20=0;
		tre(time);

		xoa();
		L1=L2=L3=L4=L5=0;
		c1=c7=c13=c19=c25=0;
		tre(time);

		xoa();
		L1=L2=L3=L4=L5=0;
		c2=c13=c24=0;
		tre(time);

		xoa();
		L1=L2=L3=L4=L5=0;
		c3=c8=c13=c18=c23=0;
		tre(time);

		xoa();
		L1=L2=L3=L4=L5=0;
		c4=c13=c22=0;
		tre(time);

		xoa();
		L1=L2=L3=L4=L5=0;
		c5=c9=c13=c17=c21=0;
		tre(time);

		xoa();
		L1=L2=L3=L4=L5=0;
		c16=c13=c10=0;
		tre(time);
		}
	}
//----------------------------------------
void quaydung2(unsigned int time,unsigned char n)
	{
		for(i=0;i<n;i++)
		{
		xoa();
		L1=L2=L3=L4=L5=0;
		c11=c12=c13=c14=c15=0;
		c3=c8=c13=c18=c23=0;
		tre(time);

		xoa();
		L1=L2=L3=L4=L5=0;
		c6=c13=c20=0;
		c22=c13=c4=0;
		tre(time);

		xoa();
		L1=L2=L3=L4=L5=0;
		c1=c7=c13=c19=c25=0;
		c21=c17=c13=c9=c5=0;
		tre(time);

		xoa();
		L1=L2=L3=L4=L5=0;
		c2=c13=c24=0;
		c16=c13=c10=0;
		tre(time);

		xoa();
		L1=L2=L3=L4=L5=0;
		c3=c8=c13=c18=c23=0;
		c11=c12=c13=c14=c15=0;
		tre(time);

		xoa();
		L1=L2=L3=L4=L5=0;
		c4=c13=c22=0;
		c6=c13=c20=0;
		tre(time);

		xoa();
		L1=L2=L3=L4=L5=0;
		c5=c9=c13=c17=c21=0;
		c1=c7=c13=c19=c25=0;
		tre(time);

		xoa();
		L1=L2=L3=L4=L5=0;
		c16=c13=c10=0;
		c2=c13=c24=0;
		tre(time);
		}
	}
//----------------------------------------
void xeptang(unsigned int time,unsigned char n)
	{
	for(i=0;i<n;i++)
		{
		xoa();
		L5=0;c1=c2=c3=c4=c5=c10=c15=c20=c25=c24=c23=c22=c21=c16=c11=c6=0;tre(time);
		L4=L5=0;c1=c2=c3=c4=c5=c10=c15=c20=c25=c24=c23=c22=c21=c16=c11=c6=0;tre(time);
		L3=L4=L5=0;c1=c2=c3=c4=c5=c10=c15=c20=c25=c24=c23=c22=c21=c16=c11=c6=0;tre(time);
		L2=L3=L4=L5=0;c1=c2=c3=c4=c5=c10=c15=c20=c25=c24=c23=c22=c21=c16=c11=c6=0;tre(time);
		L1=L2=L3=L4=L5=0;c1=c2=c3=c4=c5=c10=c15=c20=c25=c24=c23=c22=c21=c16=c11=c6=0;tre(time);
		}
	}
//----------------------------------------
void luonsong(unsigned int time,unsigned char n)
	{
	for(i=0;i<n;i++)
		{
		xoa();
		for(k=0;k<time;k++)
			{
			L5=0;c1=c2=c3=c4=c5=c11=c12=c13=c14=c15=c21=c22=c23=c24=c25=0;tre(50);
			L5=1;c1=c2=c3=c4=c5=c11=c12=c13=c14=c15=c21=c22=c23=c24=c25=1;tre(50);
			L4=0;c6=c7=c8=c9=c10=c16=c17=c18=c19=c20=0;tre(50);
			L4=1;c6=c7=c8=c9=c10=c16=c17=c18=c19=c20=1;tre(50);

			L1=0;c1=c2=c3=c4=c5=c11=c12=c13=c14=c15=c21=c22=c23=c24=c25=0;tre(50);
			L1=1;c1=c2=c3=c4=c5=c11=c12=c13=c14=c15=c21=c22=c23=c24=c25=1;tre(50);
			L2=0;c6=c7=c8=c9=c10=c16=c17=c18=c19=c20=0;tre(50);
			L2=1;c6=c7=c8=c9=c10=c16=c17=c18=c19=c20=1;tre(50);
			}
		for(k=0;k<time;k++)
			{
			L4=0;c1=c2=c3=c4=c5=c11=c12=c13=c14=c15=c21=c22=c23=c24=c25=0;tre(50);
			L4=1;c1=c2=c3=c4=c5=c11=c12=c13=c14=c15=c21=c22=c23=c24=c25=1;tre(50);
			L5=0;c6=c7=c8=c9=c10=c16=c17=c18=c19=c20=0;tre(50);
			L5=1;c6=c7=c8=c9=c10=c16=c17=c18=c19=c20=1;tre(50);

			L2=0;c1=c2=c3=c4=c5=c11=c12=c13=c14=c15=c21=c22=c23=c24=c25=0;tre(50);
			L2=1;c1=c2=c3=c4=c5=c11=c12=c13=c14=c15=c21=c22=c23=c24=c25=1;tre(50);
			L1=0;c6=c7=c8=c9=c10=c16=c17=c18=c19=c20=0;tre(50);
			L1=1;c6=c7=c8=c9=c10=c16=c17=c18=c19=c20=1;tre(50);
			}
		}
	}
//----------------------------------------
void H_FrontToBack(unsigned int time, unsigned char n){
	for(i=0; i<n; i++){
		//1
		for(k=0; k<time; k++){
			xoa();
			L1=0;c1=c5=0;c2=c3=c4=1;tre(20);
			xoa();
			L2=0;c1=c5=0;c2=c3=c4=1;tre(20);
			xoa();
			L3=0;c1=c2=c3=c4=c5=0;tre(20);
			xoa();
			L4=0;c1=c5=0;c2=c3=c4=1;tre(20);
			xoa();
			L5=0;c1=c5=0;c2=c3=c4=1;tre(20);
		}
		//2
		for(k=0; k<time; k++){
			xoa();
			L1=0;c6=c10=0;c7=c8=c9=1;tre(20);
			xoa();
			L2=0;c6=c10=0;c7=c8=c9=1;tre(20);
			xoa();
			L3=0;c6=c10=c7=c8=c9=0;tre(20);
			xoa();
			L4=0;c6=c10=0;c7=c8=c9=1;tre(20);
			xoa();
			L5=0;c6=c10=0;c7=c8=c9=1;tre(20);
		}
		//3
		for(k=0; k<time; k++){
			xoa();
			L1=0;c11=c15=0;c12=c13=c14=1;tre(20);
			xoa();
			L2=0;c11=c15=0;c12=c13=c14=1;tre(20);
			xoa();
			L3=0;c11=c15=c12=c13=c14=0;tre(20);
			xoa();
			L4=0;c11=c15=0;c12=c13=c14=1;tre(20);
			xoa();
			L5=0;c11=c15=0;c12=c13=c14=1;tre(20);
		}
		//4
		for(k=0; k<time; k++){
			xoa();
			L1=0;c16=c20=0;c17=c18=c19=1;tre(20);
			xoa();
			L2=0;c16=c20=0;c17=c18=c19=1;tre(20);
			xoa();
			L3=0;c16=c20=c17=c18=c19=0;tre(20);
			xoa();
			L4=0;c16=c20=0;c17=c18=c19=1;tre(20);
			xoa();
			L5=0;c16=c20=0;c17=c18=c19=1;tre(20);
		}
		//5
		for(k=0; k<time; k++){
			xoa();
			L1=0;c21=c25=0;c22=c23=c24=1;tre(20);
			xoa();
			L2=0;c21=c25=0;c22=c23=c24=1;tre(20);
			xoa();
			L3=0;c21=c25=c22=c23=c24=0;tre(20);
			xoa();
			L4=0;c21=c25=0;c22=c23=c24=1;tre(20);
			xoa();
			L5=0;c21=c25=0;c22=c23=c24=1;tre(20);
		}
	}
}
//----------------------------------------
void H_Appear_RtoL(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c15=0;tre(10);xoa();
			L2=0;c15=0;tre(10);xoa();
			L3=0;c15=0;tre(10);xoa();
			L4=0;c15=0;tre(10);xoa();
			L5=0;c15=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c14=0;tre(10);xoa();
			L2=0;c14=0;tre(10);xoa();
			L3=0;c14=c15=0;tre(10);xoa();
			L4=0;c14=0;tre(10);xoa();
			L5=0;c14=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c13=c14=c15=0;tre(10);xoa();
			L4=0;c13=0;tre(10);xoa();
			L5=0;c13=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c12=0;tre(10);xoa();
			L2=0;c12=0;tre(10);xoa();
			L3=0;c12=c13=c14=c15=0;tre(10);xoa();
			L4=0;c12=0;tre(10);xoa();
			L5=0;c12=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c15=0;tre(10);xoa();
			L2=0;c11=c15=0;tre(10);xoa();
			L3=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
	}
}
//----------------------------------------
void H_vRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
	for(j=0;j<2;j++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c15=0;tre(10);xoa();
			L2=0;c11=c15=0;tre(10);xoa();
			L3=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
		//stage 2
		for(k=0;k>time;k++){
			xoa();
			L1=0;c9=c17=0;tre(10);xoa();
			L2=0;c9=c17=0;tre(10);xoa();
			L3=0;c9=c13=c17=0;tre(10);xoa();
			L4=0;c9=c17=0;tre(10);xoa();
			L5=0;c9=c17=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c3=c23=0;tre(10);xoa();
			L2=0;c3=c23=0;tre(10);xoa();
			L3=0;c3=c8=c13=c18=c23=0;tre(10);xoa();
			L4=0;c3=c23=0;tre(10);xoa();
			L5=0;c3=c23=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c7=c19=0;tre(10);xoa();
			L2=0;c7=c19=0;tre(10);xoa();
			L3=0;c7=c13=c19=0;tre(10);xoa();
			L4=0;c7=c19=0;tre(10);xoa();
			L5=0;c7=c19=0;tre(10);
		}
	}
	}
}
//----------------------------------------
void H_hRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
	for(j=0;j<2;j++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c15=0;tre(10);xoa();
			L2=0;c11=c15=0;tre(10);xoa();
			L3=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c2=c4=0;tre(10);xoa();
			L2=0;c7=c9=0;tre(10);xoa();
			L3=0;c12=c13=c14=0;tre(10);xoa();
			L4=0;c17=c19=0;tre(10);xoa();
			L5=0;c22=c24=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L3=0;c1=c5=c6=c10=c11=c12=c13=c14=c15=c16=c20=c21=c25=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c22=c24=0;tre(10);xoa();
			L2=0;c17=c19=0;tre(10);xoa();
			L3=0;c12=c13=c14=0;tre(10);xoa();
			L4=0;c7=c9=0;tre(10);xoa();
			L5=0;c2=c4=0;tre(10);
		}
	}
	}
}
//----------------------------------------
void E_FrontToBack(unsigned int time, unsigned char n){
	for(i=0; i<n; i++){
		//1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c1=c2=c3=c4=c5=0;tre(10);xoa();
			L2=0;c1=0;tre(10);xoa();
			L3=0;c1=c2=c3=c4=0;tre(10);xoa();
			L4=0;c1=0;tre(10);xoa();
			L5=0;c1=c2=c3=c4=c5=0;tre(10);xoa();
		}
		//2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c10=c9=c8=c7=c6=0;tre(10);xoa();
			L2=0;c10=0;tre(10);xoa();
			L3=0;c10=c9=c8=c7=0;tre(10);xoa();
			L4=0;c10=0;tre(10);xoa();
			L5=0;c10=c9=c8=c7=c6=0;tre(10);xoa();
		}
		//3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
			L2=0;c11=0;tre(10);xoa();
			L3=0;c11=c12=c13=c14=0;tre(10);xoa();
			L4=0;c11=0;tre(10);xoa();
			L5=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
		}
		//4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c20=c19=c18=c17=c16=0;tre(10);xoa();
			L2=0;c20=0;tre(10);xoa();
			L3=0;c20=c19=c18=c17=0;tre(10);xoa();
			L4=0;c20=0;tre(10);xoa();
			L5=0;c20=c19=c18=c17=c16=0;tre(10);xoa();
		}
		//5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c21=c22=c23=c24=c25=0;tre(10);xoa();
			L2=0;c21=0;tre(10);xoa();
			L3=0;c21=c22=c23=c24=0;tre(10);xoa();
			L4=0;c21=0;tre(10);xoa();
			L5=0;c21=c22=c23=c24=c25=0;tre(10);xoa();
		}
	}
}
//----------------------------------------
void E_Appear_RtoL(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c15=0;tre(10);xoa();
			L2=0;c15=0;tre(10);xoa();
			L3=0;c15=0;tre(10);xoa();
			L4=0;c15=0;tre(10);xoa();
			L5=0;c15=0;tre(10);xoa();
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c14=c15=0;tre(10);xoa();
			L2=0;c14=0;tre(10);xoa();
			L3=0;c14=c15=0;tre(10);xoa();
			L4=0;c14=0;tre(10);xoa();
			L5=0;c14=c15=0;tre(10);xoa();
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=c14=c15=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c13=c14=c15=0;tre(10);xoa();
			L4=0;c13=0;tre(10);xoa();
			L5=0;c13=c14=c15=0;tre(10);xoa();
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c12=c13=c14=c15=0;tre(10);xoa();
			L2=0;c12=0;tre(10);xoa();
			L3=0;c12=c13=c14=c15=0;tre(10);xoa();
			L4=0;c12=0;tre(10);xoa();
			L5=0;c12=c13=c14=c15=0;tre(10);xoa();
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
			L2=0;c11=0;tre(10);xoa();
			L3=0;c11=c12=c13=c14=0;tre(10);xoa();
			L4=0;c11=0;tre(10);xoa();
			L5=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
		}
	}
}
//----------------------------------------
void E_vRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
			L2=0;c11=0;tre(10);xoa();
			L3=0;c11=c12=c13=c14=0;tre(10);xoa();
			L4=0;c11=0;tre(10);xoa();
			L5=0;c11=c12=c13=c14=c15=0;tre(10);
		}
		//stage 2
		for(k=0;k>time;k++){
			xoa();
			L1=0;c9=c13=c17=0;tre(10);xoa();
			L2=0;c9=0;tre(10);xoa();
			L3=0;c9=c13=0;tre(10);xoa();
			L4=0;c9=0;tre(10);xoa();
			L5=0;c9=c13=c17=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c3=c8=c13=c18=c23=0;tre(10);xoa();
			L2=0;c3=0;tre(10);xoa();
			L3=0;c3=c8=c13=c18=0;tre(10);xoa();
			L4=0;c3=0;tre(10);xoa();
			L5=0;c3=c8=c13=c18=c23=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c7=c13=c19=0;tre(10);xoa();
			L2=0;c7=0;tre(10);xoa();
			L3=0;c7=c13=0;tre(10);xoa();
			L4=0;c7=0;tre(10);xoa();
			L5=0;c7=c13=c19=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c15=c14=c13=c12=c11=0;tre(10);xoa();
			L2=0;c15=0;tre(10);xoa();
			L3=0;c15=c14=c13=c12=0;tre(10);xoa();
			L4=0;c15=0;tre(10);xoa();
			L5=0;c15=c14=c13=c12=c11=0;tre(10);xoa();
		}
		//stage 6
		for(k=0;k>time;k++){
			xoa();
			L1=0;c17=c9=c13=0;tre(10);xoa();
			L2=0;c17=0;tre(10);xoa();
			L3=0;c17=c13=0;tre(10);xoa();
			L4=0;c17=0;tre(10);xoa();
			L5=0;c17=c13=c9=0;tre(10);
		}
		//stage 7
		for(k=0;k<time;k++){
			xoa();
			L1=0;c23=c18=c13=c8=c3=0;tre(10);xoa();
			L2=0;c23=0;tre(10);xoa();
			L3=0;c23=c18=c13=c8=0;tre(10);xoa();
			L4=0;c23=0;tre(10);xoa();
			L5=0;c23=c18=c13=c8=c3=0;tre(10);
		}
		//stage 8
		for(k=0;k<time;k++){
			xoa();
			L1=0;c19=c13=c7=0;tre(10);xoa();
			L2=0;c19=0;tre(10);xoa();
			L3=0;c19=c13=0;tre(10);xoa();
			L4=0;c19=0;tre(10);xoa();
			L5=0;c19=c13=c7=0;tre(10);
		}
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
			L2=0;c11=0;tre(10);xoa();
			L3=0;c11=c12=c13=c14=0;tre(10);xoa();
			L4=0;c11=0;tre(10);xoa();
			L5=0;c11=c12=c13=c14=c15=0;tre(10);
		}
	}
}
//----------------------------------------
void E_hRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
	for(j=0;j<2;j++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
			L2=0;c11=0;tre(10);xoa();
			L3=0;c11=c12=c13=c14=0;tre(10);xoa();
			L4=0;c11=0;tre(10);xoa();
			L5=0;c11=c12=c13=c14=c15=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c2=c3=c4=0;tre(10);xoa();
			L2=0;c9=0;tre(10);xoa();
			L3=0;c12=c13=0;tre(10);xoa();
			L4=0;c17=0;tre(10);xoa();
			L5=0;c22=c23=c24=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L3=0;c1=c2=c3=c4=c5=c10=c11=c12=c13=c14=c20=c21=c22=c23=c24=c25=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c22=c23=c24=0;tre(10);xoa();
			L2=0;c19=0;tre(10);xoa();
			L3=0;c12=c13=0;tre(10);xoa();
			L4=0;c9=0;tre(10);xoa();
			L5=0;c2=c3=c4=0;tre(10);
		}
	}
	}
}
//----------------------------------------
void N_FrontToBack(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c1=c5=0;tre(10);xoa();
			L2=0;c1=c4=c5=0;tre(10);xoa();
			L3=0;c1=c3=c5=0;tre(10);xoa();
			L4=0;c1=c2=c5=0;tre(10);xoa();
			L5=0;c1=c5=0;tre(10);xoa();	
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c10=c6=0;tre(10);xoa();
			L2=0;c10=c7=c6=0;tre(10);xoa();
			L3=0;c10=c8=c6=0;tre(10);xoa();
			L4=0;c10=c9=c6=0;tre(10);xoa();
			L5=0;c10=c6=0;tre(10);xoa();	
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c15=0;tre(10);xoa();
			L2=0;c11=c14=c15=0;tre(10);xoa();
			L3=0;c11=c13=c15=0;tre(10);xoa();
			L4=0;c11=c12=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);xoa();	
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c20=c16=0;tre(10);xoa();
			L2=0;c20=c17=c16=0;tre(10);xoa();
			L3=0;c20=c18=c16=0;tre(10);xoa();
			L4=0;c20=c19=c16=0;tre(10);xoa();
			L5=0;c20=c16=0;tre(10);xoa();	
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c21=c25=0;tre(10);xoa();
			L2=0;c21=c24=c25=0;tre(10);xoa();
			L3=0;c21=c23=c25=0;tre(10);xoa();
			L4=0;c21=c22=c25=0;tre(10);xoa();
			L5=0;c21=c25=0;tre(10);xoa();	
		}
	}
}
//----------------------------------------
void N_Appear_RtoL(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c15=0;tre(10);xoa();
			L2=0;c15=0;tre(10);xoa();
			L3=0;c15=0;tre(10);xoa();
			L4=0;c15=0;tre(10);xoa();
			L5=0;c15=0;tre(10);xoa();
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c14=0;tre(10);xoa();
			L2=0;c14=c15=0;tre(10);xoa();
			L3=0;c14=0;tre(10);xoa();
			L4=0;c14=0;tre(10);xoa();
			L5=0;c14=0;tre(10);xoa();
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c13=c14=0;tre(10);xoa();
			L3=0;c13=c15=0;tre(10);xoa();
			L4=0;c13=0;tre(10);xoa();
			L5=0;c13=0;tre(10);xoa();
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c12=0;tre(10);xoa();
			L2=0;c12=c13=0;tre(10);xoa();
			L3=0;c12=c14=0;tre(10);xoa();
			L4=0;c12=c15=0;tre(10);xoa();
			L5=0;c12=0;tre(10);xoa();
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c15=0;tre(10);xoa();
			L2=0;c11=c12=c15=0;tre(10);xoa();
			L3=0;c11=c13=c15=0;tre(10);xoa();
			L4=0;c11=c14=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);xoa();
		}
	}
}
//----------------------------------------
void N_vRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
	for(j=0;j<2;j++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c15=0;tre(10);xoa();
			L2=0;c11=c12=c15=0;tre(10);xoa();
			L3=0;c11=c13=c15=0;tre(10);xoa();
			L4=0;c11=c14=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);xoa();
		}
		//stage 2
		for(k=0;k>time;k++){
			xoa();
			L1=0;c1=c25=0;tre(10);xoa();
			L2=0;c1=c17=c25=0;tre(10);xoa();
			L3=0;c1=c13=c25=0;tre(10);xoa();
			L4=0;c1=c9=c25=0;tre(10);xoa();
			L5=0;c1=c25=0;tre(10);xoa();
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c3=c23=0;tre(10);xoa();
			L2=0;c3=c18=c23=0;tre(10);xoa();
			L3=0;c3=c13=c23=0;tre(10);xoa();
			L4=0;c3=c8=0;tre(10);xoa();
			L5=0;c3=c23=0;tre(10);xoa();
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c5=c21=0;tre(10);xoa();
			L2=0;c5=c19=c21=0;tre(10);xoa();
			L3=0;c5=c13=c21=0;tre(10);xoa();
			L4=0;c5=c7=c21=0;tre(10);xoa();
			L5=0;c5=c21=0;tre(10);xoa();
		}
	}
	}
}
//----------------------------------------
void N_hRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
	for(j=0;j<2;j++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c15=0;tre(10);xoa();
			L2=0;c11=c12=c15=0;tre(10);xoa();
			L3=0;c11=c13=c15=0;tre(10);xoa();
			L4=0;c11=c14=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);xoa();
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c1=c5=0;tre(10);xoa();
			L2=0;c10=c7=c6=0;tre(10);xoa();
			L3=0;c11=c13=c15=0;tre(10);xoa();
			L4=0;c20=c19=c16=0;tre(10);xoa();
			L5=0;c21=c25=0;tre(10);xoa();
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L3=0;c1=c5=c10=c7=c6=c11=c13=c15=c20=c19=c16=c21=c25;tre(10);xoa();
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c21=c25=0;tre(10);xoa();
			L2=0;c20=c19=c16=0;tre(10);xoa();
			L3=0;c11=c13=c15=0;tre(10);xoa();
			L4=0;c10=c7=c6=0;tre(10);xoa();
			L5=0;c1=c5=0;tre(10);xoa();
		}
	}
	}
}
//----------------------------------------
void I_FrontToBack(unsigned int time,unsigned char n){
	for(i=0;i<n;i++){
		//1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c1=c2=c3=c4=c5=0;tre(20);xoa();
			L2=0;c3=0;tre(20);xoa();
			L3=0;c3=0;tre(20);xoa();
			L4=0;c3=0;tre(20);xoa();
			L5=0;c1=c2=c3=c4=c5=0;tre(20);
		}
		//2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c6=c7=c8=c9=c10=0;tre(20);xoa();
			L2=0;c8=0;tre(20);xoa();
			L3=0;c8=0;tre(20);xoa();
			L4=0;c8=0;tre(20);xoa();
			L5=0;c6=c7=c8=c9=c10=0;tre(20);
		}
		//3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L2=0;c13=0;tre(20);xoa();
			L3=0;c13=0;tre(20);xoa();
			L4=0;c13=0;tre(20);xoa();
			L5=0;c11=c12=c13=c14=c15=0;tre(20);
		}
		//4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c16=c17=c18=c19=c20=0;tre(20);xoa();
			L2=0;c18=0;tre(20);xoa();
			L3=0;c18=0;tre(20);xoa();
			L4=0;c18=0;tre(20);xoa();
			L5=0;c16=c17=c18=c19=c20=0;tre(20);
		}
		//5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c21=c22=c23=c24=c25=0;tre(20);xoa();
			L2=0;c23=0;tre(20);xoa();
			L3=0;c23=0;tre(20);xoa();
			L4=0;c23=0;tre(20);xoa();
			L5=0;c21=c22=c23=c24=c25=0;tre(20);
		}
	}
}
//----------------------------------------
void I_Appear_RtoL(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c15=0;tre(10);xoa();
			L5=0;c15=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c14=c15=0;tre(10);xoa();
			L5=0;c14=c15=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=c14=c15=0;tre(10);xoa();
			L2=0;c15=0;tre(10);xoa();
			L3=0;c15=0;tre(10);xoa();
			L4=0;c15=0;tre(10);xoa();
			L5=0;c13=c14=c15=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c12=c13=c14=c15=0;tre(10);xoa();
			L2=0;c14=0;tre(10);xoa();
			L3=0;c14=0;tre(10);xoa();
			L4=0;c14=0;tre(10);xoa();
			L5=0;c12=c13=c14=c15=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c13=0;tre(10);xoa();
			L4=0;c13=0;tre(10);xoa();
			L5=0;c11=c12=c13=c14=c15=0;tre(10);
		}
	}
}
//----------------------------------------
void I_vRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
	for(j=0;j<2;j++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c13=0;tre(10);xoa();
			L4=0;c13=0;tre(10);xoa();
			L5=0;c11=c12=c13=c14=c15=0;tre(10);
		}
		//stage 2
		for(k=0;k>time;k++){
			xoa();
			L1=0;c9=c13=c17=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c13=0;tre(10);xoa();
			L4=0;c13=0;tre(10);xoa();
			L5=0;c9=c13=c17=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c3=c8=c13=c18=c23=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c13=0;tre(10);xoa();
			L4=0;c13=0;tre(10);xoa();
			L5=0;c3=c8=c13=c18=c23=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c7=c13=c19=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c13=0;tre(10);xoa();
			L4=0;c13=0;tre(10);xoa();
			L5=0;c7=c13=c19=0;tre(10);
		}
	}
	}
}
//----------------------------------------
void I_hRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
	for(j=0;j<2;j++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c13=0;tre(10);xoa();
			L4=0;c13=0;tre(10);xoa();
			L5=0;c11=c12=c13=c14=c15=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c2=c3=c4=0;tre(10);xoa();
			L2=0;c8=0;tre(10);xoa();
			L3=0;c13=0;tre(10);xoa();
			L4=0;c18=0;tre(10);xoa();
			L5=0;c22=c23=c24=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L3=0;c1=c2=c3=c4=c5=c8=c13=c18=c21=c22=c23=c24=c25=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c22=c23=c24=0;tre(10);xoa();
			L2=0;c18=0;tre(10);xoa();
			L3=0;c13=0;tre(10);xoa();
			L4=0;c8=0;tre(10);xoa();
			L5=0;c2=c3=c4=0;tre(10);
		}
	}
	}
}
//----------------------------------------
void L_FrontToBack(unsigned int time,unsigned char n){
	for(i=0;i<n;i++){
		//1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c1=c2=c3=c4=c5=0;tre(10);xoa();
			L2=0;c1=0;tre(10);xoa();
			L3=0;c1=0;tre(10);xoa();
			L4=0;c1=0;tre(10);xoa();
			L5=0;c1=0;tre(10);
		}
		//2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c6=c7=c8=c9=c10=0;tre(10);xoa();
			L2=0;c10=0;tre(10);xoa();
			L3=0;c10=0;tre(10);xoa();
			L4=0;c10=0;tre(10);xoa();
			L5=0;c10=0;tre(10);
			}
		//3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c12=c13=c14=c15=0;tre(50);xoa();
			L2=0;c11=0;tre(10);xoa();
			L3=0;c11=0;tre(10);xoa();
			L4=0;c11=0;tre(10);xoa();
			L5=0;c11=0;tre(10);
			}
		//4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c16=c17=c18=c19=c20=0;tre(10);xoa();
			L2=0;c20=0;tre(10);xoa();
			L3=0;c20=0;tre(10);xoa();
			L4=0;c20=0;tre(10);xoa();
			L5=0;c20=0;tre(10);
		}
		//5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c21=c22=c23=c24=c25=0;tre(10);xoa();
			L2=0;c21=0;tre(10);xoa();
			L3=0;c21=0;tre(10);xoa();
			L4=0;c21=0;tre(10);xoa();
			L5=0;c21=0;tre(10);
		}
	}
}
//----------------------------------------
void L_Appear_RtoL(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c15=0;tre(10);xoa();
			L2=0;c15=0;tre(10);xoa();
			L3=0;c15=0;tre(10);xoa();
			L4=0;c15=0;tre(10);xoa();
			L5=0;c15=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c14=c15=0;tre(10);xoa();
			L2=0;c14=0;tre(10);xoa();
			L3=0;c14=0;tre(10);xoa();
			L4=0;c14=0;tre(10);xoa();
			L5=0;c14=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=c14=c15=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c13=0;tre(10);xoa();
			L4=0;c13=0;tre(10);xoa();
			L5=0;c13=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c12=c13=c14=c15=0;tre(10);xoa();
			L2=0;c12=0;tre(10);xoa();
			L3=0;c12=0;tre(10);xoa();
			L4=0;c12=0;tre(10);xoa();
			L5=0;c12=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
			L2=0;c11=0;tre(10);xoa();
			L3=0;c11=0;tre(10);xoa();
			L4=0;c11=0;tre(10);xoa();
			L5=0;c11=0;tre(10);
		}
	}
}
//----------------------------------------
void L_vRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
			L2=0;c11=0;tre(10);xoa();
			L3=0;c11=0;tre(10);xoa();
			L4=0;c11=0;tre(10);xoa();
			L5=0;c11=0;tre(10);
		}
		//stage 2
		for(k=0;k>time;k++){
			xoa();
			L1=0;c9=c13=c17=0;tre(10);xoa();
			L2=0;c9=0;tre(10);xoa();
			L3=0;c9=0;tre(10);xoa();
			L4=0;c9=0;tre(10);xoa();
			L5=0;c9=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c3=c8=c13=c18=c23=0;tre(10);xoa();
			L2=0;c3=0;tre(10);xoa();
			L3=0;c3=0;tre(10);xoa();
			L4=0;c3=0;tre(10);xoa();
			L5=0;c3=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c7=c13=c19=0;tre(10);xoa();
			L2=0;c7=0;tre(10);xoa();
			L3=0;c7=0;tre(10);xoa();
			L4=0;c7=0;tre(10);xoa();
			L5=0;c7=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c15=c14=c13=c12=c11=0;tre(10);xoa();
			L2=0;c15=0;tre(10);xoa();
			L3=0;c15=0;tre(10);xoa();
			L4=0;c15=0;tre(10);xoa();
			L5=0;c15=0;tre(10);xoa();
		}
		//stage 6
		for(k=0;k>time;k++){
			xoa();
			L1=0;c17=c9=c13=0;tre(10);xoa();
			L2=0;c17=0;tre(10);xoa();
			L3=0;c17=0;tre(10);xoa();
			L4=0;c17=0;tre(10);xoa();
			L5=0;c17=0;tre(10);
		}
		//stage 7
		for(k=0;k<time;k++){
			xoa();
			L1=0;c23=c18=c13=c8=c3=0;tre(10);xoa();
			L2=0;c23=0;tre(10);xoa();
			L3=0;c23=0;tre(10);xoa();
			L4=0;c23=0;tre(10);xoa();
			L5=0;c23=0;tre(10);
		}
		//stage 8
		for(k=0;k<time;k++){
			xoa();
			L1=0;c19=c13=c7=0;tre(10);xoa();
			L2=0;c19=0;tre(10);xoa();
			L3=0;c19=0;tre(10);xoa();
			L4=0;c19=0;tre(10);xoa();
			L5=0;c19=0;tre(10);
		}
	}
}
//----------------------------------------
void L_hRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
			L2=0;c11=0;tre(10);xoa();
			L3=0;c11=0;tre(10);xoa();
			L4=0;c11=0;tre(10);xoa();
			L5=0;c11=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c2=c3=c4=0;tre(10);xoa();
			L2=0;c9=0;tre(10);xoa();
			L3=0;c12=0;tre(10);xoa();
			L4=0;c17=0;tre(10);xoa();
			L5=0;c22=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L3=0;c1=c2=c3=c4=c5=c10=c11=c20=c21=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c22=0;tre(10);xoa();
			L2=0;c19=0;tre(10);xoa();
			L3=0;c12=0;tre(10);xoa();
			L4=0;c9=0;tre(10);xoa();
			L5=0;c2=c3=c4=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=0;tre(10);xoa();
			L2=0;c11=0;tre(10);xoa();
			L3=0;c11=0;tre(10);xoa();
			L4=0;c11=0;tre(10);xoa();
			L5=0;c11=c12=c13=c14=c15=0;tre(10);
		}
		//stage 6
		for(k=0;k<time;k++){
			xoa();
			L1=0;c2=0;tre(10);xoa();
			L2=0;c9=0;tre(10);xoa();
			L3=0;c12=0;tre(10);xoa();
			L4=0;c19=0;tre(10);xoa();
			L5=0;c22=c23=c24=0;tre(10);
		}
		//stage 7
		for(k=0;k<time;k++){
			xoa();
			L3=0;c21=c22=c23=c24=c25=c10=c11=c20=c1=0;tre(10);
		}
		//stage 8
		for(k=0;k<time;k++){
			xoa();
			L1=0;c22=c23=c24=0;tre(10);xoa();
			L2=0;c19=0;tre(10);xoa();
			L3=0;c12=0;tre(10);xoa();
			L4=0;c9=0;tre(10);xoa();
			L5=0;c2=0;tre(10);
		}
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c12=c13=c14=c15=0;tre(10);xoa();
			L2=0;c11=0;tre(10);xoa();
			L3=0;c11=0;tre(10);xoa();
			L4=0;c11=0;tre(10);xoa();
			L5=0;c11=0;tre(10);
		}
	}
}
//----------------------------------------
void O_FrontToBack(unsigned int time,unsigned char n){
	for(i=0;i<n;i++){
		//1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c2=c3=c4=0;tre(50);xoa();
			L2=0;c1=c5=0;tre(50);xoa();
			L3=0;c1=c5=0;tre(50);xoa();
			L4=0;c1=c5=0;tre(50);xoa();
			L5=0;c2=c3=c4=0;tre(50);
		}
		//2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c7=c8=c9=0;tre(50);xoa();
			L2=0;c6=c10=0;tre(50);xoa();
			L3=0;c6=c10=0;tre(50);xoa();
			L4=0;c6=c10=0;tre(50);xoa();
			L5=0;c7=c8=c9=0;tre(50);
		}
		//3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c12=c13=c14=0;tre(50);xoa();
			L2=0;c11=c15=0;tre(50);xoa();
			L3=0;c11=c15=0;tre(50);xoa();
			L4=0;c11=c15=0;tre(50);xoa();
			L5=0;c12=c13=c14=0;tre(50);
			}
		//4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c17=c18=c19=0;tre(50);xoa();
			L2=0;c16=c20=0;tre(50);xoa();
			L3=0;c16=c20=0;tre(50);xoa();
			L4=0;c16=c20=0;tre(50);xoa();
			L5=0;c17=c18=c19=0;tre(50);
		}
		//5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c22=c23=c24=0;tre(50);xoa();
			L2=0;c21=c25=0;tre(50);xoa();
			L3=0;c21=c25=0;tre(50);xoa();
			L4=0;c21=c25=0;tre(50);xoa();
			L5=0;c22=c23=c24=0;tre(50);
			}
	}
}
//----------------------------------------
void O_Appear_RtoL(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L2=0;c15=0;tre(10);xoa();
			L3=0;c15=0;tre(10);xoa();
			L4=0;c15=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c15=0;tre(10);xoa();
			L2=0;c14=0;tre(10);xoa();
			L3=0;c14=0;tre(10);xoa();
			L4=0;c14=0;tre(10);xoa();
			L5=0;c15=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c14=c15=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c13=0;tre(10);xoa();
			L4=0;c13=0;tre(10);xoa();
			L5=0;c14=c15=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=c14=c15=0;tre(10);xoa();
			L2=0;c12=0;tre(10);xoa();
			L3=0;c12=0;tre(10);xoa();
			L4=0;c12=0;tre(10);xoa();
			L5=0;c13=c14=c15=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c12=c13=c14=0;tre(10);xoa();
			L2=0;c11=c15=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c12=c12=c14=0;tre(10);
		}
	}
}
//----------------------------------------
void O_vRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
	for(j=0;j<2;j++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c12=c13=c14=0;tre(10);xoa();
			L2=0;c11=c15=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c12=c12=c14=0;tre(10);
		}
		//stage 2
		for(k=0;k>time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c9=c17=0;tre(10);xoa();
			L3=0;c9=c17=0;tre(10);xoa();
			L4=0;c9=c17=0;tre(10);xoa();
			L5=0;c13=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c8=c13=c18=0;tre(10);xoa();
			L2=0;c3=c23=0;tre(10);xoa();
			L3=0;c3=c23=0;tre(10);xoa();
			L4=0;c3=c23=0;tre(10);xoa();
			L5=0;c8=c13=c18=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c7=c19=0;tre(10);xoa();
			L3=0;c7=c19=0;tre(10);xoa();
			L4=0;c7=c19=0;tre(10);xoa();
			L5=0;c13=0;tre(10);
		}
	}
	}
}
//----------------------------------------
void O_hRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
	for(j=0;j<2;j++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c12=c13=c14=0;tre(10);xoa();
			L2=0;c11=c15=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c12=c13=c14=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c3=0;tre(10);xoa();
			L2=0;c7=c9=0;tre(10);xoa();
			L3=0;c12=c14=0;tre(10);xoa();
			L4=0;c17=c19=0;tre(10);xoa();
			L5=0;c23=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L3=0;c2=c3=c4=c10=c6=c11=c15=c16=c21=c22=c23=c24=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c23=0;tre(10);xoa();
			L2=0;c17=c19=0;tre(10);xoa();
			L3=0;c12=c14=0;tre(10);xoa();
			L4=0;c7=c9=0;tre(10);xoa();
			L5=0;c3=0;tre(10);
		}
	}
	}
}
//----------------------------------------
void V_FrontToBack(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c3=0;tre(10);xoa();
			L2=0;c2=c4=0;tre(10);xoa();
			L3=0;c1=c5=0;tre(10);xoa();
			L4=0;c1=c5=0;tre(10);xoa();
			L5=0;c1=c5=0;tre(10);
		}
		//2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c8=0;tre(10);xoa();
			L2=0;c7=c9=0;tre(10);xoa();
			L3=0;c6=c10=0;tre(10);xoa();
			L4=0;c6=c10=0;tre(10);xoa();
			L5=0;c6=c10=0;tre(10);
		}
		//3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13;tre(10);xoa();
			L2=0;c12=c14=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
		//4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c18=0;tre(10);xoa();
			L2=0;c17=c19=0;tre(10);xoa();
			L3=0;c16=c20=0;tre(10);xoa();
			L4=0;c16=c20=0;tre(10);xoa();
			L5=0;c16=c20=0;tre(10);
		}
		//5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c23=0;tre(10);xoa();
			L2=0;c22=c24=0;tre(10);xoa();
			L3=0;c21=c25=0;tre(10);xoa();
			L4=0;c21=c25=0;tre(10);xoa();
			L5=0;c21=c25=0;tre(10);
		}
	}
}
//----------------------------------------
void V_Appear_RtoL(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L3=0;c15=0;tre(10);xoa();
			L4=0;c15=0;tre(10);xoa();
			L5=0;c15=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L2=0;c15=0;tre(10);xoa();
			L3=0;c14=0;tre(10);xoa();
			L4=0;c14=0;tre(10);xoa();
			L5=0;c14=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c15=0;tre(10);xoa();
			L2=0;c14=0;tre(10);xoa();
			L3=0;c13=0;tre(10);xoa();
			L4=0;c13=0;tre(10);xoa();
			L5=0;c13=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c14=0;tre(10);xoa();
			L2=0;c13=c15=0;tre(10);xoa();
			L3=0;c12=0;tre(10);xoa();
			L4=0;c12=0;tre(10);xoa();
			L5=0;c12=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c12=c14=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
	}
}
//----------------------------------------
void V_vRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
	for(j=0;j<2;j++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c12=c14=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
		//stage 2
		for(k=0;k>time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c9=c17=0;tre(10);xoa();
			L3=0;c1=c25=0;tre(10);xoa();
			L4=0;c1=c25=0;tre(10);xoa();
			L5=0;c1=c25=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c8=c18=0;tre(10);xoa();
			L3=0;c3=c23=0;tre(10);xoa();
			L4=0;c3=c23=0;tre(10);xoa();
			L5=0;c3=c23=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c12=c14=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
	}
	}
}
//----------------------------------------
void V_hRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c12=c14=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c3=0;tre(10);xoa();
			L2=0;c9=c7=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c20=c16=0;tre(10);xoa();
			L5=0;c21=c25=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L3=0;c3=c9=c7=c11=c15=c20=c16=c21=c25=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c21=c25=0;tre(10);xoa();
			L2=0;c20=c16=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c9=c7=0;tre(10);xoa();
			L5=0;c3=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c15=0;tre(10);xoa();
			L2=0;c11=c15=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c12=c14=0;tre(10);xoa();
			L5=0;c13=0;tre(10);
		}
		//stage 6
		for(k=0;k<time;k++){
			xoa();
			L1=0;c1=c5=0;tre(10);xoa();
			L2=0;c10=c6=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c17=c19=0;tre(10);xoa();
			L5=0;c23=0;tre(10);
		}
		//stage 7
		for(k=0;k<time;k++){
			xoa();
			L3=0;c23=c19=c17=c11=c15=c10=c6=c1=c5=0;tre(10);
		}
		//stage 8
		for(k=0;k<time;k++){
			xoa();
			L5=0;c1=c5=0;tre(10);xoa();
			L4=0;c10=c6=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L2=0;c17=c19=0;tre(10);xoa();
			L1=0;c23=0;tre(10);
		}
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c12=c14=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
	}
}
//----------------------------------------
void Y_FrontToBack(unsigned int time,unsigned char n){
	for(i=0;i<n;i++){
		//1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c3=0;tre(10);xoa();
			L2=0;c3=0;tre(10);xoa();
			L3=0;c2=c4=0;tre(10);xoa();
			L4=0;c1=c5=0;tre(10);xoa();
			L5=0;c1=c5=0;tre(10);
		}
		//2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c8=0;tre(10);xoa();
			L2=0;c8=0;tre(10);xoa();
			L3=0;c7=c9=0;tre(10);xoa();
			L4=0;c10=c6=0;tre(10);xoa();
			L5=0;c10=c6=0;tre(10);
			}
		//3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c12=c14=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
		//4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c18=0;tre(10);xoa();
			L2=0;c18=0;tre(10);xoa();
			L3=0;c17=c19=0;tre(10);xoa();
			L4=0;c20=c16=0;tre(10);xoa();
			L5=0;c20=c16=0;tre(10);
		}
		//5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c23=0;tre(10);xoa();
			L2=0;c23=0;tre(10);xoa();
			L3=0;c22=c24=0;tre(10);xoa();
			L4=0;c21=c25=0;tre(10);xoa();
			L5=0;c21=c25=0;tre(10);
		}
	}
}
//----------------------------------------
void Y_Appear_RtoL(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L4=0;c15=0;tre(10);xoa();
			L5=0;c15=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L3=0;c15=0;tre(10);xoa();
			L4=0;c14=0;tre(10);xoa();
			L5=0;c14=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c15=0;tre(10);xoa();
			L2=0;c15=0;tre(10);xoa();
			L3=0;c14=0;tre(10);xoa();
			L4=0;c13=0;tre(10);xoa();
			L5=0;c13=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c14=0;tre(10);xoa();
			L2=0;c14=0;tre(10);xoa();
			L3=0;c13=c15=0;tre(10);xoa();
			L4=0;c12=0;tre(10);xoa();
			L5=0;c12=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c12=c14=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
	}
}
//----------------------------------------
void Y_vRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
	for(j=0;j<2;j++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c12=c14=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
		//stage 2
		for(k=0;k>time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c9=c17=0;tre(10);xoa();
			L4=0;c1=c25=0;tre(10);xoa();
			L5=0;c1=c25=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c8=c18=0;tre(10);xoa();
			L4=0;c3=c23=0;tre(10);xoa();
			L5=0;c3=c23=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c7=c19=0;tre(10);xoa();
			L4=0;c5=c21=0;tre(10);xoa();
			L5=0;c5=c21=0;tre(10);
		}
	}
	}
}
//----------------------------------------
void Y_hRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c12=c14=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c3=0;tre(10);xoa();
			L2=0;c8=0;tre(10);xoa();
			L3=0;c12=c14=0;tre(10);xoa();
			L4=0;c20=c16=0;tre(10);xoa();
			L5=0;c21=c25=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L3=0;c3=c8=c12=c14=c20=c16=c21=c25=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c21=c25=0;tre(10);xoa();
			L2=0;c20=c16=0;tre(10);xoa();
			L3=0;c12=c14=0;tre(10);xoa();
			L4=0;c8=0;tre(10);xoa();
			L5=0;c3=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c15=0;tre(10);xoa();
			L2=0;c11=c15=0;tre(10);xoa();
			L3=0;c12=c14=0;tre(10);xoa();
			L4=0;c13=0;tre(10);xoa();
			L5=0;c13=0;tre(10);
		}
		//stage 6
		for(k=0;k<time;k++){
			xoa();
			L1=0;c1=c5=0;tre(10);xoa();
			L2=0;c10=c6=0;tre(10);xoa();
			L3=0;c12=c14=0;tre(10);xoa();
			L4=0;c18=0;tre(10);xoa();
			L5=0;c23=0;tre(10);
		}
		//stage 7
		for(k=0;k<time;k++){
			xoa();
			L3=0;c23=c18=c12=c14=c10=c6=c1=c5=0;tre(10);
		}
		//stage 8
		for(k=0;k<time;k++){
			xoa();
			L5=0;c1=c5=0;tre(10);xoa();
			L4=0;c10=c6=0;tre(10);xoa();
			L3=0;c12=c14=0;tre(10);xoa();
			L2=0;c18=0;tre(10);xoa();
			L1=0;c23=0;tre(10);
		}
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c12=c14=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
	}
}
//----------------------------------------
void U_FrontToBack(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c2=c3=c4=0;tre(10);xoa();
			L2=0;c1=c5=0;tre(10);xoa();
			L3=0;c1=c5=0;tre(10);xoa();
			L4=0;c1=c5=0;tre(10);xoa();
			L5=0;c1=c5=0;tre(10);			
		}
		//2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c7=c8=c9=0;tre(10);xoa();
			L2=0;c6=c10=0;tre(10);xoa();
			L3=0;c6=c10=0;tre(10);xoa();
			L4=0;c6=c10=0;tre(10);xoa();
			L5=0;c6=c10=0;tre(10);
		}
		//310
		for(k=0;k<time;k++){
			xoa(); 
			L1=0;c12=c13=c14=0;tre(10);xoa();
			L2=0;c11=c15=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
		//4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c17=c18=c19=0;tre(10);xoa();
			L2=0;c16=c20=0;tre(10);xoa();
			L3=0;c16=c20=0;tre(10);xoa();
			L4=0;c16=c20=0;tre(10);xoa();
			L5=0;c16=c20=0;tre(10);
		}
		//5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c22=c23=c24=0;tre(10);xoa();
			L2=0;c21=c25=0;tre(10);xoa();
			L3=0;c21=c25=0;tre(10);xoa();
			L4=0;c21=c25=0;tre(10);xoa();
			L5=0;c21=c25=0;tre(10);
		}
	}
}
//----------------------------------------
void U_Appear_RtoL(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L2=0;c15=0;tre(10);xoa();
			L3=0;c15=0;tre(10);xoa();
			L4=0;c15=0;tre(10);xoa();
			L5=0;c15=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c15=0;tre(10);xoa();
			L2=0;c14=0;tre(10);xoa();
			L3=0;c14=0;tre(10);xoa();
			L4=0;c14=0;tre(10);xoa();
			L5=0;c14=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c14=c15=0;tre(10);xoa();
			L2=0;c13=0;tre(10);xoa();
			L3=0;c13=0;tre(10);xoa();
			L4=0;c13=0;tre(10);xoa();
			L5=0;c13=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=c14=c15=0;tre(10);xoa();
			L2=0;c12=0;tre(10);xoa();
			L3=0;c12=0;tre(10);xoa();
			L4=0;c12=0;tre(10);xoa();
			L5=0;c12=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c12=c13=c14=0;tre(10);xoa();
			L2=0;c11=c15=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
	}
}
void U_vRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
	for(j=0;j<2;j++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c12=c13=c14=0;tre(10);xoa();
			L2=0;c11=c15=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
		//stage 2
		for(k=0;k>time;k++){
			xoa();
			L1=0;c9=c13=c17=0;tre(10);xoa();
			L2=0;c1=c25=0;tre(10);xoa();
			L3=0;c1=c25=0;tre(10);xoa();
			L4=0;c1=c25=0;tre(10);xoa();
			L5=0;c1=c25=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c8=c13=c18=0;tre(10);xoa();
			L2=0;c3=c23=0;tre(10);xoa();
			L3=0;c3=c23=0;tre(10);xoa();
			L4=0;c3=c23=0;tre(10);xoa();
			L5=0;c3=c23=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c7=c13=c19=0;tre(10);xoa();
			L2=0;c5=c21=0;tre(10);xoa();
			L3=0;c5=c21=0;tre(10);xoa();
			L4=0;c5=c21=0;tre(10);xoa();
			L5=0;c5=c21=0;tre(10);
		}
	}
	}
}
//----------------------------------------
void U_hRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c12=c13=c14=0;tre(10);xoa();
			L2=0;c11=c15=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c2=c3=c4=0;tre(10);xoa();
			L2=0;c10=c6=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c20=c16=0;tre(10);xoa();
			L5=0;c21=c25=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L3=0;c2=c3=c4=c10=c6=c11=c15=c20=c16=c21=c25=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c21=c25=0;tre(10);xoa();
			L2=0;c20=c16=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c10=c6=0;tre(10);xoa();
			L5=0;c2=c3=c4=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c15=0;tre(10);xoa();
			L2=0;c11=c15=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c12=c13=c14=0;tre(10);
		}
		//stage 6
		for(k=0;k<time;k++){
			xoa();
			L1=0;c1=c5=0;tre(10);xoa();
			L2=0;c10=c6=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c20=c16=0;tre(10);xoa();
			L5=0;c22=c23=c24=0;tre(10);
		}
		//stage 7
		for(k=0;k<time;k++){
			xoa();
			L3=0;c22=c23=c24=c20=c16=c11=c15=c10=c6=c1=c5=0;tre(10);
		}
		//stage 8
		for(k=0;k<time;k++){
			xoa();
			L5=0;c1=c5=0;tre(10);xoa();
			L4=0;c10=c6=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L2=0;c16=c20=0;tre(10);xoa();
			L1=0;c22=c23=c24=0;tre(10);
		}
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c12=c13=c14=0;tre(10);xoa();
			L2=0;c11=c15=0;tre(10);xoa();
			L3=0;c11=c15=0;tre(10);xoa();
			L4=0;c11=c15=0;tre(10);xoa();
			L5=0;c11=c15=0;tre(10);
		}
	}
}
//----------------------------------------
void K_FontToBack(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c1=c4=0;tre(10);xoa();
			L2=0;c1=c3=0;tre(10);xoa();
			L3=0;c1=c2=0;tre(10);xoa();
			L4=0;c1=c3=0;tre(10);xoa();
			L5=0;c1=c4=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c10=c7=0;tre(10);xoa();
			L2=0;c10=c8=0;tre(10);xoa();
			L3=0;c10=c9=0;tre(10);xoa();
			L4=0;c10=c8=0;tre(10);xoa();
			L5=0;c10=c7=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c14=0;tre(10);xoa();
			L2=0;c11=c13=0;tre(10);xoa();
			L3=0;c11=c12=0;tre(10);xoa();
			L4=0;c11=c13=0;tre(10);xoa();
			L5=0;c11=c14=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c20=c17=0;tre(10);xoa();
			L2=0;c20=c18=0;tre(10);xoa();
			L3=0;c20=c19=0;tre(10);xoa();
			L4=0;c20=c18=0;tre(10);xoa();
			L5=0;c20=c17=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c21=c24=0;tre(10);xoa();
			L2=0;c21=c23=0;tre(10);xoa();
			L3=0;c21=c22=0;tre(10);xoa();
			L4=0;c21=c23=0;tre(10);xoa();
			L5=0;c21=c24=0;tre(10);
		}
	}
}
//----------------------------------------
void K_Appear_RtoL(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c15=0;tre(10);xoa();
			L2=0;c15=0;tre(10);xoa();
			L3=0;c15=0;tre(10);xoa();
			L4=0;c15=0;tre(10);xoa();
			L5=0;c15=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c14=0;tre(10);xoa();
			L2=0;c14=0;tre(10);xoa();
			L3=0;c14=c15=0;tre(10);xoa();
			L4=0;c14=0;tre(10);xoa();
			L5=0;c14=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c13=0;tre(10);xoa();
			L2=0;c13=c15=0;tre(10);xoa();
			L3=0;c13=c14=0;tre(10);xoa();
			L4=0;c13=c15=0;tre(10);xoa();
			L5=0;c13=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c12=c15=0;tre(10);xoa();
			L2=0;c12=c14=0;tre(10);xoa();
			L3=0;c12=c13=0;tre(10);xoa();
			L4=0;c12=c14=0;tre(10);xoa();
			L5=0;c12=c15=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c14=0;tre(10);xoa();
			L2=0;c11=c13=0;tre(10);xoa();
			L3=0;c11=c12=0;tre(10);xoa();
			L4=0;c11=c13=0;tre(10);xoa();
			L5=0;c11=c14=0;tre(10);
		}
	}
}
//----------------------------------------
void K_vRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c14=0;tre(10);xoa();
			L2=0;c11=c13=0;tre(10);xoa();
			L3=0;c11=c12=0;tre(10);xoa();
			L4=0;c11=c13=0;tre(10);xoa();
			L5=0;c11=c14=0;tre(10);
		}
		//stage 2
		for(k=0;k>time;k++){
			xoa();
			L1=0;c1=c17=0;tre(10);xoa();
			L2=0;c1=c13=0;tre(10);xoa();
			L3=0;c1=c9=0;tre(10);xoa();
			L4=0;c1=c13=0;tre(10);xoa();
			L5=0;c1=c17=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L1=0;c3=c18=0;tre(10);xoa();
			L2=0;c3=c13=0;tre(10);xoa();
			L3=0;c3=c8=0;tre(10);xoa();
			L4=0;c3=c13=0;tre(10);xoa();
			L5=0;c3=c18=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c5=c19=0;tre(10);xoa();
			L2=0;c5=c13=0;tre(10);xoa();
			L3=0;c5=c7=0;tre(10);xoa();
			L4=0;c5=c13=0;tre(10);xoa();
			L5=0;c5=c19=0;tre(10);
		}
		//stage 5
		for(k=0;k<time;k++){
			xoa();
			L1=0;c15=c12=0;tre(10);xoa();
			L2=0;c15=c13=0;tre(10);xoa();
			L3=0;c15=c14=0;tre(10);xoa();
			L4=0;c15=c13=0;tre(10);xoa();
			L5=0;c15=c12=0;tre(10);xoa();
		}
		//stage 6
		for(k=0;k>time;k++){
			xoa();
			L1=0;c25=c9=0;tre(10);xoa();
			L2=0;c25=c13=0;tre(10);xoa();
			L3=0;c25=c17=0;tre(10);xoa();
			L4=0;c25=c13=0;tre(10);xoa();
			L5=0;c25=c9=0;tre(10);
		}
		//stage 7
		for(k=0;k<time;k++){
			xoa();
			L1=0;c23=c8=0;tre(10);xoa();
			L2=0;c23=c13=0;tre(10);xoa();
			L3=0;c23=c18=0;tre(10);xoa();
			L4=0;c23=c13=0;tre(10);xoa();
			L5=0;c23=c8=0;tre(10);
		}
		//stage 8
		for(k=0;k<time;k++){
			xoa();
			L1=0;c21=c7=0;tre(10);xoa();
			L2=0;c21=c13=0;tre(10);xoa();
			L3=0;c21=c19=0;tre(10);xoa();
			L4=0;c21=c13=0;tre(10);xoa();
			L5=0;c21=c7=0;tre(10);
		}
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c14=0;tre(10);xoa();
			L2=0;c11=c13=0;tre(10);xoa();
			L3=0;c11=c12=0;tre(10);xoa();
			L4=0;c11=c13=0;tre(10);xoa();
			L5=0;c11=c14=0;tre(10);
		}
	}
}
//----------------------------------------
void K_hRotate(unsigned int time, unsigned char n){
	for(i=0;i<n;i++){
	for(j=0;j<2;j++){
		//stage 1
		for(k=0;k<time;k++){
			xoa();
			L1=0;c11=c14=0;tre(10);xoa();
			L2=0;c11=c13=0;tre(10);xoa();
			L3=0;c11=c12=0;tre(10);xoa();
			L4=0;c11=c13=0;tre(10);xoa();
			L5=0;c11=c14=0;tre(10);
		}
		//stage 2
		for(k=0;k<time;k++){
			xoa();
			L1=0;c1=c4=0;tre(10);xoa();
			L2=0;c10=c8=0;tre(10);xoa();
			L3=0;c11=c12=0;tre(10);xoa();
			L4=0;c20=c18=0;tre(10);xoa();
			L5=0;c21=c24=0;tre(10);
		}
		//stage 3
		for(k=0;k<time;k++){
			xoa();
			L3=0;c1=c4=c10=c8=c11=c12=c20=c18=c21=c24=0;tre(10);
		}
		//stage 4
		for(k=0;k<time;k++){
			xoa();
			L1=0;c21=c24=0;tre(10);xoa();
			L2=0;c20=c18=0;tre(10);xoa();
			L3=0;c11=c13=0;tre(10);xoa();
			L4=0;c10=c8=0;tre(10);xoa();
			L5=0;c1=c4=0;tre(10);
		}
	}
	}
}
//----------------------------------------
void phaohoa(unsigned int time,unsigned char n)
	{
	xoa();
	for(i=0;i<n;i++)
		{
		xoa();	
		L3=0;c13=0;	
		tre(time);

		for(k=0;k<100;k++)
			{
			xoa();
			L2=0;c7=c8=c9=c14=c19=c18=c17=c12=0;tre(50);
			xoa();
			L3=0;c7=c8=c9=c14=c19=c18=c17=c12=0;tre(50);
			xoa();
			L4=0;c7=c8=c9=c14=c19=c18=c17=c12=0;tre(50);
			}
		tre(time);
		
		for(k=0;k<100;k++)
			{
			xoa();
			L1=0;tatcacot();tre(50);
			xoa();
			L2=0;tatcacot();tre(50);
			xoa();
			L3=0;tatcacot();tre(50);
			xoa();
			L4=0;tatcacot();tre(50);
			xoa();
			L5=0;tatcacot();tre(50);
			}
		tre(time);
		}
	}
//----------------------------------------
void quayngang(unsigned int time,unsigned char n)
	{
	for(i=0;i<n;i++)
		{
		for(k=0;k<time;k++)
			{
			xoa();	
			L3=0;tatcacot();tre(20);
			}	

		for(k=0;k<time;k++)
			{
			xoa();
			L2=0;c1=c2=c3=c4=c5=0;tre(20);
			xoa();
			L3=0;c11=c12=c13=c14=c15=0;tre(20);
			xoa();
			L4=0;c21=c22=c23=c24=c25=0;tre(20);
			}
		
		for(k=0;k<time;k++)
			{
			xoa();
			L1=0;c1=c2=c3=c4=c5=0;tre(20);
			xoa();
			L2=0;c6=c7=c8=c9=c10=0;tre(20);
			xoa();
			L3=0;c11=c12=c13=c14=c15=0;tre(20);
			xoa();
			L4=0;c16=c17=c18=c19=c20=0;tre(20);
			xoa();
			L5=0;c21=c22=c23=c24=c25=0;tre(20);
			}

		for(k=0;k<time;k++)
			{
			xoa();
			L1=0;c6=c7=c8=c9=c10=0;tre(20);
			xoa();
			L3=0;c11=c12=c13=c14=c15=0;tre(20);
			xoa();
			L5=0;c16=c17=c18=c19=c20=c25=0;tre(20);
			}

		for(k=0;k<time;k++)
			{
			xoa();
			L1=L2=L3=L4=L5=0;c11=c12=c13=c14=c15=0;tre(20);
			}

		for(k=0;k<time;k++)
			{
			xoa();
			L1=0;c16=c17=c18=c19=c20=0;tre(20);
			xoa();
			L3=0;c11=c12=c13=c14=c15=0;tre(20);
			xoa();
			L5=0;c6=c7=c8=c9=c10=0;tre(20);
			}

		for(k=0;k<time;k++)
			{
			xoa();
			L1=0;c21=c22=c23=c24=c25=0;tre(20);
			xoa();
			L2=0;c16=c17=c18=c19=c20=0;tre(20);
			xoa();
			L3=0;c11=c12=c13=c14=c15=0;tre(20);
			xoa();
			L4=0;c6=c7=c8=c9=c10=0;tre(20);
			xoa();
			L5=0;c1=c2=c3=c4=c5=0;tre(20);
			}

		for(k=0;k<time;k++)
			{
			xoa();
			L2=0;c21=c22=c23=c24=c25=0;tre(20);
			xoa();
			L3=0;c11=c12=c13=c14=c15=0;tre(20);
			xoa();
			L4=0;c1=c2=c3=c4=c5=0;tre(20);
			}
		for(k=0;k<time;k++)
			{
			xoa();	
			L3=0;tatcacot();tre(20);
			}
		}
	}
//----------------------------------------
void banphao(unsigned int time,unsigned char n)
  	{
  	for(i=0;i<n;i++)
		{
		xoa();
		c13=0;L1=0;tre(time);L1=1;L2=0;tre(time);L2=1;
		L3=0;tre(time);L3=1;L4=0;tre(time);L4=1;L5=0;tre(time);L5=1;
		xoa();
		L5=0;c7=c8=c9=c14=c19=c18=c17=c12=0;tre(time);
		
		xoa();
		L5=0;c1=c2=c3=c4=c5=c10=c15=c20=c25=c24=c23=c22=c21=c16=c11=c6=0;tre(time);
		
		xoa();
		L4=0;c1=c2=c3=c4=c5=c10=c15=c20=c25=c24=c23=c22=c21=c16=c11=c6=0;tre(time);
		
		xoa();
		L3=0;c1=c2=c3=c4=c5=c10=c15=c20=c25=c24=c23=c22=c21=c16=c11=c6=0;tre(time);
		
		xoa();
		L2=0;c1=c2=c3=c4=c5=c10=c15=c20=c25=c24=c23=c22=c21=c16=c11=c6=0;tre(time);
		
		xoa();
		L1=0;c1=c2=c3=c4=c5=c10=c15=c20=c25=c24=c23=c22=c21=c16=c11=c6=0;tre(time);
		}
	}	
//========================================
/*Modify Effective By Zero*/
//========================================
void rongran_layer(unsigned int time, unsigned char n){
	xoa();
	//sang dan
	//1
	L1=0;
	c21=0;tre(time);xoa();
	c21=c20=0;tre(time);xoa();
	c21=c20=c11=0;tre(time);xoa();
	c21=c20=c11=c10=0;tre(time);xoa();
	c21=c20=c11=c10=c1=0;tre(time);xoa();
	//2
	c21=c20=c11=c10=c1=c2=0;tre(time);xoa();
	c21=c20=c11=c10=c1=c2=c3=0;tre(time);xoa();
	c21=c20=c11=c10=c1=c2=c3=c4=0;tre(time);xoa();
	c21=c20=c11=c10=c1=c2=c3=c4=c5=0;tre(time);xoa();
	c21=c20=c11=c10=c1=c2=c3=c4=c5=c6=0;tre(time);xoa();
	//3
	c21=c20=c11=c10=c1=c2=c3=c4=c5=c6=c15=0;tre(time);xoa();
	c21=c20=c11=c10=c1=c2=c3=c4=c5=c6=c15=c16=0;tre(time);xoa();
	c21=c20=c11=c10=c1=c2=c3=c4=c5=c6=c15=c16=c25=0;tre(time);xoa();
	c21=c20=c11=c10=c1=c2=c3=c4=c5=c6=c15=c16=c25=c24=0;tre(time);xoa();
	c21=c20=c11=c10=c1=c2=c3=c4=c5=c6=c15=c16=c25=c24=c23=0;tre(time);xoa();
	//4
	c21=c20=c11=c10=c1=c2=c3=c4=c5=c6=c15=c16=c25=c24=c23=c22=0;tre(time);xoa();
	c21=c20=c11=c10=c1=c2=c3=c4=c5=c6=c15=c16=c25=c24=c23=c22=c19=0;tre(time);xoa();
	c21=c20=c11=c10=c1=c2=c3=c4=c5=c6=c15=c16=c25=c24=c23=c22=c19=c12=0;tre(time);xoa();
	c21=c20=c11=c10=c1=c2=c3=c4=c5=c6=c15=c16=c25=c24=c23=c22=c19=c12=c9=0;tre(time);xoa();
	c21=c20=c11=c10=c1=c2=c3=c4=c5=c6=c15=c16=c25=c24=c23=c22=c19=c12=c9=c8=0;tre(time);xoa();
	//5
	c21=c20=c11=c10=c1=c2=c3=c4=c5=c6=c15=c16=c25=c24=c23=c22=c19=c12=c9=c8=c7=0;tre(time);xoa();
	c21=c20=c11=c10=c1=c2=c3=c4=c5=c6=c15=c16=c25=c24=c23=c22=c19=c12=c9=c8=c7=c14=0;tre(time);xoa();
	c21=c20=c11=c10=c1=c2=c3=c4=c5=c6=c15=c16=c25=c24=c23=c22=c19=c12=c9=c8=c7=c14=c17=0;tre(time);xoa();
	c21=c20=c11=c10=c1=c2=c3=c4=c5=c6=c15=c16=c25=c24=c23=c22=c19=c12=c9=c8=c7=c14=c17=c18=0;tre(time);xoa();
	tatcacot();tre(time);xoa();
	//tat dan
	//1
	c20=c11=c10=c1=c2=c3=c4=c5=c6=c15=c16=c25=c24=c23=c22=c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c11=c10=c1=c2=c3=c4=c5=c6=c15=c16=c25=c24=c23=c22=c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c10=c1=c2=c3=c4=c5=c6=c15=c16=c25=c24=c23=c22=c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c1=c2=c3=c4=c5=c6=c15=c16=c25=c24=c23=c22=c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c2=c3=c4=c5=c6=c15=c16=c25=c24=c23=c22=c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	//2
	c3=c4=c5=c6=c15=c16=c25=c24=c23=c22=c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c4=c5=c6=c15=c16=c25=c24=c23=c22=c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c5=c6=c15=c16=c25=c24=c23=c22=c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c6=c15=c16=c25=c24=c23=c22=c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c15=c16=c25=c24=c23=c22=c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	//3
	c16=c25=c24=c23=c22=c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c25=c24=c23=c22=c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c24=c23=c22=c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c23=c22=c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c22=c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	//4
	c19=c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c12=c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c9=c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c8=c7=c14=c17=c18=c13=0;tre(time);xoa();
	c7=c14=c17=c18=c13=0;tre(time);xoa();
	//5
	c14=c17=c18=c13=0;tre(time);xoa();
	c17=c18=c13=0;tre(time);xoa();
	c18=c13=0;tre(time);xoa();
	c13=0;tre(time);xoa();tre(time);
	//Blink Center
	for(i=0;i<n;i++){
		xoa();
		c13=0;
		tre((int)time);
		xoa();
		tre((int)time);
	}
	for(i=0;i<n;i++){
		xoa();
		c13=0;
		tre((int)time/2);
		xoa();
		tre((int)time/2);
	}
	for(i=0;i<n;i++){
		xoa();
		c13=0;
		tre((int)time/4);
		xoa();
		tre((int)time/4);
	}
	for(i=0;i<n*2;i++){
		xoa();
		c13=0;
		tre((int)time/10);
		xoa();
		tre((int)time/10);
	}
}
void leoTop_thehien(unsigned int time, unsigned char n){
	xoa();
	//Lep Top
	L1=0;c13=0;tre(time);xoa();
	L1=L2=0;c13=0;tre(time);xoa();
	L1=L2=L3=0;c13=0;tre(time);xoa();
	L1=L2=L3=L4=0;c13=0;tre(time);xoa();
	L1=L2=L3=L4=L5=0;c13=0;tre(time);xoa();
	//Hinh Vuong
	for(i=0;i<time;i++){
		L1=L2=L3=L4=0;c13=0;tre(20);xoa();
		L5=0;c13=c7=c8=c9=c12=c14=c17=c18=c19=0;tre(20);xoa();
	}
	for(i=0;i<time;i++){
		L1=L2=L3=L4=0;c13=0;tre(20);xoa();
		tatcacot();tre(20);xoa();
	}
	for(i=0;i<time;i++){
		L1=L2=L3=L4=0;c13=0;tre(20);xoa();
		L5=0;c13=c7=c8=c9=c12=c14=c17=c18=c19=0;tre(20);xoa();
	}
	L1=L2=L3=L4=L5=0;c13=0;tre(time);xoa();
	//Trai tim
	for(i=0;i<time;i++){
		L1=L2=L3=L4=0;c13=0;tre(20);xoa();
		L5=0;c13=0;c17=c19=c11=c15=c7=c9=c3=0;tre(20);xoa();
	}
	for(i=0;i<time;i++){
		L1=L2=L3=L4=0;c13=0;tre(20);xoa();
		L5=0;c13=0;c18=c22=c24=c16=c20=c11=c15=c7=c9=c3=0;tre(20);xoa();
	}
	for(i=0;i<time;i++){
		L1=L2=L3=L4=0;c13=0;tre(20);xoa();
		L5=0;c13=0;c17=c19=c11=c15=c7=c9=c3=0;tre(20);xoa();
	}
	L1=L2=L3=L4=L5=0;c13=0;tre(time);xoa();
}
void Rotate_Drop(unsigned int time, unsigned char n){
		xoa();
		//5
		for(i=0;i<time;i++){
			L1=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L2=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L3=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L4=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L5=0;c13=0;c1=c9=c17=c25=0;tre(20);xoa();
		}
		//4
		for(i=0;i<time;i++){
			L1=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L2=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L3=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L4=0;c13=0;c1=c9=c17=c25=0;tre(20);xoa();
			L5=0;c13=0;c3=c8=c18=c23=0;tre(20);xoa();
		}
		//3
		for(i=0;i<time;i++){
			L1=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L2=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L3=0;c13=0;c1=c9=c17=c25=0;tre(20);xoa();
			L4=0;c13=0;c3=c8=c18=c23=0;tre(20);xoa();
			L5=0;c13=0;c5=c7=c19=c21=0;tre(20);xoa();
		}
		//2
		for(i=0;i<time;i++){
			L1=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L2=0;c13=0;c1=c9=c17=c25=0;tre(20);xoa();
			L3=0;c13=0;c3=c8=c18=c23=0;tre(20);xoa();
			L4=0;c13=0;c5=c7=c19=c21=0;tre(20);xoa();
			L5=0;c13=0;c14=c15=c11=c12=0;tre(20);xoa();
		}
		//1
		for(i=0;i<time;i++){
			L1=0;c13=0;c1=c9=c17=c25=0;tre(20);xoa();
			L2=0;c13=0;c3=c8=c18=c23=0;tre(20);xoa();
			L3=0;c13=0;c5=c7=c19=c21=0;tre(20);xoa();
			L4=0;c13=0;c14=c15=c11=c12=0;tre(20);xoa();
			L5=0;c13=0;c17=c25=c1=c9=0;tre(20);xoa();
		}
		//0
		for(i=0;i<time;i++){
			L1=0;c13=0;c3=c8=c18=c23=0;tre(20);xoa();
			L2=0;c13=0;c5=c7=c19=c21=0;tre(20);xoa();
			L3=0;c13=0;c14=c15=c11=c12=0;tre(20);xoa();
			L4=0;c13=0;c17=c25=c1=c9=0;tre(20);xoa();
			L5=0;c13=0;c3=c8=c18=c23=0;tre(20);xoa();
		}
		//-1
		for(i=0;i<time;i++){
			L1=0;c13=0;c5=c7=c19=c21=0;tre(20);xoa();
			L2=0;c13=0;c14=c15=c11=c12=0;tre(20);xoa();
			L3=0;c13=0;c17=c25=c1=c9=0;tre(20);xoa();
			L4=0;c13=0;c3=c8=c18=c23=0;tre(20);xoa();
			L5=0;c13=0;c14=c15=c11=c12=0;tre(20);xoa();
		}
}
void Rotate_snowDown(unsigned int time, unsigned char n){
	xoa();
	//Lep Top
	L1=0;c13=0;tre(time);xoa();
	L1=L2=0;c13=0;tre(time);xoa();
	L1=L2=L3=0;c13=0;tre(time);xoa();
	L1=L2=L3=L4=0;c13=0;tre(time);xoa();
	L1=L2=L3=L4=L5=0;c13=0;tre(time);xoa();
	//Tao ong phun Snow
	for(i=0;i<time;i++){
		L1=L2=L3=L4=0;c13=0;tre(20);xoa();
		L5=0;c13=c12=c14=0;tre(20);xoa();
	}
	for(i=0;i<time;i++){
		L1=L2=L3=L4=0;c13=0;tre(20);xoa();
		L5=0;c13=c12=c14=c11=c10=0;tre(20);xoa();
	}
	//Rotate snow-down
		//Prepare
		for(j=0;j<3;j++){
			for(i=0;i<time;i++){
			L1=L2=L3=L4=0;c13=0;tre(20);xoa();
			L5=0;c13=c12=c14=c11=c15=0;tre(20);xoa();
			}
			xoa();tre(time);
		}
		for(i=0;i<time;i++){
			L1=L2=L3=L4=0;c13=0;tre(20);xoa();
			L5=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
		}
		//Drop
		for(i=0;i<time;i++){
			L1=L2=L3=0;c13=0;tre(20);xoa();
			L4=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L5=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
		}
		for(i=0;i<time;i++){
			L1=L2=0;c13=0;tre(20);xoa();
			L3=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L4=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L5=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
		}
		for(i=0;i<time;i++){
			L1=0;c13=0;tre(20);xoa();
			L2=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L3=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L4=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L5=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
		}
		for(i=0;i<time;i++){
			L1=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L2=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L3=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L4=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
			L5=0;c11=c12=c13=c14=c15=0;tre(20);xoa();
		}
		//Rotate and Drop
		Rotate_Drop(time, 5);
}
//========================================
void phaohoa_tanchay_traitim(unsigned int time, unsigned char n){

	for(i=0; i<n; i++){
		xoa();
		//Rong ran Lop 1
		rongran_layer(time, 10);
		Rotate_snowDown(time, 1);
	}
}
//========================================
void main()
	{
	while(1)
		{
		toara(20000,5);
		sangdan(10000,1);
		nuocdang(15000,3);
		nuocdang(10000,3);
		nuocdang(5000,5);
		nuocdang(3000,5);
		quaydung(20000,3);
		quaydung(10000,3);
		quaydung(5000,5);
		quaydung(3000,10);
		choptat(10000,5);
		xeptang(30000,5);
		luonsong(50,10);
		I_FrontToBack(150,1);
		I_hRotate(150,1);
		L_FrontToBack(150,1);
		L_hRotate(150,1);
		O_FrontToBack(150,1);
		O_hRotate(150,1);
		V_FrontToBack(150,1);
		V_hRotate(150,1);
		E_FrontToBack(150,1);
		E_hRotate(150,1);
		Y_FrontToBack(150,1);
		Y_hRotate(150,1);
		O_FrontToBack(150,1);
		O_hRotate(150,1);
		U_FrontToBack(150,1);
		U_hRotate(150,1);
		phaohoa(8000,5);
		quayngang(100,10);
		quayngang(50,20);
		toara(20000,3);
		quaydung2(20000,5);
		quaydung2(10000,8);
		banphao(8000,10);
		I_Appear_RtoL(150,1);
		I_vRotate(150,1);
		L_Appear_RtoL(150,1);
		L_vRotate(150,1);
		O_Appear_RtoL(150,1);
		O_vRotate(150,1);
		V_Appear_RtoL(150,1);
		V_vRotate(150,1);
		E_Appear_RtoL(150,1);
		E_vRotate(150,1);
		Y_Appear_RtoL(150,1);
		Y_vRotate(150,1);
		O_Appear_RtoL(150,1);
		O_vRotate(150,1);
		U_Appear_RtoL(150,1);
		U_vRotate(150,1);
		banphao(8000,10);
			phaohoa_tanchay_traitim(10000, 3);
		}
	}