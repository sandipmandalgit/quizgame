#include<stdio.h>
int main()
{int inp,inp2,inp3,inp4,inp5,inp6,inp7,inp8,inp9,score=0;

printf("\nanswer the following questions\n");

 {
 printf("Q.1who is our present prime minister?\n1.sandip mandal,2.Manmohan singh,3.Vladimir Putin,4.Narendra modi. ");
scanf("%d",&inp);
if(inp==4)
{
printf("\ncorrect\n");
score++;}
else
printf("better luck next time.");}
if(inp==4)
{printf("\nQ2.india is in which continent?\n1.europe,2.asia,3.africa,4.america");
scanf("%d",&inp2);
if(inp2==2)
{

printf("\ncorrect\n");
score++;}
printf("\nscore is%d",score);}
else
printf("\nbetter luck nxt time");
{


if(inp2==2){


	printf("\nQ3.sundarban is in which state of india?\n1.Delhi,2.Maharastra,3.Kerala,4.West begal");
	scanf("%d",&inp3);
	if (inp3==4)
{
		printf("\ncorrect\n");
	score++;}
	else
	printf("\nbetter luck next time");}
	printf("\nscore is:%d",score);
}

if(inp3==4)

{
  printf("\nQ4.BITCOIN is which kind of currency?\n1.Indian currency,2.Japnese currency,3.Crypto currency,4.Foreign currency");
  scanf("%d",&inp4);
if (inp4==3)
{
    printf("\ncorrect\n");
    score++;}
else
printf("\nbetter luck next time");
printf("\nthe score is:%d",score);
}

if(inp4==3)

{printf("\n Q5.Which place is known as heaven on Earth?\n1.Kashmir,2.Kolkata,3.Tamil nadu,4.Goa");
scanf("%d",&inp5);
if(inp5==1)
{printf("\ncorrect\n");
score++;
}
else
printf("\nBetter luck next time");
printf("\nYour score is :%d",score);


}

if(inp5==1)
{printf("\nQ6.Which city is also known as PINK CITY? \n1.Kolkata,2.Jaipur,3.Kota,4.Chandigarh");
scanf("%d",&inp6);
if(inp6==2)
{printf ("\ncorrect\n");
score++;
}
else
printf("\nBetter luck next time");
printf("\nyour score is:%d",score);
}
if(inp6==2)
{printf("\nQ7.Which is the biggest flower in the world?\n1.Autralian acasia,2.Ficus benghalensis,3.Rafflesia arnoldii,4.Ixora ");
scanf("%d",&inp7);
if(inp7==3)
{printf("\ncorrect\n");
score++;
}
else
printf("\nBetter luck next time");
printf("\nYour score is:%d",score);
}

if(inp7==3)
{printf("\nQ8.Which hormone is called FIGHT OR FLIGHT Hormone?\n1.Adrenaline,2.Thyroid,3.Human gondotropin hormone,4.Growth hormone");

scanf("%d",&inp8);
if(inp8==1)
{printf("\ncorrect\n");
score++;
}
else
printf("\nBetter luck next time");
printf("\nYour score is:%d",score);
}
if (inp8==1)
{printf("\nQ9.Who invented telephone?\n1.Thomas edition ,2.Alexender grambel,3. sir Issac newton,4.Sattyendra nath bose");
scanf("%d",&inp9);
if(inp9==2)
{printf("\ncorrect");
score++;
}
else
printf("\nBetter luck next time\n");
printf("\nyour score is:%d",score);

}

return 0;
}

