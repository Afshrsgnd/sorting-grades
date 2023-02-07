#include <iostream>
using namespace std;
int main ()
{
    
	cout<<" Enter the count of students : ";
   
    int count;
   
    cin>> count;
    
    for (int i=0 ; i<count ; i++){

	string name[count];
	
	cout<<" Enter student names : "<<endl;
	
	for (int i=0 ; i<count ; i++)
	
{	cin>>name[i];
}
    int grade [i];

    cout<<" Enter student Grade : "<<endl;
    
    for (int i=0 ; i<count ; i++){
    
    cin>>grade[i];
	
}
	for (int i=0; i<count; i++)
	{
		for (int j=0; j<count - 1; j++)
		{
			if (grade[j] <grade[j+1])
			{
				int temp = grade[j];
				
				grade[j] = grade[j+1];
				
				grade[j+1] = temp;
			}
			
		}
	}
	
	
	
		for (int i=0  ; i<count ; i++){
		

	
	cout<<endl<<name[i]<<" : "<<grade[i]<<endl;

}


    cout<<"sorted grades : ";
    
         for (int i=0 ; i< count ; i++)
	    
		 cout<<name[i]<<" ";

    
    
    
    return 0;
}
}


