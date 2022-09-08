#include<stdio.h>
int main()
{
	char text[]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	
	char note[30],k,m; 		
	int lengthOfText,lengthOfStr,i,j,q,salt,option,h;
	 
						
	int code;
	
				
	
	printf("\tThis code is for Encryption and Decryption of Cipher Code:\n\n");
	
	printf("Enter the text:\t");
	gets(note);					
	
	printf("\nenter the value of salt: ");
	scanf("%d",&salt);
	
	printf("\n your string length is = %d \n\t",strlen(note));  
	
	lengthOfStr=strlen(note);
	lengthOfText=strlen(text);
			
	
	printf("\nenter 1 for Encrypt and 2 for Decrypt\n\n");
	scanf("%d",&option);
	
		if(option==1)
	{
		printf("you choose option 1\n\t\t\tyour code is:\t");    //encryption 
			
			for(i=0;i<lengthOfStr;i++){			
					k=note[i];
					
					for(j=0;j<(lengthOfText-1);j++){
						
						if(k==text[j])
						{
							
							q = (j + salt)%26;

//							q = j + salt;
//							q = q%26;
							printf("%c",text[q]);
						}
						
					}
					
		
	}
			printf("\n\n");
			
	}
	
	
	else if(option==2)
	{
		
		printf("you choose option 2\n\t\t\tyour code is:\t");
		
				for(i=0;i<lengthOfStr;i++)
				   {
				   
				   k=note[i];				   			
										
						for(j=0;j<(lengthOfText-1);j++)
						{
						
						
							if(k==text[j])
							{								//Decryption part
								q = 0;
								q = (salt%26)*(-1);
								
									q = j-(-q);
									if(q<0)
									{
										q = q + 26;
										
										printf(" %c ",text[q]);
									}else{
										
										printf(" %c ",text[q]);
									}
									
						   }                   
						
						}
						
				    }
					
					
	}
	else
	{
		printf("Enter value invalid");		//if the option selection is out of content
				
	}
	
	
}
				


							