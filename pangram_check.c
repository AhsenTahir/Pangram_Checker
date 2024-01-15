#include<stdio.h>
#include<string.h>
int pangram(char str[],int check[]);  //prototype


int main(){
	
	char str[100];
	printf("ENTER THE STRING :");
	scanf("%[^\n]s",str);
	int check[256]={0};   //setting size of array to 256 to cover all possible ASCII values 
	int result;
	result=pangram(str,check);
	if(result==1){
		printf("YES IT IS A PANGRAM NUMBER ");
	}
	if(result==0){
		printf("NO IT IS NOT A PANGRAM NUMBER ");
	}
	
	
	return 0;
}


int pangram(char str[],int check[]){
	
	int i;
	int result;
	int n=strlen(str);
	for(i=0;i<n;i++){
	check[(int)str[i]]++;     //this part will increment 1 to the check array elemnts from 97th element to 122th element or 65th to 90th element 
	}
	for(i=97;i<=122;i++){
	if(check[i]>0 || check[i-32]>0){
		result=1;
	}
	else{
		result=0;
		break;
		}
	}
	return result;
}