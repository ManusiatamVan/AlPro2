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

