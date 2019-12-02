#include <iostream>
using namespace std;

int main()
{
    int numf1,numf2,num1,num2,num3,mink,minj,diff,min=2000;;
    cout<<"Enter two integers: \n";
    cin>>numf1>>numf2;
    num1=numf1;
    num2=numf2;
    if(num1>num2){
        while(num2!=0){
            num3=num2;
            num2=(num1%num3);
            num1=num3;
        }
    }
    else if(num1<num2){
        while(num1!=0){
            num3=num1;
            num1=(num2%num3);
            num2=num3;
        }
    }
    else{
        cout<<"You have entered same number.\n";
        exit(0);
    }
    cout<<"\nThe GCD("<<numf1<<","<<numf2<<") = "<<num3<<endl;

    for(int k=-1000;k<1000;k++){
        for(int j=-1000;j<1000;j++){
            if(((numf1*k)+(numf2*j))==num3){
                diff=abs(k-j);
                if(diff<min){
                    mink=k;
                    minj=j;
                    min=diff;
                }
            }    
    
        }
    }
    cout<<endl<<"Linear combination of ("<<numf1<<","<<numf2<<") is \n"<<
    num3<<" = "<<numf1<<"."<<mink<<" + "<<numf2<<"."<<minj;
    
    return 0;
}
