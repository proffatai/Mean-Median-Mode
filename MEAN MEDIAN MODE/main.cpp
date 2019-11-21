#include <iostream>
#include<cstring>
using namespace std;

float mean (float [], int);
float median (float [], int);
float mode (float [],int);
void bubble_sort(float [], int);
 main()
{
    float array[]={2,1,2,3,4,3,7,8,6,5,4,3,2,1,2,5,7,8,7,8,8,9,7,5,3,3,2,1,1,3,5,6,7,7,5,4,2,1,1,4,6,7,7,7,7,6};
    float Mean,Median,Mode;
    int len=46;
    cout<<"data entered is "<<endl;
    for (int i=0; i<len; i++)
    cout<<array[i]<<" ";
    cout<<endl<<endl<<"data in the sorted form is "<<endl;
    bubble_sort(array,len);
    for (int i=0; i<len; i++)
            cout<<array[i]<<" ";
    Mean=mean(array,len);
    Median=median(array,len);
     Mode=(array,len);
cout<<"mean of the above data is : "<<Mean<<endl;
cout<<"median of the above data is : "<<Median<<endl;
cout<<"mode of the above data is : "<<Mode<<endl;
}
float mean (float data [], int num)
{
    float sum=0; float average;
    for (int counter=0; counter<num; counter++)
        {
            sum+=0;
        }
average=sum/num;
return average;
}

float median (float data[], int num)
{
 float my_median; int pos;
if (num%2!=0) // check for odd numbers of data
 {pos=((num-1)/2)+1;  // this is to get the middle index
 return data[pos];}
else{
    pos=num/2; // this gets the index of the median
    cout<<"there are even numbers of data, the median is the average of "<<data[pos]<<"and"<<data[pos+1];

    return data[pos];
    }
}
void bubble_sort (float array [], int len)
{
    int j=0; float temp; int a=(len-j); int mylen=len;
    while (mylen>=0) // while loop iterates for len number of times
{

for (int i=0; i<a; i++)
{
    if (array[i]>array[i+1]) // the loop checks if which is greater and swap if there exist any mismatch.
    {
        temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;
    }
    if (j==a) // this holds when the loop has finished checking the entire unsorted array
        j++; // required to decrease the number of searched elements i.e to always neglect the last element of the unsorted array
             // otherwise the loop would continue to scan true the entire array, which consumes time
}
mylen--; // required to terminate the while  loop after some definite iterations
}
}
float mode(float data[],int len)
{
float Mode; int frequency[9]={};//  initializes elements to zero

 for (int i=0; i<len; i++)
 {
    //++frequency[i]=data[]
 }
}
