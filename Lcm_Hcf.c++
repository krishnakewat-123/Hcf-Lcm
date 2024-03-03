#include<iostream>
using namespace std;
// this function calculate the least common multiple
void LCM(int L_arr[], int table,int counter)
{
     int range,i,j,final_lcm,max;
    
    cout<<"enter the range;\nhow many element do you want to enter-";
    cin>>range;
    cout<<"start to enter the element\n";
    again:
    for(i=0;i<range;i++)
    {   cout<<i+1<<":-";
        cin>>L_arr[i];//here we are taking input by user
         if(L_arr[i]==0)
        {   //This is showing that lcm of 0 can not be calculated;
            cout<<"LCM of 0 can't be calculated\n please enter again \n";
            goto again;
        }
     
    }
    max=L_arr[0];

    for(i=0;i<range;i++)
    {
        if(max<L_arr[i])
        {
            max=L_arr[i];//max is calculating
        }
    }
    
    while(1)
    {   final_lcm=max*table;
        
        for(i=0;i<range;i++)
        {   
            if(final_lcm%L_arr[i]==0) 
            {
                counter++;
                
            }
        }
        //here counter variable equvalating with range variable
        if(counter==range)
        {
            cout<<"LCM OF GIVEN NUMBER :-"<<final_lcm<<"\n\n";
            break;
        }
        else
        {
            table++;
            counter=0;
        }
    }
   

}
//This function is calculating Highest common factor
void HCF(int H_arr[],int table,int counter)
{
     int range,i,j,final_Hcf,min;
    
    cout<<"enter the range;\nhow many element do you want to enter-";
    cin>>range;
    cout<<"start to enter the element\n";
    again:
    for(i=0;i<range;i++)
    {   cout<<i+1<<".number:-";
        cin>>H_arr[i];//here we are taking input by user
        if(H_arr[i]==0)
        {   //This is showing that lcm of 0 can not be calculated;
            cout<<"HCF of 0 can't be calculated\n please enter again \n";
            goto again;
        }
     
    }
    min=H_arr[0];

    for(i=0;i<range;i++)
    {
        if(min>H_arr[i])
        {   //min is calculating
            min=H_arr[i];

        }
    }
    while(1)
    {
        final_Hcf=min/table;
         for(i=0;i<range;i++)
        {   
            if(H_arr[i]%final_Hcf==0) 
            {
                counter++;
                
            }
        }
        //here counter variable equvalating with range variable
        if(counter==range)
        {
            cout<<"HCF OF GIVEN NUMBER :-"<<final_Hcf<<"\n\n";
            break;
        }
        else
        {
            table++;
            counter=0;
        }
    }

    

       
}
int main()
{   int a[10],table=1,counter=0,choice;
    cout<<"\n!welcome in higheriq!\n";
    while(1)
    {
        cout<<"1.LCM\n2.HCF\n3.Exit()";

        cout<<"\n**PLEASE ENTER YOUR CHOICE-";
        cin>>choice;
        switch(choice)
        {
            case 1:
            LCM(a,table,counter);
            break;
            case 2:
            HCF(a,table,counter);
            break;
            case 3:exit(0);
            break;
            default:
            cout<<"you have entered invalid choice\n\t please enter valid choice\n";
            
        }
    }
    return 0;

}