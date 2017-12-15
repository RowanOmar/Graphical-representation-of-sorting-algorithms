#include "graphics.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>                    
#include <ctype.h>  
#include < time.h>
#include <windows.h>
#include <process.h>

using namespace std;
void bubblesort()
{
	 initwindow(800, 800, "Sorting");
   int gd = DETECT, gm;

    srand (time(NULL));
	int arr[50];
	int y;
	int w= 800/50;
	settextstyle(BOLD_FONT, HORIZ_DIR, 8);
	setcolor(YELLOW);
	 outtextxy(120,400,"BUBBLE SORT");
	for(int i=0;i<50;i++)
	{
		
        arr[i]=rand() %100+100; 
		y=arr[i];
		cout<<arr[i]<<endl;
	 setfillstyle(INTERLEAVE_FILL,LIGHTGRAY);
	floodfill(800,800,WHITE);	
   bar(w*i, 0, w+(w*i-5),y);
   

   settextstyle(BOLD_FONT, HORIZ_DIR, 8);
	setcolor(i%15);
	 outtextxy(120,400,"BUBBLE SORT");

   delay(100);

	}

	for(int i=0;i<50;i++)
	{
		for(int j=0;j<49;j++)		
		{
					
			if(arr[j]>arr[j+1])
			{
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;

			int x1=arr[j];
			int y1=arr[j+1];


			 setfillstyle(SOLID_FILL,BLACK);
	        floodfill(800,800,WHITE);
            bar(w*j, 0, w+(w*j-5),300);

			delay(50);

					 setfillstyle(SOLID_FILL,BLACK);
	        floodfill(800,800,WHITE);	
            bar(w*(j+1), 0, w+(w*(j+1)-5),300);

			delay(50);	

			setfillstyle(INTERLEAVE_FILL,YELLOW);
	        floodfill(800,800,WHITE);	
            bar(w*j, 0, w+(w*j-5),x1);
			delay(50);
					

		
			setfillstyle(INTERLEAVE_FILL,YELLOW);
	        floodfill(800,800,WHITE);	
            bar(w*(j+1), 0, w+(w*(j+1)-5),y1);
			delay(50);


	 settextstyle(BOLD_FONT, HORIZ_DIR, 8);
	 setcolor(j%15);
	 outtextxy(120,400,"BUBBLE SORT");

			}
	} 
	
	}

	cleardevice();

	for(int i=0;i<50;i++)
	{
		int x=arr[i];
		    setfillstyle(INTERLEAVE_FILL,YELLOW);
	       floodfill(800,800,WHITE);	
            bar(w*i, 0, w+(w*i-5),x);

	 settextstyle(BOLD_FONT, HORIZ_DIR, 8);
	 setcolor(MAGENTA);
	 outtextxy(210,400,"SORTED!!");	
			
	}
	


	getch();
	
	closegraph();

}
void insertionsort()
{
	initwindow(800, 800, "Sorting");
   int gd = DETECT, gm;

   	
    srand (time(NULL));
	int arr[50];
	int y;
	int w= 800/50;
	settextstyle(BOLD_FONT, HORIZ_DIR, 8);
	setcolor(YELLOW);
	 outtextxy(70,400,"Insertion Sort");
	for(int i=0;i<50;i++)
	{
		
        arr[i]=rand() %100+100; 
		y=arr[i];
	  cout<<arr[i]<<endl;
	  setfillstyle(INTERLEAVE_FILL,LIGHTGRAY);
	  floodfill(800,800,WHITE);	
      bar(w*i, 0, w+(w*i-5),y);
   

     settextstyle(BOLD_FONT, HORIZ_DIR, 8);
	 setcolor(i%15);
	 outtextxy(70,400,"Insertion Sort");

   delay(100);

	}
	
 int i, j ,tmp;
 for (i = 1; i < 50; i++) {
 j = i;
 while (j > 0 && arr[j - 1] > arr[j]) {

 tmp = arr[j];
 arr[j] = arr[j - 1];
 arr[j - 1] = tmp;
 int x1=arr[j];
 int y1=arr[j-1];

 	        setfillstyle(SOLID_FILL,BLACK);
	        floodfill(800,800,WHITE);
            bar(w*j, 0, w+(w*j-5),300);

			delay(70);

			setfillstyle(SOLID_FILL,BLACK);
	        floodfill(800,800,WHITE);	
            bar(w*(j-1), 0, w+(w*(j-1)-5),300);

			delay(70);	

			 setfillstyle(INTERLEAVE_FILL,LIGHTCYAN);
	         floodfill(800,800,WHITE);	
             bar(w*j, 0, w+(w*j-5),x1);

			 delay(70);				

		
			 setfillstyle(INTERLEAVE_FILL,LIGHTCYAN);
	        floodfill(800,800,WHITE);	
            bar(w*(j-1), 0, w+(w*(j-1)-5),y1);
			delay(70);


			 settextstyle(BOLD_FONT, HORIZ_DIR, 8);
	         setcolor(j%15);
	         outtextxy(70,400,"Insertion Sort");
	         j--;
 }
 }

	cleardevice();

	for(int i=0;i<50;i++)
	{
		int x=arr[i];
		    setfillstyle(INTERLEAVE_FILL,LIGHTCYAN);
	       floodfill(800,800,WHITE);	
            bar(w*i, 0, w+(w*i-5),x);

	 settextstyle(BOLD_FONT, HORIZ_DIR, 8);
	 setcolor(LIGHTRED);
	 outtextxy(210,400,"SORTED!!");	
			
	}
	

	getch();
	closegraph();
}
void selectionsort()
{
	
   initwindow(800, 800, "Sorting");
   int gd = DETECT, gm;
    srand (time(NULL));
	int arr[30];
	int y;
	int w= 800/30;
	settextstyle(BOLD_FONT, HORIZ_DIR, 8);
	setcolor(YELLOW);
	 outtextxy(80,400,"Selection Sort");
	for(int z=0;z<30;z++)
	{
		
        arr[z]=rand() %200+100; 
		y=arr[z];
		cout<<arr[z]<<endl;
	    setfillstyle(INTERLEAVE_FILL,LIGHTGRAY);
		floodfill(800,800,WHITE);	
		bar(w*z, 0, w+(w*z-5),y);
   

     settextstyle(BOLD_FONT, HORIZ_DIR, 8);
	 setcolor(z%15);
	 outtextxy(80,400,"SELECTION SORT");

   delay(100);

	}
	delay(500);

	int min=99999999;
	int temp=0;
	int i,j;
	for( i=0;i<29;i++)
	{
       min=i;
	   for( j=i+1; j<30;j++)
	   {
	     if (arr[j]<arr[min])
		     min=j;
		 
	   }

	   temp=arr[i];
	   arr[i]=arr[min];
	   arr[min]=temp;

	   if(i==min)
	   {
		    int equal=arr[i];
		    setfillstyle(SOLID_FILL,BLACK);
	        floodfill(800,800,WHITE);
            bar(w*i, 0, w+(w*i-5),300);

			delay(800);

		    setfillstyle(SOLID_FILL,BLACK);
	        floodfill(800,800,WHITE);	
            bar(w*(min), 0, w+(w*(min)-5),300);

			setfillstyle(INTERLEAVE_FILL,LIGHTRED);
	        floodfill(800,800,WHITE);	
            bar(w*i, 0, w+(w*i-5),equal);
			delay(800);
					
			 setfillstyle(INTERLEAVE_FILL,LIGHTRED);
	        floodfill(800,800,WHITE);	
            bar(w*(min), 0, w+(w*(min)-5),equal);
			delay(800);

	   }
	 
	   else
	   {
	   
	   int x1=arr[i];
	   int x2=arr[min];

	    setfillstyle(SOLID_FILL,BLACK);
	        floodfill(800,800,WHITE);
            bar(w*i, 0, w+(w*i-5),300);

			delay(800);

		setfillstyle(SOLID_FILL,BLACK);
	        floodfill(800,800,WHITE);	
            bar(w*(min), 0, w+(w*(min)-5),300);

			delay(800);	

			 setfillstyle(INTERLEAVE_FILL,LIGHTRED);
	        floodfill(800,800,WHITE);	
           bar(w*i, 0, w+(w*i-5),x1);
			delay(800);
					

		
			 setfillstyle(INTERLEAVE_FILL,LIGHTRED);
	        floodfill(800,800,WHITE);	
            bar(w*(min), 0, w+(w*(min)-5),x2);
			delay(800);

			  setfillstyle(INTERLEAVE_FILL,LIGHTGRAY);
	        floodfill(800,800,WHITE);	
            bar(w*(min), 0, w+(w*(min)-5),x2);
			delay(800);


			 settextstyle(BOLD_FONT, HORIZ_DIR, 8);
	     setcolor(i%15);
	     outtextxy(80,400,"SELECTION SORT");
	   }

			}

	cleardevice();

	for(int i=0;i<30;i++)
	{
		int x=arr[i];
		    setfillstyle(INTERLEAVE_FILL,LIGHTRED);
	       floodfill(800,800,WHITE);	
            bar(w*i, 0, w+(w*i-5),x);
           delay(50);

	 settextstyle(BOLD_FONT, HORIZ_DIR, 8);
	 setcolor(BLUE);
	 outtextxy(210,400,"SORTED!!");	
			
	}

	getch();
	closegraph();

}
unsigned int __stdcall mythread1(void*) 
{
	for(int i=0;i<9;i++)
	{
PlaySound(TEXT("sound.wav"),NULL,SND_ALIAS | SND_APPLICATION);	
	}

return 0;
}
unsigned int __stdcall mythread2(void*) 
{
	for(int i=0;i<12;i++)
	{
PlaySound(TEXT("sound.wav"),NULL,SND_ALIAS | SND_APPLICATION);	
	}

return 0;
}

