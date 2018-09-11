
#include<stdio.h>
void printPat(int n);
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n;
	scanf("%d",&n);
    printPat(n);

	}
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this method*/
void printPat(int n)
{
    int i,i1,n1;
    
    for (i=n;i>=1;i--){
        n1=n;
        
        while(n1>=1){
            
            for(i1=i;i>=1;i1--){
                printf("%d ",n1);
            }
            n1=n1-1;
        }
        printf("$");
    }
}