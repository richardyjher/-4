#include <stdio.h> 
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int y,m,d,days,February;
    
    printf("��J�~��:");
    scanf("%d",&y);
    
    printf("��J���:");
    scanf("%d",&m);
     
    printf("��J���:");
    scanf("%d",&d);
    
    if((y%4)==0&&(y%100)!=0||(y%400)==0&&(y%3200)!=0){ 
    
        February=29;} 
    
    else{ 
        February=28;} 
 
 
        switch (m) {
            case 1:
                days=0;
                printf("%d�~%d��%d��O�@�~����%d�ѡI",y,m,d,days+d);
                break;
            case 2:
                days=31; 
                printf("%d�~%d��%d��O�@�~����%d�ѡI",y,m,d,days+d);
                break;
            case 3:
                days=31+February;
                printf("%d�~%d��%d��O�@�~����%d�ѡI",y,m,d,days+d);
                break;
            case 4:
                days=62+February;
                printf("%d�~%d��%d��O�@�~����%d�ѡI",y,m,d,days+d);
                break;
            case 5:
                days=92+February;
                printf("%d�~%d��%d��O�@�~����%d�ѡI",y,m,d,days+d);
                break;
            case 6:
                days=123+February;
                printf("%d�~%d��%d��O�@�~����%d�ѡI",y,m,d,days+d);
                break;
            case 7:
                days=153+February;
                printf("%d�~%d��%d��O�@�~����%d�ѡI",y,m,d,days+d);
                break;
            case 8:
                days=184+February;
                printf("%d�~%d��%d��O�@�~����%d�ѡI",y,m,d,days+d);
                break;
            case 9:
                days=215+February;
                printf("%d�~%d��%d��O�@�~����%d�ѡI",y,m,d,days+d);
                break;
            case 10:
                days=245+February;
                printf("%d�~%d��%d��O�@�~����%d�ѡI",y,m,d,days+d);
                break;
            case 11:
                days=276+February;
                printf("%d�~%d��%d��O�@�~����%d�ѡI",y,m,d,days+d);
                break;
            case 12:
                days=306+February;
                printf("%d�~%d��%d��O�@�~����%d�ѡI",y,m,d,days+d);
                break;
         	
            default:
                printf("��J������~!"); 
                break;
        		}
      			system("PAUSE");
    			return 0;
    		}
