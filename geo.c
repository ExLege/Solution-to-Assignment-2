/**
Author: Nathan Agbomedarho
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define M_PI 3.14159265358979323846

double square_area(double length) {return pow(length, 2);}

double volume_sphere(double radius1) {return (1.33333333333)*M_PI*radius1*radius1*radius1;}

double cube_surface_area(double edge) {return 6 * pow(edge,2);}

int main()
{
   
   int ch;
   double a,s,v,r,check;


   do
   {
       
       printf("1) Compute the area of a square");
       printf("\n2) Compute the volume of a sphere");
       printf("\n3) Compute the surface area of a cube\n4) Quit");
       printf("\nEnter an option: ");
       
       scanf("%d",&ch);
       switch(ch)
       {
           
           case 1:
                
               printf("\nEnter the side length (cm): ");
               scanf("%lf",&a);
               
               check = square_area(a);

               printf("Area of the square: %.2f (cm)\n\n",check);
               break;

           
           case 2:
               printf("\nEnter the radius (cm): ");
               
               scanf("%lf",&r);
               
               check = volume_sphere(r);

               printf("Volume of the Sphere is %.2f (cm)\n\n",check);

               break;

           case 3:
               
               printf("\nEnter the edge of the cube: ");

               scanf("%lf",&s);
               
               check = cube_surface_area(s);

               printf("Surface of the cube %.2f (cm)\n\n",check);

               break;
           case 4:
               
               printf("\nGoodbye!");

               exit(0);
           
           default:
               printf("Choose valid selection\n");
       }
   }
   while (ch!=4);       
}