unsigned int __stdcall mythread3(void*) 
{
	for(int i=0;i<7;i++)
	{
PlaySound(TEXT("sound.wav"),NULL,SND_ALIAS | SND_APPLICATION);	
	}

return 0;
}
int main(int argc, char * argv[])
{
	int choice;

	cout<<"1-Bubble sort"<<endl;
	cout<<"2-Insertion sort"<<endl;
	cout<<"3-Selection sort"<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:
	HANDLE myhandleA;
	myhandleA = (HANDLE)_beginthreadex(0, 0, &mythread1, (void*)0, 0, 0);
	bubblesort();
	WaitForSingleObject(myhandleA, INFINITE);
	CloseHandle(myhandleA);

	case 2:
	HANDLE myhandleB;
	myhandleB = (HANDLE)_beginthreadex(0, 0, &mythread2, (void*)0, 0, 0);
	insertionsort();
	WaitForSingleObject(myhandleB, INFINITE);
	CloseHandle(myhandleB);

	case 3:
	HANDLE myhandleC;
	myhandleC = (HANDLE)_beginthreadex(0, 0, &mythread3, (void*)0, 0, 0);
	selectionsort();
	WaitForSingleObject(myhandleC, INFINITE);
	CloseHandle(myhandleC);

	}

  
   return 0;
}