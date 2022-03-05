#include <graphics.h>

int main ()
{
    int a=DETECT ,b;
    initgraph(&a,&b, "");
    int mm=620;
    int x=0,y=0;
    char gg;
    int xx=0,yy=0;
    int fx[20],fy[20];
    bool food =true;
    int score=0;
    int life=5;
    int fxx;
    char rr[100];
    char aaa[100];
    int  attack[14]={0};
    bool a1=true,a2=true,a3=true,a4=true,a5=true,a6=true,a7=true,a8=true,a9=true,a10=true,a11=true,a12=true,a13=true,a14=true;
//setbkcolor(LIGHTGRAY);
    bool ww=false,aa=false,ss=false,dd=false;
    // left one
    fx[0]=60; fx[1]=300; fx[2]=522; fx[3]=60; fx[4]=60; fx[5]=60; fx[6]=140; fx[7]=203+7; fx[8]=235; fx[9]=295;
     fx[10]=400; fx[11]=475; fx[12]=525; fx[13]=525; fx[14]=60; fx[15]=300;fx[16]=522;

     fy[0]=55; fy[1]=55; fy[2]=55; fy[3]=140; fy[4]=192; fy[5]=240; fy[6]=200; fy[7]=170; fy[8]=195; fy[9]=240; fy[10]=193; fy[11]=200; fy[12]=142;
      fy[13]=290; fy[14]=383; fy[15]=383; fy[16]=383;
    while (1){
            if (food)
            {


             fxx=rand()%17;

    food=false;
    }
sprintf (rr,"SCORE: %d",score);
outtextxy(193,340,rr);
sprintf(aaa,"LIFE: %d",life);
outtextxy(360,340,aaa);
setcolor(LIGHTCYAN);
setfillstyle(SOLID_FILL ,LIGHTCYAN);
    circle(fx[fxx],fy[fxx],5);
    floodfill(fx[fxx],fy[fxx],LIGHTCYAN);
            setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);
    rectangle (20,40,610,400);

    rectangle (45,65,103,135);
    floodfill(46,66,BLUE);
      setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle (45,160,103,183);
    floodfill(46,162,YELLOW);
      setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    rectangle (45,208,103,231);
    floodfill(47,210,GREEN);
      setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle (45,256,103,280);
    floodfill(46,257,YELLOW);
      setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
rectangle (45,305,103,375);
floodfill(46,306,RED);
// left two
//setbkcolor(LIGHTGRAY);
  setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);

    rectangle (128,65,158,193);

    floodfill(138,67,BROWN);
    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
     rectangle (128,218,158,375);
    floodfill(139,220,LIGHTBLUE);
    // left three
    setcolor(LIGHTCYAN);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle (183,65,440,85);
    floodfill(184,66,LIGHTCYAN);
    // first line
    setcolor(LIGHTGREEN);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    line (183,110,183,290);
    line (183,110,258,110);
    line (183,290,258,290);
//    line ();
    //second line
    line (203,130,203,270);
line (203,130,258,130);
line (203,270,258,270);
//line joining
line (258,130,258,110);
line (258,270,258,290);
//    //
floodfill(184,120,LIGHTGREEN);
setcolor(LIGHTRED);
setfillstyle(SOLID_FILL,LIGHTRED);
    rectangle (183,315,440,375);
    floodfill(184,320,LIGHTRED);
// semmetically
    // left onemm=
   // rectangle (20,40,610,400);
   setcolor(BLUE);
   setfillstyle(SOLID_FILL,BLUE);
    rectangle (mm-103,65,mm-45,135);
    floodfill(mm-100,67,BLUE);
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle (mm-103,160,mm-45,183);
    floodfill(mm-100,163,YELLOW);
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    rectangle (mm-103,208,mm-45,231);
    floodfill(mm-101,210,GREEN);
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle (mm-103,256,mm-45,280);
    floodfill(mm-100,257,YELLOW);
    setcolor (RED);
    setfillstyle(SOLID_FILL,RED);
