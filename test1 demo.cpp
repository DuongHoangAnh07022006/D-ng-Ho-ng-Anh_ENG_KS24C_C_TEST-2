#include <stdio.h>
int main ()
{
	int a, b, arr[100], max, c, d,temp;
	do 
	{
		printf ("                menu\n");
		printf ("1.Nh?p s? ph?n t? c?n nh?p v� gi� tr? c�c ph?n t?\n");
        printf ("2.In ra gi� tr? c�c ph?n t? �ang qu?n l?\n");
        printf ("3.In ra gi� tr? l?n nh?t c?a m?ng\n");
		printf ("4.In ra c�c ph?n t? l� s? nguy�n t? trong m?ng\n");
        printf ("5.Th�m m?t ph?n t? v�o trong m?ng\n");
        printf ("6.X�a m?t ph?n t? trong m?ng\n");
        printf ("7.S?p x?p m?ng theo th? t? t�ng d?n\n"); 
        printf ("8.T?m ki?m ph?n t?(ng�?i d�ng nh?p) v� in ra v? tr� index c?a ph?n t? ��\n");
        printf ("9.Tho�t\n");
		printf ("moi nhap gia tri:");
		scanf ("%d",&a);
		switch (a)
		{
			case 1:
			printf ("moi ban nhap do dai cua mang :");
			scanf ("%d",&b);
			arr[b];
			for (int i=0; i<b; i++)
			{
				printf ("moi ban nhap gia tri thu %d:", i+1);
				scanf ("%d", &arr[i]);
			 } 
			 printf ("\n");
			 break;
			case 2:
			for (int i=0; i<b; i++)
			{
				printf ("%d ",arr[i]);
			 } 
			 break;
			 case 3:
			 	max =0;
			 	for (int i=0; i<b; i++)
			 	{
			 		if (arr[i]>max)
			 		{
			 			max =arr[i];
					 }
				 }
				 printf ("gia tri lon nhat trong mang la:%d",max);
				 printf ("\n");
			 	break;
			case 4:
				printf ("cac so nguyen to trong mang:");
				printf ("\n");
			 for (int i=0; i<b; i++) 
			 {
				if (arr[i]<10)
				{
					switch (arr[i])
					{
						case 1:
							printf ("%d ",arr[i]);
							break;
						case 2:
						printf ("%d ",arr[i]);
							break;
						case 3:
						printf ("%d ",arr[i]);
							break;
						case 5:
						printf ("%d ",arr[i]);
							break;
						case 7:
						printf ("%d ",arr[i]);
							break;				
					}
				} else if (arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0 && arr[i]%7!=0)
				{
					printf ("%d ",arr[i]);
							break;
				}	
			 }
			 printf ("\n");
			 break;
			case 5: 	 
		     	c=0;
		    	d=0;
		    	printf ("moi nhap phan tu muon them:");
		    	scanf ("%d", &c);
		    	printf ("moi nhap vi tri muon them:");
		    	scanf ("%d",&d);
		    	if (d<0 || d>b)
		    	{
		    		printf ("khong hop le");
				} else 
				{
					for (int i=b; i>=d; i--)
		    	 {
		    		arr[i]=arr[i-1];
				 }
			    	arr[d]=c;
				    b++;
				   for (int i=0; i<b; i++)
		    	 {
		    		printf ("%d ",arr[i]);
				 }
				}
	               		printf ("\n");
	         break;
			case 6:
			 for (int i=0; i<b; i++)
			{
				printf ("%d ",arr[i]);
			 } 
			 printf ("\n");
			 d=0;
			  	printf ("moi nhap vi tri muon xoa:");
		    	scanf ("%d",&d);
		    	if (d<0 || d>b)
		    	{
		    		printf ("khong hop le");
				} else
				{
					for (int i=d-1; i<b; i++)
		    	 {
		    		arr[i]=arr[i+1];
			    	}
			    	b--;
				 for (int i=0; i<b; i++)
		    	 {
		    		printf ("%d ",arr[i]);
				 }
				}
			 printf ("\n");  
			 break;
			 case 7:
			 for (int i=0; i<b-1; i++)
			 {
			 	for (int j=0; j<b-1-i; j++)
			 	{
			 		if (arr[j+1]<arr[j])
			 		{
			 			temp=arr[j];
			 			arr[j]=arr[j+1];
			 			arr[j+1]=temp;
					 }
				 }
					  } 
					 for (int i=0; i<b; i++)
			       {
			    	printf ("%d ",arr[i]);
			       } 
			 printf ("\n");
			 break;	
			case 8:
				c=0;
				d=-1;
				printf ("moi nhap phan tu muon tim:");
		    	scanf ("%d", &c);
			 	 for (int i=0; i<b; i++)
			{
				if (c==arr[i])
				{
					d=i;
					printf ("gia tri %d muon tim o vi tri thu %d",c,i+1);
					printf ("\n"); 
				}
			 } 
			 if (d==-1)
			 {
			 	printf ("vi tri khong ton tai trong mang");
			 }
			 printf ("\n");  		
			 break;
			 case 9:
			 	return 1;
			default :
				printf ("khong hop le");
				break;
		 } 
	} while (a>0 && a<9); 
 } 
