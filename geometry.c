#include <stdio.h>
int userinput;
char ol;

//function to culculate area of circle
void areaofcircle(){
float pie = 3.14150,radius=0,area;
printf("You've entered 1, a decision to calculate are of a cirlce.\n Pleae enter the raduis: ");
scanf("%f",&radius);    

if(radius <0 ){ //validation incase user enters negarive value as radius.

  printf("Invalid Input.\n Enter a none negative value please.");
  scanf("%f",&radius); 
  area=pie*radius*radius;
  printf("Area of circle is %f",area);
}

else
  area=pie*radius*radius;
  printf("Area of circle is %f",area);
}


//function to calculate area of rectangle
void areaofrectangle(){
  int length, breadth, area_triangle;

printf("\nYou've entered 2, a decision to calculate are of a triangle. \nEnter the Length of Rectangle : ");
   scanf("%d", &length);
 
   printf("\nEnter the Breadth of Rectangle : ");
   scanf("%d", &breadth);
 if(length<0 || breadth<0){
    printf("Invalid Input.\n Enter a none negative value please.");
    scanf("%d", &breadth);
    printf(" \nEnter the Length of Rectangle : ");
   scanf("%d", &length);
   area_triangle = length * breadth;
 }
else 
 area_triangle = length * breadth;
   printf("\nArea of Rectangle : %d", area_triangle);
}


//function to calculate area of triangle
void areaoftriangle(){
  float base,height, area;
printf("You've entered 3, a decision to calculate are of a triangle.\n Pleae enter the base: ");
scanf("%f",&base); 
printf(" Pleae enter the height: ");
scanf("%f",&height); 
if(base<0 || height<0){ 
  printf("Invalid Input.\n Enter a none negative value please. Enter base: "); 
  scanf("%f",&base);
  printf(" Pleae enter the height: ");
scanf("%f",&height);    
area=(base*height) / 2;
}
else
area=(base*height) / 2;
printf("Area of triangle is %f",area);
}

 void calltoaction(){

//function to ask user for input depending on what they want to calculate
printf("\nGEOMETRY CALCULATOR(FUNCTIONS)\n\n");
printf("please enter a value according to the instructions below: \n Enter 1 to calculates area of circle\n Enter 2 to calculate area of a rectangle \n Enter 3 to calculate area of a triangle \n Enter 4 to end program \n"); 
  scanf("%d", &userinput);
}

int main() {
  do{
calltoaction();
switch(userinput){
  case 1:
  areaofcircle(); //function call
  break;

case 2:    
areaofrectangle(); //function calll
break;

case 3:    
areaoftriangle(); //function call
break;

case 4: 
printf("You've entered 4, a decision to terminate the program, program now terminated! \n"); 
break;

default:   
 
printf("You've an Invalid entry, Please select between 1-4 \n"); 
}

printf("\n\n would you like  to continue maybe?: y/n \n Type y  for yes and any other key to exit program\n");
scanf (" %c", &ol);
  }

while(ol=='y');
return 0;  
}