rectangle (mm-103,305,mm-45,375);
floodfill(mm-101,306,RED);
// left two
setcolor(BROWN);
setfillstyle(SOLID_FILL,BROWN);
    rectangle (mm-158,65,mm-128,193);
    floodfill(mm-150,67,BROWN);
    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle (mm-158,218,mm-128,375);
floodfill(mm-130,220, LIGHTBLUE);
    // left three
   // rectangle (mm-183,65,mm-383,85);
    // first line
    setcolor(LIGHTGREEN);
setfillstyle(SOLID_FILL,LIGHTGREEN);
    line (mm-183,110,mm-183,290);
    line (mm-183,110,mm-258,110);
    line (mm-183,290,mm-258,290);
//    line ();
    //second line
    line (mm-203,130,mm-203,270);
line (mm-203,130,mm-258,130);
line (mm-203,270,mm-258,270);
//line joining
line (mm-258,130,mm-258,110);
line (mm-258,270,mm-258,290);

floodfill(420,120,LIGHTGREEN);
// inside
setcolor(3);
setfillstyle(SOLID_FILL,3);
rectangle(228,155,258,187);
floodfill(229,156,3);

setcolor(5);
setfillstyle(SOLID_FILL,5);
rectangle(228,212,258,244);
floodfill(229,217,5);
setcolor(3);
setfillstyle(SOLID_FILL,3);

rectangle(mm-258,155,mm-228,187);
floodfill (mm-229,156,3);
setcolor(5);
setfillstyle(SOLID_FILL,5);
rectangle(mm-258,212,mm-228,244);
floodfill(mm-229,220,5);
setcolor(8);
setfillstyle(SOLID_FILL,8);
    rectangle(283,110,283+55,130);
    floodfill(284,112,8);
    setcolor(13);
setfillstyle(SOLID_FILL,13);
    rectangle(283,270,283+55,290);
    floodfill(285,271,13);
    setcolor(15);
setfillstyle(SOLID_FILL,15);
    rectangle(283,155,298,245);
    floodfill(284,240,15);

    rectangle(298+25,155,298+25+15,245);
    floodfill(298+26,240,15);
//    //
    //rectangle (mm-183,315,mm-383,375);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    circle(32+x,52+y,8);
