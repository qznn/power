 
#include <iostream>
#include<stdlib.h>  //rand()
#include<time.h>    //clock
#include<conio.h>  //getch()  kbhit()
using namespace std;
int snakeheadx=10,snakeheady=10,snaketailx,snaketaily,inlen=5,inhead=5,foodx,foody;
char direction;
void Map(char map[][20])  //20*20墙面边框  
{
    int i,j;
    for(i=0;i<20;i++)
    {
        if(i==0||i==19)
        {
            for(j=0;j<20;j++)
                map[i][j]='*';
        }
        else
        {
            map[i][0]='*';
            map[i][19]='*';
        }

    }
}
void snakebody(int snake[][20],char map[][20]) //蛇身,假定蛇最初向右运动。 
{
    int i,a,b;
    for(i=snakeheady;i>5;i--)
    {
        snake[snakeheadx][i]=inlen;
        inlen--;
        if(i==6)
        {
            snaketaily=i;
            snaketailx=snakeheadx;
        }
    }
    for(a=0;a<20;a++)
    {
        for(b=0;b<20;b++)
        {
            if(snake[a][b]==0)  cout<<map[a][b];
            else
            {
                if(snake[a][b]==5) cout<<"&";
                else cout<<"+";
            }
        }
        cout<<endl;
    }
}
void movetail(int snake[][20])  //实现蛇尾的移动，记录新位置  
{
      if(snake[snaketailx][snaketaily]+1==snake[snaketailx+1][snaketaily])
        {
           snake[snaketailx][snaketaily]=0;
           snaketailx++;
        }
       else if(snake[snaketailx][snaketaily]+1==snake[snaketailx-1][snaketaily])
        {
            snake[snaketailx][snaketaily]=0;
            snaketailx--;
        }

       else if(snake[snaketailx][snaketaily]+1==snake[snaketailx][snaketaily+1])
        {
            snake[snaketailx][snaketaily]=0;
            snaketaily++;

        }
        else if(snake[snaketailx][snaketaily]+1==snake[snaketailx][snaketaily-1])
        {
            snake[snaketailx][snaketaily]=0;
            snaketaily--;
        }
}
bool go(int x,int y)    //判断蛇是否撞墙， 
{
    if(x==0||x==18||y==0||y==18)
        return false;
        else return true;
}
void food(char map[][20],int snake[][20])
{
    srand(time(NULL));  //利用系统时间，返回随机数。 
    do
    {
        foodx=rand()%18+1;
        foody=rand()%18+1;
    }
    while(snake[foodx][foody]!=0);
        map[foodx][foody]='$';
}
bool eat(char map[][20])    //蛇是否吃到食物， 
{
    if(snakeheadx==foodx&&snakeheady==foody)
        return true;
    else return false;
}

void movesnake(char map[][20],int snake[][20])  //蛇的移动，  
{
    int timeover,start;
    start=clock();
    direction='d';
    while(1)
    {
        if(go(snakeheadx,snakeheady))
        {
            while((timeover=(clock()-start<=500))&&!kbhit());
            if(kbhit())    direction=getch();   //读取字符
            if(direction=='a'||'A')
            {
                if(snake[snakeheadx][snakeheady-1]!=0)  return;
                snakeheady--;
                if(eat(map))
                {
                    snake[snakeheadx][snakeheady]=inhead++;
                    inlen++;
                    map[foodx][foody]=' ';
                    food(map,snake);
                }
                else
                {
                    snake[snakeheadx][snakeheady]=inhead;
                    movetail(snake);
                }
            }
            else if(direction=='w'||direction=='W')
            {
                if(snake[snakeheadx-1][snakeheady]!=0) return;
                snakeheadx--;
                if(eat(map))
                {
                    snake[snakeheadx][snakeheady]=inhead++;
                    inlen++;
                    map[foodx][foody]=' ';
                    food(map,snake);
                }
                else
                {
                    snake[snakeheadx][snakeheady]=inhead++;
                    movetail(snake);
                }

            }
            else if(direction=='d'||direction=='D')
            {
                if(snake[snakeheadx][snakeheady+1]!=0) return;
                snakeheady++;
                if(eat(map))
                {
                    snake[snakeheadx][snakeheady]==inhead++;
                    inlen++;
                    map[foodx][foody]=' ';
                    food(map,snake);
                }
                else
                {
                    snake[snakeheadx][snakeheady]=inhead++;
                    movetail(snake);
                }
            }
            else if(direction=='s'||'S')
            {
                if(snake[snakeheadx+1][snakeheady]!=0) return;
                snakeheadx++;
                if(eat(map))
                {
                    snake[snakeheadx][snakeheady]=inhead++;
                    inlen++;
                    map[foodx][foody]=' ';
                    food(map,snake);
                }
                else
                {
                    snake[snakeheadx][snakeheady]=inhead++;
                    movetail(snake);
                }
            }
            system("CLS");
          for(int i=0;i<20;i++)
          {
            for(int j=0;j<20;j++)
              {
               if(snake[i][j]==0)
                cout<<map[i][j];
               else
                 {
                  if(snake[i][j]==inhead)
                  cout<<"&";
                  else cout<<"+";
                  }
              }
        cout<<endl;
          }
    }
    else
    {
        system("CLS");
        cout<<"end length:"<<inlen;

    }
}
}
int main()
{
   int i,j;
    int snake[20][20];
    char map[20][20];
    for(i=0;i<20;i++)
    {
        for(j=0;j<20;j++)
        {
           snake[i][j]=0;
           map[i][j]=' ';
        }
    }
    Map(map);
    food(map,snake);
    snakebody(snake,map);
    movesnake(map,snake);
    return 0;
}
