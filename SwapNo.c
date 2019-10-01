
#include <stdio.h> 
int main() 
{ 
  int x , y; 
  printf("Enter the value of x and y:"); //Taking inputs
  scanf("%d%d",&x,&y);//Accepting inputs

  // Code to swap 'x' and 'y' 
  x = x + y;   //Processing
  y = x - y;   
  x = x - y;   
  
  printf("After Swapping: x = %d, y = %d", x, y); 
  
  return 0; 
} 