floodfill (32+x,52+y, WHITE);
    if (24+x+xx>20&&40+x+xx<45)
    {ww=true;
            ss=true;


            if (46+y+yy>40&&60+y+yy<65)
        {
            aa=false;
            dd=true;
        }
        else if (46+y+yy>135&&60+y+yy<160)
        {
            aa=false;
            dd=true;
        }
        else if (46+y+yy>183&&60+y+yy<208)
        {
            aa=false;
            dd=true;
        }
         else   if (46+y+yy>231&&60+y+yy<256)
        {
            aa=false;
            dd=true;
        }
         else   if (46+y+yy>280&&60+y+yy<305)
        {
            aa=false;
            dd=true;
        }

       else  if (46+y+yy>375&&60+y+yy<400)
        {
            aa=false;
            dd=true;
        }

     else
        {
            aa=false;
            dd=false;
        }
    }


    if (24+x+xx>=103&&40+x+xx<=128)
    {
        ww=true;
        ss=true;
        if (46+y+yy>40&&60+y+yy<65)
        {
            aa=true;
            dd=true;
        }
       else   if (46+y+yy>193&&60+y+yy<218)
        {
            aa=false;
            dd=true;
        }
      else    if (46+y+yy>375&&60+y+yy<400)
        {
            aa=true;
            dd=true;
        }
   else   if (46+y+yy>135&&60+y+yy<160)
        {
            aa=true;
            dd=false;
        }
         else   if (46+y+yy>183&&60+y+yy<208)
        {
            aa=true;
            dd=false;
        }
         else   if (46+y+yy>231&&60+y+yy<256)
        {
            aa=true;
           dd=false;
        }
         else   if (46+y+yy>280&&60+y+yy<305)
        {
            aa=true;
           dd=false;
        }


        else {
            aa=false;
            dd=false;
        }

    }

 if (24+x+xx>45&&40+x+xx<103)
 {
     ww=false;
     ss=false;
     aa=true;
     dd=true;

 }

  if (24+x+xx>158&&40+x+xx<183)
 {
    ww=true;
    ss=true;
    if (46+y>40&&60+y<65)
    {
        aa=true;
        dd=true;
    }
else if (46+y+yy>85&&60+y+yy<110)
    {
        aa=false;
        dd=true;


    }
    else if (46+y+yy>290&&60+y+yy<315)
    {
        aa=false;
        dd=true;
    }
     else if (46+y+yy>375&&60+y+yy<400)
    {
        aa=true;
        dd=true;
    }
     else if (46+y+yy>193&&60+y+yy<218)
    {
        aa=true;
        dd=false;
    }
    else {
        aa=false;
        dd=false;
    }
 }
 if (24+x+xx>128&&40+x+xx<158)
 {
     aa=true;
     dd=true;
     ww=false;
     ss=false;
 }


    if (24+x+xx>183&&40+x+xx<440&&46+y+yy>85&&60+y+yy<110)
    {
       aa=true;
       dd=true;
       ww=false;
       if (24+x+xx>258&&40+x+xx<283)
       {
           ss=true;
       }
       else   if (24+x+xx>338&&40+x+xx<362)
       {
           ss=true;
       }
       else   if (24+x+xx>258&&40+x+xx<283)
       {
           ss=true;
       }
       else
       {
           ss=false;
       }
    }


    if (24+x+xx>183&&40+x+xx<440&&46+y+yy>290&&60+y+yy<315)
    {
       aa=true;
       dd=true;
       ss=false;
       if (24+x+xx>258&&40+x+xx<283)
       {
           ww=true;
       }
       else   if (24+x+xx>338&&40+x+xx<362)
       {
           ww=true;
       }
       else   if (24+x+xx>258&&40+x+xx<283)
       {
           ww=true;
       }
       else
       {
          ww =false;
       }
    }

 if (24+x+xx>=258&&40+x+xx<283&&46+y+yy>=130&&60+y+yy<=270)

 {
     ww=true;
 ss=true;
aa=false;
dd=false;
 if (46+y+yy>130&&60+y+yy<155)
 {
     aa=true;
     dd=true;
 }
 else if (46+y+yy>187&&60+y+yy<212)
 {
     aa=true;
     dd=false;
 }

 else  if (46+y+yy>244&&60+y+yy<270)
 {
     aa=true;
     dd=true;
 }

 else
 {
     aa=false;
     dd=false;
 }

 }

  if (24+x+xx>=338&&40+x+xx>=362&&46+y+yy>=130&&60+y+yy<=270)
{


       ww=true;
 ss=true;
aa=false;
dd=false;
 if (46+y+yy>130&&60+y+yy<155)
 {
     aa=true;
     dd=true;
 }

 else if (46+y+yy>187&&60+y+yy<212)
 {
     aa=false;
     dd=true;
 }
 else  if (46+y+yy>244&&60+y+yy<270)
 {
     aa=true;
     dd=true;
 }

 else
 {
     aa=false;
     dd=false;
 }

 }
 if (x+24+xx>203&&x+40+xx<228)
 {
 aa=true;
 dd=true;;
    if (y+46+yy<=130)
    {
        ww=false;
        ss=true;

    }
   else if (y+60+yy>=270)
    {
        ss=false;
        ww=true;

    }
    else
    {
        ww=true;
        ss=true;
    }
    if (y+46+yy>=130&&y+60+yy<=270)
    {
        aa=false;
    }
 }

 if (x+24+xx>228&&x+40+xx<258)
 {

     if (y+46+yy>130&&y+60+yy<155)
     {
         ww=false;
         ss=false;
     }
   else    if (y+46+yy>187&&y+60+yy<220)
     {
         ww=false;
         ss=false;
     }
     else  if (y+46+yy>244&&y+60+yy<270)
     {
         ww=false;
         ss=false;
     }


 }

