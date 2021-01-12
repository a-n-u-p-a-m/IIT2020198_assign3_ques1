/*Finding max and min values among three integers*/

#include <stdio.h>
int main(void)

{
    int x,y,z;
    printf("Enter three integers\n");
    printf("x:");
    scanf("%d",&x);
    printf("y:");
    scanf("%d",&y);
    printf("z:");
    scanf("%d",&z);
    
    
    if ((x>y) && (x>z)) 
       printf("x is largest\n");
     else if ((y>x) && (y>z)) 
       printf("y is largest\n");
     else
       printf("z is largest\n");      
   
   
   if ((x<y) && (x<z))
       printf("x is smallest\n");
    else if ((y<x) && (y<z))
       printf("y is smallest\n");
    else
       printf("z is smallest\n");
       
 return 0;
             
}
