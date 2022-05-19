#include<stdio.h>
#include<stdlib.h>
void main()
{
	const float OTP = 230076; 
	float user_OTP; 
	
	printf("Enter the OTP : "); 
	scanf("%f",&user_OTP);
	
	if(!(user_OTP == OTP))
	{
		printf("Invalid OTP"); 
	    exit(0); 
    }
    	printf("welcome... %.0f\n",user_OTP);
}