if (x+24+xx>298&&x+xx+40<323&&y+46+yy>155&&y+60+yy<244)
{
    ww=true;
    ss=true;
    aa=false;
    dd= false;
}
if (x+24+xx>283&&x+40+xx<283+55)
{ww=true;
ss=true;;
    if (y+yy+46>130&&y+60+yy<155)
    {

        aa=true;
        dd=true;
    ww=false;

    }
 else   if (y+46+yy>244&&y+60+yy<270)
    {
        aa=true;
        dd=true;
        ss=false;

    }




            if (x+30+xx>283&&x+34+xx<298&&y+46+yy>244&&y+60+yy<270){
            aa=true;
        dd=true;
        ss=false;
            ww=false;
        }
    else    if (x+30+xx>323&&x+34+xx<338&&y+46+yy>244&&y+60+yy<270)
        {
            aa=true;
        dd=true;
        ss=false;
            ww=false;
        }

            if (x+30+xx>283&&x+34+xx<298&&y+46+yy>130&&y+60+yy<155){
            aa=true;
        dd=true;
        ss=false;
            ww=false;
        }
    else    if (x+30+xx>323&&x+34+xx<338&&y+46+yy>130&&y+60+yy<155)
        {
            aa=true;
        dd=true;
        ss=false;
            ww=false;
        }


}

if (x+24+xx>=362&&x+40+xx<=392)
 {
aa=true;
dd=true;
     if (y+46+yy>130&&y+60+yy<155)
     {
         ww=false;
         ss=false;
     }
   else    if (y+46+yy>187&&y+60+yy<220)
     {
         ww=false;
         ss=false;
     }
     else  if (y+46+yy>244&&y+60+yy<270)
     {
         ww=false;
         ss=false;
     }


 }

 if (x+24+xx>=392&&x+40+xx<=417)
 {
 aa=true;
 dd=true;;
    if (y+46+yy<=130)
    {
        ww=false;
        ss=true;

    }
   else if (y+60+yy>=270)
    {
        ss=false;
        ww=true;

    }
    else
    {
        ww=true;
        ss=true;
    }
    if (y+46+yy>=130&&y+60+yy<=270)
    {

        dd=false;
    }
 }

 if (24+x+xx>440&&40+x+xx<462)
 {
    ww=true;
    ss=true;
    aa=true;
    dd=true;
    if (46+y+yy>40&&60+y+yy<65)
    {
        aa=true;
        dd=true;
    }
else if (46+y+yy>85&&60+y+yy<110)
    {
        dd=false;
        aa=true;


    }
    else if (46+y+yy>290&&60+y+yy<315)
    {
        dd=false;
        aa=true;
    }
     else if (46+y+yy>375&&60+y+yy<400)
    {
        aa=true;
        dd=true;
    }
     else if (46+y+yy>193&&60+y+yy<218)
    {
        dd=true;
        aa=false;
    }
    else {
        aa=false;
        dd=false;
    }
 }
