#include <stdio.h> 

main(){ 

   int A, B, C;
   A = B;
   B = A;
   C = C; 

   if(A) 

     printf("C1 ");         

   else { 

      if(B) {
	  

          if(C)               

             printf("C2 ");                       

          else { 

                printf("C3 "); 

               printf("C4 "); 

            }
		}

       printf("C5 "); 

    } 

    printf("C6\n");  

} 
