#include<stdio.h>
int main()
	  {


        int j;

        int a[7]={1,3,5,32,63,64,53};

        for(int i=0;i<6;i++){

            for(int j=0;j<6;j++){

                if(a[j]<a[j+1]){

                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }



            }


        }


          for(int i=0;i<7;i++)
                printf("%d \n",a[i]);

	  }