if (24+x+xx>492&&40+x+xx<517)
    {
        ww=true;
        ss=true;
        //

        if (46+y+yy>40&&60+y+yy<65)
        {
            aa=true;
            dd=true;
        }
       else   if (46+y+yy>193&&60+y+yy<218)
        {
            dd=false;
            aa=true;
        }
      else    if (46+y+yy>375&&60+y+yy<400)
        {
            aa=true;
            dd=true;
        }
   else   if (46+y+yy>135&&60+y+yy<160)
        {
            dd=true;
            aa=false;
        }
         else   if (46+y+yy>183&&60+y+yy<208)
        {
            dd=true;
            aa=false;
        }
         else   if (46+y+yy>231&&60+y+yy<256)
        {
            aa=true;
           dd=false;
        }
         else   if (46+y+yy>280&&60+y+yy<305)
        {
            dd=true;
           aa=false;
        }


        else {
            aa=false;
            dd=false;
        }

    }
 if (24+x+xx>462&&40+x+xx<492)
 {
     aa=true;
     dd=true;
     ww=false;
     ss=false;
 }

 if (24+x+xx>=573&&40+x+xx<=620)
    {ww=true;
            ss=true;
//
dd=true;
aa=true;
ww=true;
ss=true;
            if (46+y+yy>40&&60+y+yy<65)
        {
           dd=false;
            aa=true;
        }
        else if (46+y+yy>135&&60+y+yy<160)
        {
            aa=true;
            dd=false;
        }
        else if (46+y+yy>183&&60+y+yy<208)
        {
            aa=true;
            dd=false;
        }
         else   if (46+y+yy>231&&60+y+yy<256)
        {
            aa=true;
            dd=false;
        }
         else   if (46+y+yy>280&&60+y+yy<305)
        {
            aa=true;
            dd=false;
        }

       else  if (46+y+yy>375&&60+y+yy<400)
        {
            aa=true;
            dd=false;
        }

     else
        {
            aa=false;
            dd=false;
        }
    }

 if (24+x+xx>517&&40+x+xx<575)
 {

     aa=true;
     dd=true;
     ww=false;
     ss=false;
 }

 if (x+xx+24>183&&xx+x+40<440&&y+46>40&&y+yy+60<65)
 {
     ww=false;
     ss=false;
     aa=true;
     dd=true;
 }
  if (x+xx+24>183&&xx+x+40<440&&y+46>375&&y+yy+60<400)
 {
     ww=false;
     ss=false;
     aa=true;
     dd=true;
 }



 if (24+x<20)
 {
    aa=false;



 }
 if (40+x>620)
 {
     dd=false;
 }
 if (46+y<40)
 {
     ww=false;
 }
 if (60+y>400)
 {
     ss=false;
 }


 if (fy[fxx]-5>46+y&&fy[fxx]<60+y)
 {
     if (24+x<fx[fxx]+5&&40+x>fx[fxx]-5)
     {
         score++;
         food=true;
     }

 }
 if (24+x<fx[fxx]-5&&fx[fxx]+5<40+x)
 {
     if (60+y>fy[fxx]-5&&(46+y<fy[fxx]+5))
     {
         score++;
         food=true;
     }

  //   {
    //     score++;
      //   food=true;
    // }
 }

setcolor(YELLOW);
setfillstyle( SOLID_FILL,YELLOW);
circle (32,79+attack[0],5);
floodfill(32,79+attack[0],YELLOW);
if (79+attack[0]<80)
    {

        a1=true;;
}
else if (79+attack[0]>375)
{
    a1=false;
}
if (a1)
{
    attack[0]++;
}
else {attack[0]--;}

//kill
if (24+x<32-5&&32+5<40+x)
 {
     if (60+y>79+attack[0]-5&&(46+y<79+attack[0]+5))
     {
         life--;
         x=0;
         y=0;
     }
 }

 // kill 2
 setcolor(YELLOW);
setfillstyle( SOLID_FILL,YELLOW);
circle (112,300+attack[1],5);
floodfill(112,300+attack[1],YELLOW);
if (300+attack[1]<65)
    {

        a2=true;;
}
else if (300+attack[1]>375)
{
    a2=false;
}
if (a2)
{
    attack[1]++;
}
else {attack[1]--;}

//kill
if (24+x<112-5&&112+5<40+x)
 {
     if (60+y>300+attack[1]-5&&(46+y<300+attack[1]+5))
     {
         life--;
         x=0;
         y=0;
     }
 }
//// kill 3


setcolor(YELLOW);
setfillstyle( SOLID_FILL,YELLOW);
circle (170,193+attack[2],5);
floodfill(170,193+attack[2],YELLOW);
if (193+attack[2]<65)
    {

        a3=true;;
}
else if (193+attack[2]>375)
{
    a3=false;
}
if (a3)
{
    attack[2]++;
}
else {attack[2]--;}

