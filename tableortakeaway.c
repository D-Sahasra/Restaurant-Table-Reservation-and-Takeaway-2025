#include <stdio.h>
#include <string.h>
#define p(l,m) printf("\n%s\t\t₹%.2f",l,m)
void pnamec(char[],int,int);
void order(int,int,float);
char items[12][30];
int quantity[13],j=0;
float price[13];
float total=0;
void main()
{

    char p[16],name[20],yn[3],res[4];
    int n,x,c,mem,q;
    float pr;
    printf("\t\t\t\tGreetings!\n\t\t\t  Welcome to La Vie Douce.");
    printf("\n\nWould you like to reserve a table or takeaway?  ");
    gets(p);

    if(strcasecmp(p,"reserve a table")==0||strcasecmp(p,"reserve")==0)                                                   //Table Reservation
        {
            printf("\nPlease enter your name  ");
            gets(name);
            printf("\nPlease enter contact details  ");
            scanf("%d",&c);
            printf("\nHow many people are you booking for?\n");
            printf("(4 is the maximum number of people you can book for)\n");
            scanf("%d",&n);
            switch(n)
            {
                case 1:
                      {
                        printf("\nThe available tables are 1 , 2 , 3 , 4 , 5 \nPlease choose one from the above   ");
                        scanf("%d",&x);
                        if(x==1||x==2||x==3||x==4||x==5)
                        pnamec(name,c,x);
                        else
                            printf("\nYou have given an invalid table number.");
                        break;
                      }

                case 2:
                    {
                        printf("\nThe available tables are 6 , 7 , 8 , 9 , 10 \nPlease choose one from the above  ");
                        scanf("%d",&x);
                        if(x==6||x==7||x==8||x==9||x==10)
                        pnamec(name,c,x);
                        else
                            printf("\nYou have given an invalid table number.");
                        break;
                     }

                case 3:
                    {
                        printf("\nThe available tables are 11 , 12 , 13 , 14 \nPlease choose one from the above  ");
                        scanf("%d",&x);
                        if(x==11||x==12||x==13||x==14)
                        pnamec(name,c,x);
                        else
                           printf("\nYou have given an invalid table number.");
                        break;
                    }

                case 4:
                    {
                        printf("\nThe available tables are 15 , 16 , 17 , 18 , 19 \nPlease choose one from the above  ");
                        scanf("%d",&x);
                        if(x==15||x==16||x==17||x==18||x==19)
                        pnamec(name,c,x);
                        else
                            printf("\nYou have given an invalid table number.");
                        break;
                    }

                default:printf("\nInvalid");
            }
            printf("\n\nThank You!\n");

        }

     else if(strcasecmp(p,"takeaway")==0)                                                       //Takeaway
      {
         printf("\nAre you a premium member?  ");
         scanf("%s",yn);

         if(strcasecmp(yn,"yes")==0)                                                          //Members only menu
         { j=1;
             printf("\nPlease enter your Membership ID  ");
             scanf("%s%d",res,&mem);
             if((strcmp("LVD",res)==0)&&(mem==2190||mem==1243||mem==7769||mem==7816||mem==1274||mem==1279||mem==1280))
             {
                 printf("\nTODAY'S MEMBERS ONLY MENU\n");
                 printf("\n<Drinks>");
                 p("1.Hot Chocolate\t\t",399.99);
                 p("2.Matcha\t\t",379.99);
                 p("3.Café au lait\t\t",469.99);
                 p("4.Pearl Milk Tea\t",440.00);
                 printf("\n\n<Pasta and fritters>");
                 p("5.Pimento Salsa Rossa\t",1249.99);
                 p("6.Risotto Al Gamberetti\t",1549.99);
                 p("7.Spaghetti alle Vongole",1119.99);
                 p("8.Cheese Pommes Frites\t",499.99);
                 printf("\n\n<Desserts>");
                 p("9.French Toast\t\t",600.00);
                 p("10.Crêpe Suzette\t",649.99);
                 p("11.Custard Croissant\t",449.99);
                 p("12.Dacquoise\t\t",749.99);

             }
             else
               {
                   printf("\nEntered Membership ID is Invalid");

               }
         }
         else if(strcasecmp(yn,"no")==0)
         { j=2;
             printf("\nTODAY'S MENU\n");                                                     //Normal menu
             printf("\n<Drinks>");
             p("1.Hot Chocolate\t\t",449.99);
             p("2.Matcha\t\t",429.99);
             p("3.Café au lait\t\t",509.99);

             p("4.Pearl Milk Tea\t",490.00);
             printf("\n\n<Pasta and fritters>");
             p("5.Pimento Salsa Rossa\t",1299.99);
             p("6.Risotto Al Gamberetti\t",1599.99);
             p("7.Spaghetti alle Vongole",1159.99);
             p("8.Cheese Pommes Frites\t",549.99);
             printf("\n\n<Desserts>");
             p("9.French Toast\t\t",650.00);
             p("10.Crêpe Suzette\t",699.99);
             p("11.Custard Croissant\t",599.99);
             p("12.Dacquoise\t\t",799.99);


         }


         printf("\n\nEnter your name ");                                                             //Ordering
         scanf("%s",name);
         printf("\nHow many different items are you going to order today  ");
         scanf("%d",&n);
         printf("\nEnter the corresponding numbers of the items in the menu one after another\n");

         for(int i=0;i<n;i++)
         {   printf("\nSelect the item,%d.  ",i+1);
             scanf("%d",&x);
             switch(x)
             {
             case 1:
                {
                    {if(j==1)
                      pr=399.99;
                    else if (j==2)
                         pr=449.99;}
                    strcpy(items[i],"Hot Chocolate         ");
                    order(q,i,pr);

                    break;

                }
              case 2:
                {
                    if(j==1)
                      pr=379.99;
                    else if(j==2)
                        pr=429.99;
                    strcpy(items[i],"Matcha                ");
                    order(q,i,pr);
                    break;

                }

              case 3:
                {
                    if(j==1)
                      {pr=469.99;}
                    else if (j==2)
                        {pr=509.99;}
                    strcpy(items[i],"Café au lait          ");
                    order(q,i,pr);
                    break;

                }
              case 4:
                {
                    if(j==1)
                      {pr=440.00;}
                    else if (j==2)
                        {pr=490.00;}
                    strcpy(items[i],"Pearl Milk Tea        ");
                    order(q,i,pr);
                    break;

                }
              case 5:
                {
                    if(j==1)
                      {pr=1249.99;}
                    else if (j==2)
                        {pr=1299.99;}
                    strcpy(items[i],"Pimento Salsa Rossa   ");
                    order(q,i,pr);
                    break;

                }
              case 6:
                {
                    if(j==1)
                      {pr=1549.99;}
                    else if (j==2)
                        {pr=1599.99;}
                    strcpy(items[i],"Risotto Al Gamberetti ");
                    order(q,i,pr);
                    break;

                }
              case 7:
                {
                    if(j==1)
                      {pr=1119.99;}
                    else if (j==2)
                        {pr=1159.99;}
                    strcpy(items[i],"Spaghetti alle Vongole");
                    order(q,i,pr);
                    break;

                }
              case 8:
                {
                    if(j==1)
                      {pr=499.99;}
                    else if (j==2)
                        {pr=549.99;}
                    strcpy(items[i],"Cheese Pommes Frites  ");
                    order(q,i,pr);
                    break;

                }
              case 9:
                {
                    if(j==1)
                      {pr=600.00;}
                    else if (j==2)
                        {pr=650.00;}
                    strcpy(items[i],"French Toast          ");
                    order(q,i,pr);
                    break;

                }
              case 10:
                {
                    if(j==1)
                      {pr=649.99;}
                    else if(j==2)
                        {pr=699.99;}

                    strcpy(items[i],"Crêpe Suzette         ");
                    order(q,i,pr);
                    break;


                }
              case 11:
                {
                    if(j==1)
                      {pr=449.99;}
                    else if (j==2)
                        {pr=599.99;}
                    strcpy(items[i],"Custard Croissant     ");
                    order(q,i,pr);
                    break;

                }
              case 12:
                {
                    if(j==1)
                      {pr=749.99;}
                    else if (j==2)
                        {pr=799.99;}
                    strcpy(items[i],"Dacquoise             ");
                    order(q,i,pr);
                    break;
                }
              default:
                {
                    pr=0.0;
                    strcpy(items[i],"(null)                ");
                    order(q,i,pr);
                }

             }

         }
         printf("\n\nBILL");                                                               //Bill
         printf("\nOrder for %s\n\n",name);
         printf("Items\t\t\t\tQuantity \t    Amount");
         for(int i=0;i<n;i++)
            {printf("\n%s\t\t   %d\t\t   ₹%.2f",items[i],quantity[i],price[i]);}
         printf("\n\n\t\t\tTotal Amount = ₹%.2f\n\n",total);
         printf("Thank You!\n");

    }
    else
        printf("\nInvalid Input");

}

void pnamec(char z[25],int w,int y)
{

    printf("\nTable booked under the name %s\nContact Number: %d",z,w);
    printf("\nYou have booked the table %d",y);

}

void order(int q,int i,float pr)
{
    printf("Enter Quantity ");
                    scanf("%d",&q);
                    quantity[i]=q;
                    price[i]=q*pr;
                    total+=(q*pr);
}
