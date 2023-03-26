/*ger scale 0to 255.in print publishing the color mentioned in cyan magenta yellow black (cymk) format with values varing on a real scale from 0 to 1.0 .WAP to convert RGB color into CYMK  color as per following formulae.*/
#include <stdio.h>
#include<math.h>

int main()
{           
    float red ,blue, green,cyan,black, magenta,yellow, white, max1 ;    
   int z;
printf("enter the color code values inn RGB\n");
 scanf("%f %f %f ",&red,&green,&blue);
printf("enter the choice of colors for cyan input 2 white 1 magenta 3 and yellow 4 for black 5\n");
 scanf("%d",&z);
 if(z==1)
 { max1=fmax(red/255,green/255);
 white=fmax(max1,blue/255);
 printf("ethe colir of the wihiite%d",white);
 }
 if(z==2)
 {
 cyan=(white-(red/255))/255;
 }
 if(z==3)
 {
 magenta=(white-(green/255)/white);
 }
 if (z==4){
 yellow=(white-(blue/255)/white);
 }
 if(z==5)
 black=1-white;

    return 0;
} 