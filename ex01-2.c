#include<stdio.h>
#include<math.h>
int main(void){
  for(int n=0;n<10000;n++){
  float x,y1,y2;
  //printf("Give x:");
  //scanf("%f",&x);
  x=(float)n;
  y1=x*(sqrt(x*x+1)-x);
  y2=x/(sqrt(x*x+1)+x);

  if(y1-y2!=0){

    printf("x=%d\n",n);
  printf("unchanged:%f\n",y1);
  printf("modified:%f\n",y2);
  break;
  }
  }
  return 0;

}