//kill
if (24+x<170-5&&170+5<40+x)
 {
     if (60+y>193+attack[2]-5&&(46+y<193+attack[2]+5))
     {
         life--;
         x=0;
         y=0;
     }
 }
// kill 8
setcolor(YELLOW);
setfillstyle( SOLID_FILL,YELLOW);
circle (452,370+attack[7],5);
floodfill(452,370+attack[7],YELLOW);
if (370+attack[7]<65)
    {

        a8=true;;
}
else if (370+attack[7]>375)
{
    a8=false;
}
if (a8)
{
    attack[7]++;
}
else {attack[7]--;}

//kill
if (24+x<452-5&&452+5<40+x)
 {
     if (60+y>370+attack[7]-5&&(46+y<370+attack[7]+5))
     {
         life--;
         x=0;
         y=0;
     }
 }

//kill 9
setcolor(YELLOW);
setfillstyle( SOLID_FILL,YELLOW);
circle (502,70+attack[8],5);
floodfill(502,70+attack[8],YELLOW);
if (70+attack[8]<65)
    {

        a9=true;;
}
else if (70+attack[8]>375)
{
    a9=false;
}
if (a9)
{
    attack[8]++;
}
else {attack[8]--;}

//kill
if (24+x<502-5&&502+5<40+x)
 {
     if (60+y>70+attack[8]-5&&(46+y<70+attack[8]+5))
     {
         life--;
         x=0;
         y=0;
     }
 }

// kill 10


setcolor(YELLOW);
setfillstyle( SOLID_FILL,YELLOW);
circle (582,300+attack[9],5);
floodfill(582,300+attack[9],YELLOW);
if (300+attack[9]<65)
    {

        a10=true;;
}
else if (300+attack[9]>375)
{
    a10=false;
}
if (a10)
{
    attack[9]++;
}
else {attack[9]--;}

//kill
if (24+x<582-5&&582+5<40+x)
 {
     if (60+y>300+attack[9]-5&&(46+y<300+attack[9]+5))
     {
         life--;
         x=0;
         y=0;
     }
 }

 // kill 5
 setcolor(YELLOW);
setfillstyle( SOLID_FILL,YELLOW);
circle (268,260+attack[4],5);
floodfill(268,260+attack[4],YELLOW);
if (260+attack[4]<110)
    {

        a5=true;;
}
else if (260+attack[4]>270)
{
    a5=false;
}
if (a5)
{
    attack[4]++;
}
else {attack[4]--;}

//kill
if (24+x<268-5&&268+5<40+x)
 {
     if (60+y>260+attack[4]-5&&(46+y<260+attack[4]+5))
     {
         life--;
         x=0;
         y=0;
     }
 }

// kill 6
 setcolor(YELLOW);
setfillstyle( SOLID_FILL,YELLOW);
circle (352,140+attack[5],5);
floodfill(352,140+attack[5],YELLOW);
if (140+attack[5]<110)
    {

        a6=true;;
}
else if (140+attack[5]>270)
{
    a6=false;
}
if (a6)
{
    attack[5]++;
}
else {attack[5]--;}

//kill
if (24+x<352-5&&352+5<40+x)
 {
     if (60+y>140+attack[5]-5&&(46+y<140+attack[5]+5))
     {
         life--;
         x=0;
         y=0;
     }
 }

 // kill 11
  setcolor(YELLOW);
setfillstyle( SOLID_FILL,YELLOW);
circle (180+attack[10],385,5);
floodfill(180+attack[10],385,YELLOW);
if (180+attack[10]<60)
    {

        a11=true;;
}
else if (180+attack[10]>610)
{
    a11=false;
}
if (a11)
{
    attack[10]++;
}
else {attack[10]--;}
 // kkill

 if (24+x<180+attack[10]-5&&180+attack[10]+5<40+x)
 {
     if (60+y>385-5&&(46+y<385+5))
     {
          life--;
        x=0;
        y=0;
     }

  //   {
    //     score++;
      //   food=true;
    // }
 }

 // kill 12
  setcolor(YELLOW);
