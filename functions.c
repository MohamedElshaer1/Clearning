#include "header.h"




int area (int x,int y){

    int area= x*y;
    printf("The area equals %d units",area);
    return area;
}


int minutes_to_years(int x){
    float minutes =x;
    float hours = minutes/60;
    float days = minutes/(60*24);
    float weeks = minutes/(60*24*7);
    float months=minutes/(60*24*7*4);
    float years=minutes/(60*24*7*4*12);
    printf(" minutes = %f \n hours = %f \n days = %f \n weeks = %f \n months = %f \n years = %f \n",minutes,hours,days,weeks,months,years);
    printf("%d bytes",sizeof(minutes));
}




int guess (){

    srand(time(0));
    int num = (rand() % (20 - 0 + 1)) + 0;
//    printf("%d",num);

    int flag =0;
    int x;

    for (int i=0;i<5;i++){
        printf("Please guess the number \n");
        scanf("%d",&x);

        if (x==num){
            flag =1;
            break;
        }
        if(x>num){
            printf("your guess is too high \n");
        }
        else{
            printf("your guess is too low \n");

        }
    }
    if (flag ==1){
        printf("Congrats you won !! \n");
    }
    else{
       printf("Hard Luck :( \n");
    }
    }




void enums(){

    enum Company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};

    enum Company one =XEROX;
    enum Company two =GOOGLE;
    enum Company three =EBAY;

    printf("%d \n",one);
    printf("%d \n",two);
    printf("%d",three);

    }




void switch_cases(int month){
    switch(month){
        case 1:
            printf("january");
            break;
        case 2:
            printf("february");
            break;
        case 3:
            printf("march");
            break;
        case 4:
            printf("april");
            break;
        case 5:
            printf("may");
            break;
        case 6:
            printf("june");
            break;
        case 7:
            printf("july");
            break;
        case 8:
            printf("august");
            break;
        case 9:
            printf("september");
            break;
        case 10:
            printf("october");
            break;
        case 11:
            printf("november");
            break;
        case 12:
            printf("december");
            break;
        defult:
            printf(" ");
            break;

    }

}




void pay(){
    int hours;
    printf("Please Enter The Number Of Hours \n");
    scanf("%d",&hours);

    double grosspay;
    double overtime;
    double netpay;
    double taxes;
    double nettax;
    if (hours <= 40){
            grosspay=12*hours;
    }
    else{
        grosspay=40*12;
        overtime=(hours-40)*(12*1.5);
        grosspay+=overtime;
    }
    if(grosspay>=300){
        taxes=0.15*300;
        nettax+=taxes;
        netpay=grosspay-taxes;
        if(grosspay-300>=150){
            taxes=0.2*150;
            nettax+=taxes;
            netpay-=taxes;
            if(grosspay-450>=0){
                taxes=0.25*(grosspay-450);
                nettax+=taxes;
                netpay-=taxes;
            }
        }
    }
    printf("The grosspay is %f \n",grosspay);
    printf("The taxes is %f \n",nettax);
    printf("The netpay is %f \n",netpay);
}





void prime(){
    int prim[100]={2};
    int count=1;
    for (int i=3;i<=100;i++){
        int flag=0;
        for(int j=i;j>0;j--){
            if(i%j==0){
                flag++;
                }
    }
    if(flag==2){
        prim[count]=i;
        count++;
    }
}
for(int i=0;i<sizeof(prim);i++){
        if(prim[i]==0){
            break;
        }
    printf("%d  ",prim[i]);
}

}





void weather(){
    float rainfall[5][12]={{7.3,7.3,4.9,6.2,6.5,8.1,4.0,2.3,1.2,5.3,8.0,1.0},
                           {6.3,9.3,3.9,5.2,5.5,7.1,0.0,1.3,6.2,4.3,9.0,2.0},
                           {5.3,3.3,2.9,4.2,4.5,6.1,6.0,0.3,7.2,3.3,7.0,13.0},
                           {4.3,1.3,1.9,3.2,3.5,5.1,1.0,5.3,8.2,2.3,5.0,11.0},
                           {3.3,0.3,0.9,2.2,2.5,4.1,2.0,6.3,9.2,1.3,8.0,10.0}};
    printf("Year                       Rainfall\n");
    float total=0;
    for(int i=0;i<YEARS;i++){
        float subtotal=0;
        for(int j=0;j<MONTHS;j++){
            subtotal+=rainfall[i][j];
        }
    printf("  %d                         %f\n",2010+i,subtotal);
    total+=subtotal;

    }
    printf("The average of the 5 years is %f\n",total/5);
    }





///////////////// Strings////////////////

