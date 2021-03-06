#include <stdio.h>

void main ()
{
  int category,b,quantity,age;
  char name[100],name1[100],type[100],budget[100],location[100],produce[100];
  char a,crop[100],location1[100],name2[100];
  char  d[100][100];
  printf("******************WELCOME TO THE XYZ APPLICATION*******************");
  printf("Please specify your designation as among these:");
  printf("A.Farmer");
  printf("B.Buyer");
  scanf("%c",&a);
  if(a=='A')
  {
      printf("*********WELCOME TO THE SIGN UP PAGE*********");
      printf("Please enter some details:");
      printf("Name:");
      scanf("%s",name1);
      printf("Crop:");
      scanf("%s",crop);
      printf("Location:");
      scanf("%s",location1);
      printf("Quantity:");
      scanf("%d",&quantity);
      printf("**********WELCOME TO THE LOG IN PAGE**********");
      printf("Checking your credentials");
      //Add some logic to check if the data is correct
      printf("**********WELCOME TO THE USER PAGE************");
      printf("Please choose amongst these:");
      printf("1.Statistics");
      printf("2.Search for the Buyers");
      printf("3.List of all buyers");
      printf("4.Find for me(Simplified search)");
      scanf("%d",&b);
      switch(b)
      {
      case 1:
      farmerstatistics();
      break;
      case 2:
      farmersearchbuyer();
      break;
      case 3:
      farmerlistbuyer();
      break;
      case 4:
      farmerfindformebuyer();
      break;
      }
      void farmersearchbuyer()
      {
          int i;
          int n;
          n=5;
         char l[100];
        printf ("Thank you sir,Based on your crop\tPlease choose among these\n");
        printf ("a.Economical\n");
        printf ("b.Fair\n");
        printf ("c.Splurge\n");
        scanf("%s",type);
        printf("Here are your specified budget locations");
        for(i=0;i<=n;i++)
        {
            if(strcmp(d[i][2],type)==0&&strcmp(d[i][4],crop)==0)
            {
                printf("%s",d[i][3]);
            }

        }
        printf("Choose your location to deal:");
        scanf("%s",l);
        for(i=0;i<=n;i++)
        {
            if((strcmp(d[i][2],type)==0&&strcmp(d[i][4],crop)==0)&&strcmp(d[i][3],l)==0)
            {
              printf("%s",d[i][0]);
              printf("%s\n",d[i][1]);
              printf("%s\n",d[i][2]);
              printf("%s\n",d[i][3]);
              printf("%s\n",d[i][4]);
            }
        }
      }


  void farmerstatistics()
  {
      printf("You have entered your crop as %s",crop,"Here is the statistics:");

  }
  void  farmerfindformebuyer()
  {
      int n;
      n=5;
      printf("Hello to this simplified Application of the Module:\n");
      printf("Please enter the name of the Buyer with whom you want to deal:\n");
      scanf("%s",&name2);
      for(int i=0;i<=n;i++)
      {
          if(d[i][0]==name2)
          {
              printf("%s",d[i][0]);
              printf("%s\n",d[i][1]);
              printf("%s\n",d[i][2]);
              printf("%s\n",d[i][3]);
              printf("%s\n",d[i][4]);
          }
      }
  }

  void farmerlistbuyer()
  {
      int i,n;n=5;
      for(i=0;i<n;i++)
      {
          printf("\nName:%s",d[i][0]);
          printf("\nAge:%d",d[i][1]);
          printf("\nBudget:%s",d[i][2]);
          printf("\nLocation:%s",d[i][3]);
          printf("\nProduce:%s",d[i][4]);
      }
  }
  d[0][0]="Hari Singh";
  d[0][1]="25";
  d[0][2]="Economy";
  d[0][3]="Lucknow";
  d[0][4]="Rajma";
  d[1][0]="Ravi Patel";
  d[1][1]="20";
  d[1][2]="Economy";
  d[1][3]= "Vadodara";
  d[1][4]="Cotton";
  d[2][0]="Gurujeet Singh";
  d[2][1]="40";
  d[2][2]="Fair";
  d[2][3]="Ludhiana";
  d[2][4]="Wheat";
  d[3][0]="Krishna Rao";
  d[3][1]="55";
  d[3][2]="Fair";
  d[3][3]="Warangal";
  d[3][4]="Rice";
  d[4][0]="Dev Prasad";
  d[4][1]="20";
  d[4][2]="Splurge";
  d[4][3]="Ranchi";
  d[4][4]="Jute";
  d[5][0]="Raghu Tendulkar";
  d[5][1]="30";
  d[5][2]="Splurge";
  d[5][3]="Ratnagiri";
  d[5][4]="Mangoes";
}}