setfillstyle( SOLID_FILL,YELLOW);
circle (460+attack[11],385,5);
floodfill(460+attack[11],385,YELLOW);
if (460+attack[11]<60)
    {

        a12=true;;
}
else if (460+attack[11]>610)
{
    a12=false;
}
if (a12)
{
    attack[11]++;
}
else {attack[11]--;}
 // kkill

 if (24+x<460+attack[11]-5&&460+attack[11]+5<40+x)
 {
     if (60+y>385-5&&(46+y<385+5))
     {
          life--;
        x=0;
        y=0;
     }
 }

// kill 13

setcolor(YELLOW);
setfillstyle( SOLID_FILL,YELLOW);
circle (183+attack[12],50,5);
floodfill(183+attack[12],50,YELLOW);
if (183+attack[12]<60)
    {

        a13=true;;
}
else if (183+attack[12]>610)
{
    a13=false;
}
if (a13)
{
    attack[12]++;
}
else {attack[12]--;}
 // kkill

 if (24+x<183+attack[12]-5&&183+attack[12]+5<40+x)
 {
     if (60+y>50-5&&(46+y<50+5))
     {
          life--;
        x=0;
        y=0;
     }
 }
// kill 14
setcolor(YELLOW);
setfillstyle( SOLID_FILL,YELLOW);
circle (462+attack[13],50,5);
floodfill(462+attack[13],50,YELLOW);
if (462+attack[13]<60)
    {

        a14=true;;
}
else if (462+attack[13]>610)
{
    a14=false;
}
if (a14)
{
    attack[13]++;
}
else {attack[13]--;}
 // kkill

 if (24+x<462+attack[13]-5&&462+attack[13]+5<40+x)
 {
     if (60+y>50-5&&(46+y<50+5))
     {
          life--;
        x=0;
        y=0;
     }
 }

// kill 4
setcolor(YELLOW);
setfillstyle( SOLID_FILL,YELLOW);
circle (190+attack[3],93,5);
floodfill(190+attack[3],93,YELLOW);
if (190+attack[3]<183)
    {

        a4=true;;
}
else if (190+attack[3]>440)
{
    a4=false;
}
if (a4)
{
    attack[3]++;
}
else {attack[3]--;}
 // kkill

 if (24+x<190+attack[3]-5&&190+attack[3]+5<40+x)
 {
     if (60+y>93-5&&(46+y<93+5))
     {
          life--;
        x=0;
        y=0;
     }
 }

// kill 7
setcolor(YELLOW);
setfillstyle( SOLID_FILL,YELLOW);
circle (400+attack[6],300,5);
floodfill(400+attack[6],300,YELLOW);
if (400+attack[6]<183)
    {

        a7=true;;
}
else if (400+attack[6]>440)
{
    a7=false;
}
if (a7)
{
    attack[6]++;
}
else {attack[6]--;}
 // kkill

 if (24+x<400+attack[6]-5&&400+attack[6]+5<40+x)
 {
     if (60+y>300-5&&(46+y<300+5))
     {
          life--;
        x=0;
        y=0;
     }
 }



  /*if (385-5>46+y&&385+5<60+y)
 {
     if (24+x<180+attack[10]+5&&40+x>180+attack[10]-5)
     {
        life--;
        x=0;
        y=0;

     }

 }*/



if (life<0)
{
    break;
}

    if (kbhit())
    {
        gg=getch();

    if (gg=='w'&&ww)
    {
        y-=4;
          //cleardevice();
    }
    if (gg=='s'&&ss)
    {
        y+=4;
          //cleardevice();
    }
    if (gg=='a'&&aa)
    {
        x-=4;
         // cleardevice();
    }
    if (gg=='d'&dd)
    {
        x+=4;
       // cleardevice();
    }
    }
    delay(3);
cleardevice();
    }
    cleardevice();

sprintf (aaa,"SCORE:  %d",score);
delay(1000);
outtextxy(200,200,aaa);
    getch();
    return 0;
}
