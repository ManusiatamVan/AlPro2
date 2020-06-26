//line

#include <stdio.h>	

int main(){	

	printf("Welcome \n");	
	//print current line
	printf("Line: %d\n",__LINE__);	
	//ubah nomor line ke 23	
	#line 23
	//print line baru	
	printf("Line : %d\n",__LINE__);	
	printf("Thank You !\n");	
}

//pragma
#include<stdio.h>
int display();

#pragma startup display
#pragma exit display

int main() {
   printf("\nSaya Dalam Function Main");
   return 0;
}

int display() {
   printf("\nSaya Dalam Function Display");
   return 0;
}	
