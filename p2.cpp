#include<stdio.h>
#include<string.h>

main()
{
	char Email[50]={"snehbhal2697@gmail.com"};
	char Password[50]={"senh@02"};
	char Email1[50];
	char Password1[50];

	
	
	printf("Please enter your email :");
	gets(Email1);
	printf("Please enter your password :");
	gets(Password1);
	
	if((strcmp(Email,Email1)==0))
	{
		if((strcmp(Password,Password1)==0))
		{
			printf("Successfully login !!!!");
		}
	   else
		{
			printf("Password not match");
      	}
	}
	else
	{
		    printf("Email not match !!!");
	}
	
}