int count_strings(char str[]){
    int c=0;
    for(int i=0;i<sizeof(str);i++){
            c++;
    }
    return c-1;
}





void conct(char a1[],char a2[]){
    char result[strlen(a1)+strlen(a2)+1];
    int i=0;
    for(i=0;i<strlen(a1);i++){
        result[i]=a1[i];
    }
    for(int j=0;j<strlen(a2);j++){
        result[i]=a2[j];
        i++;
    }
    printf("%s",result);

    ///or//
//    strcat(a1,a2);
//    printf("%s",a1);
}




int equall (char a1[],char a2[]){
    int flag =1;
    if(strlen(a1)==strlen(a2)){
        for(int i=0;i<strlen(a1);i++){
            if(a1[i]!=a2[i]){
                flag=0;
                break;
            }
        }
    }
    else{
        flag=0;
    }
    return flag; //Or  strcmp(a1,a2);
}





void reversee(char a[]){
    char b[strlen(a)+1];
    int j=0;
    for(int i=strlen(a)-1;i>=0;i--){
            b[j]=a[i];
            j++;
    }
    printf("%s",b);
}




void pattern(int N){
for(int i=N; i>=1; i--)
{
    // First inner part of upper half
    for(int j=N; j>i; j--)
    {
        printf("%d ", j);
    }

    // Second inner part of upper half
    for(int j=1; j<=(i*2-1); j++)
    {
        printf("%d ", i);
    }

    // Third inner part of upper half
    for(int j=i+1; j<=N; j++)
    {
        printf("%d ", j);
    }

    printf("\n");
}

// Second lower half of the pattern
for(int i=1; i<N; i++)
{
    // First inner part of lower half
    for(int j=N; j>i; j--)
    {
        printf("%d ", j);
    }

    // Second inner part of lower half
    for(int j=1; j<=(i*2-1); j++)
    {
        printf("%d ", i+1);
    }

    // Third inner part of lower half
    for(int j=i+1; j<=N; j++)
    {
        printf("%d ", j);
    }

    printf("\n");
}

return 0;
}





void pointers (){
//        int num=10;
//        int *pnum=&num;
//        printf("address is %p \n",pnum);
//        printf("address is %p \n",&num);
//        printf("number is %d",*pnum);

//          int i=10;
//          float j=10.10;
//          char c='c';
//
//          void *ptr;
//          ptr=&i;
//          printf("%d\n",*(int*)ptr);
//
//          ptr=&j;
//          printf("%f\n",*(float*)ptr);
//
//          ptr=&c;
//          printf("%c",*(char*)ptr);

        char name1[]="mohamed";
        char name2[strlen(name1+1)+1];
        char *ptr1=&name1;
        char *ptr2=&name2;
        while(*ptr1!='\0'){
            *ptr2=*ptr1;
             ptr1++;
             ptr2++;
        }
        ptr2=&name2;
        while(*ptr2!='\0'){
            printf("%c",*ptr2);
            ptr2++;
            }
}



void square_ptrs(int *ptr){

    *ptr=*ptr * *ptr;
}




int length_string(char *ptr1){

    char *ptr2=ptr1;
    while(*ptr2!='\0'){
        ptr2++;
    }
    return ptr2-ptr1;
}


/////////Structure/////
void structure_basic(){

    struct person{
    int age;
    float weight;
    float height;
    char status[100];
    };

    struct person mohamed={24,64.5,183.4,"InARelationship"};
    printf("Age is %d\n",mohamed.age);
    printf("Weight is %f\n",mohamed.weight);
    printf("Height is %f\n",mohamed.height);
    printf("Status is %s\n",mohamed.status);

}



void array_of_struct(int day,int month,int year){
    struct date{
        int day;
        int month;
        int year;
    };

    struct date MyDates[4];
        MyDates[0].day=2;
        MyDates[0].month=3;
        MyDates[0].year=2022;


    int n=sizeof(MyDates)/sizeof(struct date);
    for(int i=0;i<n-1;i++){

        if(MyDates[i].day==30){
            MyDates[i+1].day=1;
        }
        else{
            MyDates[i+1].day=MyDates[i].day+1;
        }


        if(MyDates[i].month==12){
            MyDates[i+1].month=1;
        }
        else{
            MyDates[i+1].month=MyDates[i].month;
        }


        if(MyDates[i].month==12 &&MyDates[i].day==30){
            MyDates[i+1].year=MyDates[i].year+1;
        }
        else{
            MyDates[i+1].year=MyDates[i].year;
        }
}
    for (int i=0;i<n;i++){
        printf("Day %d %d/%d/%d \n",i+1,MyDates[i].day,MyDates[i].month,MyDates[i].year);
    }
}


