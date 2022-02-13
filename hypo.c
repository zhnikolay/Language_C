 // Нахождение гипотенузы прямоугольного треугольника
 #include <stdio.h>
 #include <math.h>
 
double hypo(*a, *b);  
 int main(void){ 
   double a_cathet, b_cathet;
   double c_hypotenuse = 0;
   printf("Faund hypotenuse\n");
   ptintf("Enter cathet a and cathet b\n");
   scanf("%lf.2 %lf.2", &a_cathet, &b_cathet);
   
   
   printf("Hypotenuse is equai %lf.2 : \n", c_hypotenuse); 
   return 0;
 }
 double hypo(*a, *b){
   double hyp;
   hyp = ((*a) * (a)) + (*(b) *(*b));
   return sqrt(hyp);
  }      
