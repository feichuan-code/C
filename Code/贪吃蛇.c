#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

#define H 23
#define W 75
#define WAIT_TIME 500

//����direction��ÿ��ֵ����ķ���
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

int a[H][W];        //��ͼ����
int s[H*W][2];      //������������
int sLength;        //�ߵĳ���
int direction;      //�ߵķ���

void init()         //����ʼʱ�ĳ�ʼ������
{
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);    //���عر�
    int i,j;
    for(i=0; i<H; i++)
    {
        a[i][0]=1;          //�õ�һ��Ϊ1
        a[i][W-1]=1;        //�����һ��Ϊ1
    }
    for(j=0; j<W; j++)
    {
        a[0][j]=1;      //�õ�һ��Ϊ1
        a[H-1][j]=1;    //�����һ��Ϊ1
    }
    sLength=4;          //���ߵ��������Ϊ4
    s[0][0]=H/2;
    s[0][1]=W/2;        //����ͷ���긳ֵ
    for(i=1;i<4;i++)
    {
        s[i][0]=s[0][0]+i;
        s[i][1]=s[0][1];  //���տ�ʼ����������ʼ����
    }
    direction=UP;
}

void gotoxy(int i,int j)        //�ƶ����
{
    COORD position={j,i};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),position);
}

void drawMap()                  //����ͼ
{
    gotoxy(0,0);
    int i,j;
    for(i=0;i<H;i++)
    {
        for(j=0;j<W;j++)            //����forѭ����������
        {
            if(a[i][j]==0)          //Ϊ0����ո�
                printf(" ");
            else                    //Ϊ1���#
                printf("#");
        }
        printf("\n");               //�����˻���
    }
}

void move()
{
    int i;
    gotoxy(s[sLength-1][0],s[sLength-1][1]);
    printf(" ");                            //��β�����滭�ո��Բ���β��
    for(i=sLength-1;i>0;i--)    //��β�Ϳ�ʼ��ÿһ�����λ�õ�����ǰ��һ�����λ��
    {
        s[i][0]=s[i-1][0];
        s[i][1]=s[i-1][1];
    }
    switch(direction)
    {
    case UP:
        s[0][0]--;
        break;
    case DOWN:
        s[0][0]++;
        break;
    case LEFT:
        s[0][1]--;
        break;
    case RIGHT:
        s[0][1]++;
        break;
    }

}

void drawSnake()                //����
{
    int i;
    for(i=0;i<sLength;i++)
    {
        gotoxy(s[i][0],s[i][1]);        //�ƶ��ر굽�ߵ�����
        printf("@");                    //�����λ�û���
    }
}

void key()
{
    if(kbhit()!=0)          //����м�������
    {
        char in;
        while(!kbhit()==0)  //�����������˶�������������һ������Ϊ׼
            in=getch();
        switch(in)
        {
        case 'w':
        case 'W':
            if(direction!=DOWN)         //������ͷ�ɡ�������
                direction=UP;
            break;
        case 's':
        case 'S':
            if(direction!=UP)
                direction=DOWN;
            break;
        case 'a':
        case 'A':
            if(direction!=RIGHT)
                direction=LEFT;
            break;
        case 'd':
        case 'D':
            if(direction!=LEFT)
                direction=RIGHT;
            break;
        }
    }
}

int main()
{
    init();                     //����ʼʱ�ĳ�ʼ������
    drawMap();                  //����ͼ
    while(1)
    {
        drawSnake();                //����
        Sleep(WAIT_TIME);           //�ȴ�һ��ʱ��
        key();
        move();                     //�ƶ��ߣ���Ҫ���޸�������������ݣ�
    }
    getchar();
    return 0;
}
