#include<stdio.h>
#include<windows.h>
#include <time.h>
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;

    clock_t start_time = clock();

    while (clock() < start_time + milli_seconds)
        ;
}

int main()
{
	int row=0,col=0,value=0;
	int size=0;
	printf("please enter the size\n");
	scanf("%d",&size);
	if(0==size%2){
        printf("please enter an odd number");
	}else{
	row=1;
	col=(size+1)/2;
	value=1;
	do{
        gotoxy(col*5,row);
        printf("%5d",value);
        delay(2);
        if(0==value%size){
            row++;
        }
        else{
            row--;
            col--;
        }
        if(0==row){
          row=size;
        }
        if(0==col){
        col=size;
        }
        value++;
	}while(value<=size*size);
	}

	return 0;
}
