#include <stdio.h>
#include <math.h>
float main()
{
	float l1, l2, l3, equilatero, isosceles , escaleno;
	printf("digite o primeiro lado:");
	scanf("%f", &l1);
	printf("digite o segundo lado:");
	scanf("%f", &l2);
	printf("digite o terceiro lado:");
	scanf("%f", &l3);
	if (l1<l2+l3 && l2<l1+l3 && l3<l1+l2){
    	if(l1==l2 && l1==l3){
        	printf("o triângulo é equilatero.");
    	}
    	else if(l1!=l2 && l1!=l3){
        	printf("o triângulo é escaleno.");
    	}
    	else{
        	printf("o triângulo é isosceles.");
    	}
	}
	else {
    	printf("não é um triângulo.");
	}
    

	return 0;
}