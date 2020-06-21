#include<stdio.h>
#include<time.h>
#include<stdlib.h>
struct army 
{
	char name[50];
	int attack;
	int cost;
};
void main()
{
struct army a[5];
FILE*fpp;
int swi,b,t1,i,an,p=0,x,y,ply1,ply2,player1,player2;
int qw,money_spent=0;
int money,unit,zy=0,py=0,qy=0;
int abc=2000,count=0;
int fg=0,g=0,fr=0,er=0,cd=0,ir;
int qwe=0;
int s,toss;
char name[20],name1[20];
s=rand();
int d=0,z=0;
int attk[9],attk1[9],units[9],units1[9];

while(count!=2)
{
	money=10000;
	qy=0,py=0,zy=0;
	printf("\n                              Welcome to the War Simulator \n\n\n\n\n");
	if(count==0)
	{
		printf("ENTER NAME OF PLAYER 1\n");
    	scanf("%[^\n]",name);
    	printf("ENTER NAME OF PLAYER 2\n");
    	scanf("%s",name1);
    	toss=s%2;
    	printf("PLAYER %d playes first\n",toss+1);
	}
	if(count==1)
	{
		printf("                                 NEXT PLAYER CHOOSE ARMY\n\n");
		printf("DO YOU WANT INTELLIGENCE REPORT?\n");
		printf("PRESS 1 FOR YES OR PRESS OTHER KEY FOR NO\n");
		scanf("%d",&ir);
		if(ir==1)
		{
			money=money-2000;
			printf("THESE IS ARMY OF OPPONENT AS :\nSUBCATEGORY         ATTACK-POINTS      ITS UNITS\n");
			printf("INFANTRY             ATTACK-%d      QUANTITY-%d\n\n",attk[0],units[0]);
			printf("ARTILLERY            ATTACK-%d      QUANTITY-%d\n\n",attk[1],units[1]);
			printf("TANKS                ATTACK-%d      QUANTITY-%d\n\n",attk[2],units[2]);
			printf("AIRCRAFT CARRIERS    ATTACK-%d      QUANTITY-%d\n\n",attk[3],units[3]);
			printf("SUBMARINES           ATTACK-%d      QUANTITY-%d\n\n",attk[4],units[4]);
			printf("NAVAL AIR-ARM        ATTACK-%d      QUANTITY-%d\n\n",attk[5],units[5]);
			printf("AIRCRAFT             ATTACK-%d      QUANTITY-%d\n\n",attk[6],units[6]);
			printf("HELICOPTERS          ATTACK-%d      QUANTITY-%d\n\n",attk[7],units[7]);
			printf("MISSILES             ATTACK-%d      QUANTITY-%d\n\n",attk[8],units[8]);	
		}
	}
	label:	
	printf("Select army one by one : ");
    printf("\n1.GROUND FORCES");
    printf("\n2.NAVAL FORCES");
    printf("\n3.AERIAL FORCES\n");
    
    printf("\nEdit Ground Forces :\n");
    money_spent=0;
    while(money_spent<=2000||d==0)
    {
    money=money+money_spent;
	z=0;
	while(py!=3)
	{
	printf("1.INFANTRY\n");
	printf("2.ARTILLERY\n");
	printf("3.TANKS\n");
	printf("Choose Sub-category you want to edit : ");
	scanf("%d",&b);
	if(b==1)
	{
	    printf("5 Kinds of INFANTRY\n");
		fpp = fopen("INFANTRY.txt","rb");
	    fread(a,sizeof(struct army),5,fpp);
        fclose(fpp);
	    for(i=0;i<5;i++)
        {
	        printf("\nName:%s\tAttack:%d\tCost:%d\n\n",a[i].name,a[i].attack,a[i].cost);
        }
		printf("Which Infantry division you want in your army : ");
		scanf("%d",&an);
		printf("How many units you want : ");
		scanf("%d",&unit);
		if(p==0)
		{
			attk[0]=a[an-1].attack;
            units[0]=unit;
        }
        else
        {
            attk1[0]=a[an-1].attack;
            units1[0]=unit;
        }
		money=money-a[an-1].cost*unit;
		money_spent=money_spent+a[an-1].cost*unit;
		printf("MONEY LEFT WITH: %d \n",money);
		py+=1;
		
	}
	if (b==2)
	{
		printf("5 Kinds of ARTILLERY\n");
        fpp = fopen("artillery.txt","rb");
        fread(a,sizeof(struct army),5,fpp);
	    fclose(fpp);
	    for(i=0;i<5;i++)
        {
	    printf("\nName:%s\tAttack:%d\tCost:%d\n\n",a[i].name,a[i].attack,a[i].cost);
        }
	    printf("Which Artillery division you want in your army : ");
		scanf("%d",&an);
		printf("How many units you want : ");
    	scanf("%d",&unit);
		if(p==0)
		{
            attk[1]=a[an-1].attack;
            units[1]=unit;
        }
        else
        {
	        attk1[1]=a[an-1].attack;
            units1[1]=unit;
		}
		money=money-a[an-1].cost*unit;
		money_spent=money_spent+a[an-1].cost*unit;
		printf("MONEY LEFT WITH: %d \n",money);
		py+=1;
		
	}
	if (b==3)
	{ 
		printf("5 kinds of TANKS\n");
        fpp = fopen("tank.txt","rb");
        fread(a,sizeof(struct army),5,fpp);
	    fclose(fpp);
	    for(i=0;i<5;i++)
        {
	        printf("\nName:%s\tAttack:%d\tCost:%d\n\n",a[i].name,a[i].attack,a[i].cost);
        }
        printf("Which Tanks division you want in your army : ");
        scanf("%d",&an);
        printf("How many units you want : ");
        scanf("%d",&unit);
		if(p==0)
		{
		    attk[2]=a[an-1].attack;
            units[2]=unit;
        }          
		else
        {
	        attk1[2]=a[an-1].attack;
            units1[2]=unit;
        }
        money=money-a[an-1].cost*unit;
		money_spent=money_spent+a[an-1].cost*unit;
		printf("MONEY LEFT WITH: %d \n",money);
		py+=1;
		
	}
    }
	if(money_spent>2000)
	{
    printf("Press 1 to continue to next category and 0 to edit the current : ");
    scanf("%d",&d);
    }}
    printf("\nEdit Naval Forces : \n");
    money_spent=0;
	while(money_spent<=2000||er==0)
    {
    money=money+money_spent;
    z=0;
	while(qy!=3)
	{
    printf("1.AIRCRAFT CARRIERS\n");
    printf("2.SUBMARINES\n");
    printf("3.NAVAL AIR-ARM\n");
    printf("Choose Sub-category you want to edit : ");
    scanf("%d",&b);
    
    if(b==1)
    {
        printf("5 Kinds of AIRCRAFT CARRIERS \n");
        fpp = fopen("aircraft carriers.txt","rb");
	    fread(a,sizeof(struct army),5,fpp);
	    fclose(fpp);
        for(i=0;i<5;i++)
        {
	        printf("\nName:%s\tAttack:%d\tCost:%d\n\n",a[i].name,a[i].attack,a[i].cost);
        }
        printf("Which Aircraft Carrier you want in your army : ");
        scanf("%d",&an);
        printf("How many units you want : ");
        scanf("%d",&unit);
		if(p==0)
		{
	        attk[3]=a[an-1].attack;
            units[3]=unit;
        }
        else
        {
            attk1[3]=a[an-1].attack;
            units1[3]=unit;
		}
        money=money-a[an-1].cost*unit;
		money_spent=money_spent+a[an-1].cost*unit;
        printf("MONEY LEFT WITH: %d \n",money);
        qy+=1;
        
        
    }
    if (b==2)
    {
        printf("5 Kinds of SUBMARINES\n");
		fpp = fopen("submarine1.txt","rb");
	    fread(a,sizeof(struct army),5,fpp);
	    fclose(fpp);
        for(i=0;i<5;i++)
        {
	        printf("\nName:%s\tAttack:%d\tCost:%d\n\n",a[i].name,a[i].attack,a[i].cost);
        }
        printf("Which Submarines you want in your army : ");
        scanf("%d",&an);
        printf("How many units you want : ");
        scanf("%d",&unit);
    	if(p==0)
		{
		    attk[4]=a[an-1].attack;
            units[4]=unit;
		}
        else
        {
            attk1[4]=a[an-1].attack;
            units1[4]=unit;
		}
        money=money-a[an-1].cost*unit;
		money_spent=money_spent+a[an-1].cost*unit;
		printf("MONEY LEFT WITH: %d \n",money);
		qy+=1;
		
    }
	if(b==3)
	{
        printf("5 kinds of NAVAL AIR-ARM\n");
        fpp = fopen("naval air-arm.txt","rb");
	    fread(a,sizeof(struct army),5,fpp);
	    fclose(fpp);
	    for(i=0;i<5;i++)
        {
         	printf("\nName:%s\tAttack:%d\tCost:%d\n\n",a[i].name,a[i].attack,a[i].cost);
        }
        printf("Which Naval Air-arm you want in your army : ");
        scanf("%d",&an);
        printf("How many units you want : ");
        scanf("%d",&unit);
		if(p==0)
		{
		    attk[5]=a[an-1].attack;
            units[5]=unit;
        }
        else
        {
            attk1[5]=a[an-1].attack;
            units1[5]=unit;
		}
        money=money-a[an-1].cost*unit;
		money_spent=money_spent+a[an-1].cost*unit;
        printf("MONEY LEFT WITH: %d \n",money);
        qy+=1;
    }
	}
    if(money_spent>2000){
	printf("Press 1 to continue to next category and 0 to edit the current : ");
    scanf("%d",&er);}
    }
    printf("\nEdit Aerial Forces\n");
    money_spent=0;
    while(money_spent<=2000||fr==0) 
	{
	money=money+money_spent;
	
    z=0;
	while(zy!=3)
	{
	printf("AERIAL FORCES\n");
    printf("1.AIRCRAFT\n ");
    printf("2.HELICOPTERS\n");
    printf("3.MISSILES\n");
    printf("Which sub-category you want to edit : ");
    scanf("%d",&b);
    
	
    
    if(b==1)
    {
        printf("5 kinds of AIRCRAFT\n");
        fpp = fopen("aircraft.txt","rb");
	    fread(a,sizeof(struct army),5,fpp);
	    fclose(fpp);
	    for(i=0;i<5;i++)
        {
	        printf("\nName:%s\tAttack:%d\tCost:%d\n\n",a[i].name,a[i].attack,a[i].cost);
        }
        printf("Which Aircraft you want in your army : ");
        scanf("%d",&an);
        printf("How many units you want : ");
        scanf("%d",&unit);
        if(p==0)
        {
		    attk[6]=a[an-1].attack;
            units[6]=unit;
        }
        else
        {
		    attk1[6]=a[an-1].attack;
            units1[6]=unit;
        }
        money=money-a[an-1].cost*unit;
		money_spent=money_spent+a[an-1].cost*unit;
        printf("MONEY LEFT WITH: %d \n",money);
        zy+=1;
        
    }
    if (b==2)
    {
        printf("5 kinds of HELICOPTER\n");
        fpp = fopen("helicopter.txt","rb");
	    fread(a,sizeof(struct army),5,fpp);
	    fclose(fpp);
	    for(i=0;i<5;i++)
        {
	        printf("\nName:%s\tAttack:%d\tCost:%d\n\n",a[i].name,a[i].attack,a[i].cost);
        }
		printf("Which Helicopter you want in your army : ");
        scanf("%d",&an);
        printf("How many units you want : ");
        scanf("%d",&unit);
        if(p==0)
        {
			attk[7]=a[an-1].attack;
            units[7]=unit;
        }
        else
        {
			attk1[7]=a[an-1].attack;
            units1[7]=unit;
        }                   
        money=money-a[an-1].cost*unit;
		money_spent=money_spent+a[an-1].cost*unit;
        printf("MONEY LEFT WITH: %d\n",money);
        zy+=1;
        
    }
	if(b==3)
	{
		printf("5 kinds of Missiles\n");
        fpp = fopen("missiles.txt","rb");
	    fread(a,sizeof(struct army),5,fpp);
	    fclose(fpp);
	    for(i=0;i<5;i++)
        {
            printf("\nName:%s\tAttack:%d\tCost:%d\n\n",a[i].name,a[i].attack,a[i].cost);
        }
        printf("Which Missiles you want in your army : ");
        scanf("%d",&an);
        printf("How many units you want : ");
        scanf("%d",&unit);
        if(p==0)
        {
			attk[8]=a[an-1].attack;
            units[8]=unit;
        }
        else
        {
			attk1[8]=a[an-1].attack;
            units1[8]=unit;
        }
        money=money-a[an-1].cost*unit;
		money_spent=money_spent+a[an-1].cost*unit;
        printf("MONEY LEFT WITH: %d \n",money);
        zy+=1;
	}    
	}
	if(money_spent>2000)
	{
    printf("Press 1 to continue and 0 to edit the current category : ");
    scanf("%d",&fr);
    }
	}
	if(zy+py+qy==9)
	{
	    p=p+1;
	    count=count+1;
    }
    }

for(i=0;i<3;i++)
{
    x=1;
    y=1;
    int value=combat(attk[i],attk1[i],units[i],units1[i],&x,&y);
    if(x==1)
    {
		player1=player1+value;
    }
    else
    {
		player2=player2+value;
	}
}
if (player1>player2)
{
    ply1=ply1+1;
}
else
{
    ply2=ply2+1;
}
player1=0;
player2=0;
for (i=3;i<6;i++)
{
    x=1;
    y=1;
    int value=combat(attk[i],attk1[i],units[i],units1[i],&x,&y);
    if(x==1)
    {
		player1=player1+value;
    }
    else
    {
		player2=player2+value;
    }
}
if (player1>player2)
{
	
	ply1=ply1+1;
}
else
{
	ply2=ply2+1;
}
player1=0;
player2=0;
for (i=6;i<9;i++)
{
	x=1;
    y=1;
    int value=combat(attk[i],attk1[i],units[i],units1[i],&x,&y);
    if(x==1)
    {
		player1=player1+value;
    }
    else
    {
		player2=player2+value;
	}
}	
if (player1>player2)
{
	ply1=ply1+1;
}        	
else
{
	ply2=ply2+1;
}
if(ply1>1)
printf("WINNER - PLAYER 1");
else
printf("WINNER - PLAYER 2");
}
int combat(int a ,int op,int unit1,int unit2,int *ptr1,int *ptr2)
{
    int q,w;
	int t=0;
	int a0=a;
	int b0=op;
	int r=0,a1=a,a2=op;
    int n=unit1;
   	int b=unit2;
  	int att1=n*a1;
    int att2=b*a2;
    srand(time(0));
    while(n>0&&b>0)
	{
	    q=rand();
	    w=rand();
	    if(q%a1>w%a2)
	    {
		    att2=att2-a2;
		    a1=q%a1-w%a2;
		    b=b-1;
		    a2=b0;
	    }
	    else if(q%a1==w%a2)
	    {}
	    else
	    {
		    att1=att1-a1;
		    a2=w%a2-q%a1;
		    n=n-1;
		    a1=a0;
	    }
	}
	if(n==0)
	{
	    att1=0;
	    *ptr1=0;
       	return att2;
	}
    else
	{
	    att2=0;
	    *ptr2=0;
		return att1;
	}
}
