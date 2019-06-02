#include <stdio.h>
#include <string.h>
int main() {
	FILE *fp;
fp = fopen("students data.txt", "a+");
FILE *f2;
f2= fopen("students data2.txt", "a+");
int l,count=1,a[2000],f,i=0,b[2000],d[2000][22],e[2000][22],h,c1[2000],d1[2000][22],e1[2000][22],a1[2000],b1[2000],so;
char x;

  int ch = getc(f2);
 while (ch != EOF)
  {
    ch = getc(f2);count++;
  }
l=count/94;
for(i=0;i<l;i++)
{
fscanf(fp,"%d",&a[i]);
fscanf(fp,"%d",&b[i]);
c1[i]=b[i];
  for(h=0;h<21;h++)
  {
      fscanf(fp,"%d%c%d",&d[i][h],&x,&e[i][h]);
  }
}   //   printf("%d",count);
int j,s,k;
for(j=0;j<l;j++)
{
    for(k=0;k<l-j-1;k++)
    {
        if(c1[k]>c1[k+1])
        {
            s=c1[k];
            c1[k]=c1[k+1];
            c1[k+1]=s;
        }}}
for(i=0;i<l;i++)
{
    for(f=0;f<l;f++)
    {
   if (c1[i]==b[f])
    {
   a1[i]=a[f];   b1[i]=b[f];
  for(h=0;h<21;h++)
  {
      d1[i][h]=d[f][h];    e1[i][h]=e[f][h];
  }
  break;
    }
    }
    }
    int k1=50,k2=10,k3=7,k4=4,k5=15,arr1[2000],arr2[2000],k6=12,k7=6,k8=4,k9=22,k10=10,k11=7,k12=25,k13=3,k14=16,k15=12,k16=10,k17=10,k18=30,k19=8,k20=7,flag=0,p=0;
for(i=0;i<l;i++)
{
    flag=0;
    for(h=0;h<21;h++)

    {
        if ((d1[i][h]==9)&&(e1[i][h]==9))
        {
            arr1[i]=9;   arr2[i]=9;
        }
        else if ((d1[i][h]==0)&&(e1[i][h]==0))
            {
            while(k1!=0)
            {
                arr1[i]=0;   arr2[i]=0;
                k1--;
                flag=1;
                break;
            }
            }
        else if ((d1[i][h]==0)&&(e1[i][h]==1))
            {   while (k2!=0)
            {
                arr1[i]=0;   arr2[i]=1;
                k2--;
                flag=1;
                break;
            }
            }
         else if ((d1[i][h]==0)&&(e1[i][h]==2))
            {   while (k3!=0)
            {
                arr1[i]=0;   arr2[i]=2;
                k3--;
                flag=1;
                break;
            }
            }
        else if ((d1[i][h]==0)&&(e1[i][h]==3))
            {   while (k4!=0)
            {
                arr1[i]=0;   arr2[i]=3;
                k4--;
                flag=1;
                break;
            }
            }
        else if ((d1[i][h]==0)&&(e1[i][h]==4))
            {   while (k5!=0)
            {
                arr1[i]=0;   arr2[i]=4;
                k5--;
                flag=1;
                break;
            }
            }
         else if ((d1[i][h]==1)&&(e1[i][h]==0))
            {   while (k6!=0)
            {
                arr1[i]=1;   arr2[i]=0;
                k6--;
                flag=1;
                break;
            }
            }
          else if ((d1[i][h]==1)&&(e1[i][h]==1))
            {   while (k7!=0)
            {
                arr1[i]=1;   arr2[i]=1;
                k7--;
                flag=1;
                break;
            }
            }
          else if ((d1[i][h]==1)&&(e1[i][h]==2))
          {
            while (k8!=0)
            {
                arr1[i]=1;   arr2[i]=2;
                k8--;
                flag=1;
                break;
            }
            }
          else if ((d1[i][h]==1)&&(e1[i][h]==3))
            {
                while (k9!=0)
                {
                arr1[i]=1;   arr2[i]=3;
                k9--;
                flag=1;
                break;
            }
            }
          else if ((d1[i][h]==1)&&(e1[i][h]==4))
            {   while (k10!=0)
            {
                arr1[i]=1;   arr2[i]=4;
                k10--;
                flag=1;
                break;
            }
            }
        else if ((d1[i][h]==2)&&(e1[i][h]==0))
            {   while (k11!=0)
            {
                arr1[i]=2;   arr2[i]=0;
                k11--;
                flag=1;
                break;
            }
            }
        else if ((d1[i][h]==2)&&(e1[i][h]==1))
            {   while (k12!=0)
            {
                arr1[i]=2;   arr2[i]=1;
                k12--;
                flag=1;
                break;
            }
            }
        else if ((d1[i][h]==2)&&(e1[i][h]==2))
            {  while (k13!=0)
            {
                arr1[i]=2;   arr2[i]=2;
                k13--;
                flag=1;
                break;
            }
            }
        else if ((d1[i][h]==2)&&(e1[i][h]==3))
            {
             while (k14!=0)
            {
               arr1[i]=2;   arr2[i]=3;
                k14--;
                flag=1;
                break;
            }
            }
        else if ((d1[i][h]==2)&&(e1[i][h]==4))
            {   while (k15!=0)
            {
                arr1[i]=2;   arr2[i]=4;
                k15--;
                flag=1;
                break;
            }
            }
        else if ((d1[i][h]==3)&&(e1[i][h]==0))
            {   while (k16!=0)
            {
                arr1[i]=3;   arr2[i]=0;
                k16--;
                flag=1;
                break;
            }
            }
        else if ((d1[i][h]==3)&&(e1[i][h]==1))
            {   while (k17!=0)
            {
                arr1[i]=3;   arr2[i]=1;
                k17--;
                flag=1;
                break;
            }
            }
        else if ((d1[i][h]==3)&&(e1[i][h]==2))
            {   while (k18!=0)
            {
                arr1[i]=3;   arr2[i]=2;
                k18--;
                flag=1;
                break;
            }
            }
        else if ((d1[i][h]==3)&&(e1[i][h]==3))
            {   while (k19!=0)
            {
                arr1[i]=3;   arr2[i]=3;
                k19--;
                flag=1;
                break;
            }
            }
        else if ((d1[i][h]==3)&&(e1[i][h]==4))
            {   while (k20!=0)
            {
                arr1[i]=3;   arr2[i]=4;
                k20--;
                flag=1;
                break;
            }
            }
            if (flag==1)
           { break;  }
           }
      }

      int h1 ,t ,b2[2000][22],room = 0, v,w,y=0,choice,c[2000][22];
      char m='.',app[2000];
while (1)
{
    printf("Enter '1' for Registration and '2' for Checking Seats.\n");
    scanf("%d",&choice);

if (choice==1)
    {
         printf("1-Register\n2-Exit\n");
        scanf("%d",&x);
        if (x==2)
        {
            return 0;
        }
        else if (x==1)
        {
            printf("Enter your 4 digit application number between 1000 to 9999.\n");
            scanf("%s",app);
            int length=strlen(app);
        if (length!=4)
        {
            printf("Number of digits of entered application no are not correct.Please try again.  \n");
                    printf("\n");
                    continue;
        }

    int change=atoi(app);
            int hi=0,i1;
            for (i1=0;i1<l;i1++)
            {
                if(a1[i1]==change)
                {
                    hi=1;
                    break;
                }
            }
            if ((change>9999)||(change<1000))
                {
                    printf("Invalid application no. \n");
                    printf("\n");
                    continue;
                }
            else if (hi==1)
            {
                printf("Application number already exist.\n");

                printf("\n");
                continue;
            }


            printf("You can give at most 20 preferences.\n");
            printf("\n");
            for (j=0;j<20;j++)
            {
           printf("Enter College code : \n9-If your choice filling is complete.\n0-IIT Bombay\n1-IIT Delhi\n2-IIT Guwahati\n3-IIT Kanpur\n");
           scanf("%d",&c[i][j]);
           if (c[i][j]==9)
            break;
           if ((c[i][j]!=0)&&(c[i][j]!=1)&&(c[i][j]!=2)&&(c[i][j]!=3))
           {
               j=j-1;
               printf("Not a valid choice. Please try again.\n");
               continue;
           }
           printf("\n");
          printf("Enter Branch code : \n0-Electrical Engineering\n1-Civil Engineering\n2-Computer Science and Engineering\n3-Chemical Engineering\n4-Mechanical Engineering\n");
           scanf("%d",&b2[i][j]);
           if ((b2[i][j]!=0)&&(b2[i][j]!=1)&&(b2[i][j]!=2)&&(b2[i][j]!=3)&&(b2[i][j]!=4))
              {  j=j-1;
               printf("Not a valid choice. Please try again.\n");
               continue;
           } printf("\n"); }
           while(j<21)
           {
               c[i][j]=9;   b2[i][j]=9;
               j++;
           }

            fprintf(fp,"\n");
            fprintf(fp,"%d %d ",change,l);
            fprintf(f2,"\n");
            fprintf(f2,"%d %d ",change,l);


             for(j=0;j<21;j++)
            {
              fprintf(fp,"%d%c%d ",c[i][j],m,b2[i][j]);
               fprintf(f2,"%d%c%d ",c[i][j],m,b2[i][j]);}

            printf("\n");
            printf("Your application number is :%d\nYour rank is : %d\nYour preferences are- ",change,l);


             for(j=0;j<21;j++)
            {
               printf("%d%c%d ",c[i][j],m,b2[i][j]);}


            return 0;
            printf("\n");
            i++;

        }

    }
      else if (choice==2)
    {

    printf("Enter 1 for Checking your status.\nEnter 2 for Checking seat status.\nEnter 3 for Exit.\n");
    scanf("%d",&h1);
    printf("\n");
   if (h1==3)
    return 0;
     else if (h1==1)
       {
        printf("Enter your 4 digit application number.\n");
        scanf("%d",&t);


        for (i=0;i<l;i++)
        {
            if (a1[i]==t)
               {
                   room=1;
                   break;
               }
        }
        if ((t<1000)||(t>9999))
        {
            printf("Invalid Application Number\n");
        }
        else if (room == 0)
        {
            printf("Application Number Not Found\n");
        }
        else
        {
        printf("Your rank is : %d\n",b1[i]);
        if (arr1[i]==0)
            printf("Your alloted college is : IIT Bombay\n");
        else if (arr1[i]==1)
             printf("Your alloted college is : IIT Delhi\n");
        else if (arr1[i]==2)
         printf("Your alloted college is : IIT Guwahati\n");
        else if (arr1[i]==3)
         printf("Your alloted college is : IIT Kanpur\n");
        else
            printf("Not Alloted\n");

        if (arr2[i]==0)
            printf("Your alloted branch is : Electrical Engineering\n");
        else if (arr2[i]==1)
            printf("Your alloted branch is : Civil Engineering\n");
        else if (arr2[i]==2)
            printf("Your alloted branch is : Computer Science and Engineering\n");
        else if (arr2[i]==3)
            printf("Your alloted branch is : Chemical Engineering\n");
        else if (arr2[i]==4)
            printf("Your alloted branch is : Mechanical Engineering\n");
       }
       }

       else if (h1==2)
       {
           y=0;
           printf("Enter College code : \n0-IIT Bombay\n1-IIT Delhi\n2-IIT Guwahati\n3-IIT Kanpur\n");
           scanf("%d",&v);

           printf("Enter Branch code : \n0-Electrical Engineering\n1-Civil Engineering\n2-Computer Science and Engineering\n3-Chemical Engineering\n4-Mechanical Engineering\n");
           scanf("%d",&w);
           int q=0;
           for (i=0;i<200;i++)
 {
     if ((v==arr1[i])&&(w==arr2[i]))
     {
      q=1;
        y++;}}
    if (q==0)
  printf("College/Branch you are looking for is not available.\n");

 else if ((v==0)&&(w==0))
 {
     printf("Total seats are : 50\n");
     printf("Seats left are : %d\n",50-y);
 }
 else if ((v==0)&&(w==1))
 {
     printf("Total seats are : 10\n");
     printf("Seats left are : %d\n",10-y);
 }
 else if ((v==0)&&(w==2))
 {
     printf("Total seats are : 7\n");
     printf("Seats left are : %d\n",7-y);
 }
 else if ((v==0)&&(w==3))
 {
     printf("Total seats are : 4\n");
     printf("Seats left are : %d\n",4-y);
 }
 else if ((v==0)&&(w==4))
 {
     printf("Total seats are : 15\n");
     printf("Seats left are : %d\n",15-y);
 }
 else if ((v==1)&&(w==0))
 {
     printf("Total seats are : 12\n");
     printf("Seats left are : %d\n",12-y);
 }
 else if ((v==1)&&(w==1))
 {
     printf("Total seats are : 6\n");
     printf("Seats left are : %d\n",6-y);
 }
 else if ((v==1)&&(w==2))
 {
     printf("Total seats are : 4\n");
     printf("Seats left are : %d\n",4-y);
 }
 else if ((v==1)&&(w==3))
 {
     printf("Total seats are : 22\n");
     printf("Seats left are : %d\n",22-y);
 }
 else if ((v==1)&&(w==4))
 {
     printf("Total seats are : 10\n");
     printf("Seats left are : %d\n",10-y);
 }
 else if ((v==2)&&(w==0))
 {
     printf("Total seats are : 7\n");
     printf("Seats left are : %d\n",7-y);
 }
 else if ((v==2)&&(w==1))
 {
     printf("Total seats are : 25\n");
     printf("Seats left are : %d\n",25-y);
 }
 else if ((v==2)&&(w==2))
 {
     printf("Total seats are : 3\n");
     printf("Seats left are : %d\n",3-y);
 }
 else if ((v==2)&&(w==3))
 {
     printf("Total seats are : 16\n");
     printf("Seats left are : %d\n",16-y);
 }
 else if ((v==2)&&(w==4))
 {
     printf("Total seats are : 12\n");
     printf("Seats left are : %d\n",12-y);
 }
 else if ((v==3)&&(w==0))
 {
     printf("Total seats are : 10\n");
     printf("Seats left are : %d\n",10-y);
 }
 else if ((v==3)&&(w==1))
 {
     printf("Total seats are : 10\n");
     printf("Seats left are : %d\n",10-y);
 }
 else if ((v==3)&&(w==2))
 {
     printf("Total seats are : 6\n");
     printf("Seats left are : %d\n",6-y);
 }
 else if ((v==3)&&(w==3))
 {
     printf("Total seats are : 30\n");
     printf("Seats left are : %d\n",30-y);
 }
 else if ((v==3)&&(w==4))
 {
     printf("Total seats are : 7\n");
     printf("Seats left are : %d\n",7-y);
 }

       }
       else
        printf("Invalid Choice.Please try again. ");
       printf("\n");
}

 else
    printf("Invalid choice.Please try again.\n");
    printf("\n");
}

fclose(f2);
fclose(fp);
return 0;
}

