#include<iostream>
using namespace std;
int main()
{
// Variables declared	
	int choice,choice2,check=0,total=1,search,size=0,roll[50],i,loc,cloc=-1;
	string contact[50];
	string name[50],address[50];
	
while(true)
{
	cout<<endl<<"......................................."<<endl;
	cout<<"=Press 1 for add students"<<endl;
	cout<<"=Press 2 for show record of students"<<endl; 
	cout<<"=Press 3 for search students"<<endl;
	cout<<"=Press 4 for update data of students"<<endl;
	cout<<"=Press 5 for delete data of students"<<endl<<"......................................."<<endl;
	cin>>choice;
// press 1 to add data of students
	if(choice==1){
		cout<<"Enter the number of students you want to add : ";
		cin>>size;
		if(check==0){ 
	
		    for(i=0;i<size;i++){
		    	cout<<endl<<"Fill the data for student "<<total<<" :--"<<endl;
			    cout<<"Enter the roll number : ";
			    cin>>roll[i];
			    cout<<"Enter the name of student : ";
			    cin>>name[i];
			    cout<<"Enter the contact number of student father : "<<"+92 ";
			    cin>>contact[i];
			    cout<<"Enter the address of student : ";
			    cin>>address[i];
			    check++;
			    total++;
		    }
	    }
	    else{
	    	   total=check+1; 
	    	   size=size+check;
	    	    for(i=check;i<size;i++){
			      cout<<endl<<"Fill the data for student "<<total<<" :--"<<endl;
			      cout<<"Enter the roll number : ";
			      cin>>roll[i];
			      cout<<"Enter the name of student : ";
			      cin>>name[i];
			      cout<<"Enter the contact number of student father : "<<"+92 ";
			      cin>>contact[i];
			      cout<<"Enter the address of student : ";
			      cin>>address[i];
			      total++;
		        }
		    }
	}
// press 2 to update the record
    else if(choice==2){
    	for(i=0;i<size;i++){
    		cout<<endl;
    		cout<<"Roll number of student : "<<roll[i]<<endl;
    		cout<<"Name of student : "<<name[i]<<endl;
    		cout<<"Contact number of student : "<<contact[i]<<endl;
    		cout<<"Address of student : "<<address[i]<<endl;
		}
	}
// Press 3 to search record	
	else if(choice==3){
		if(size==0){
			cout<<"First add students "<<endl;
	    }
	    else{
		    cout<<"Enter the roll number of student : ";
		    cin>>search;
		    loc=-1;
		    for(i=0;i<size;i++){
			   if(roll[i]==search){
			     	cout<<"Name of student is : "<<name[i]<<endl;
			        cout<<"Contact number of student father : "<<"+92 "<<contact[i]<<endl;
			        cout<<"Address of student : "<<address[i]<<endl;
			        loc=i;
			    }
		    }
		    if(loc==-1){
			        cout<<"::: Student not exist :::"<<endl;
		    }
	    }
	}
// press 4 to update record
   else if(choice==4){
   	    if(size==0){
			cout<<"First add students "<<endl;
	    }
	    else{
		    cout<<"Enter the roll number of student to update data : ";
		    cin>>search;
		    for(i=0;i<size;i++){
			   if(roll[i]==search){
		            cout<<endl<<"Previous data of student is :--"<<endl<<endl;
			   	    cout<<"Roll number : "<<roll[i]<<endl;
			     	cout<<"Name of student : "<<name[i]<<endl;
			        cout<<"Contact number of student father : "<<"+92 "<<contact[i]<<endl;
			        cout<<"Address : "<<address[i]<<endl;
			        cout<<endl<<"Enter new data :--"<<endl<<endl;
			        cout<<"Roll number of student is : ";
			        cin>>roll[i];
			     	cout<<"Name of student is : ";
			     	cin>>name[i];
			        cout<<"Contact number of student father : "<<"+92 ";
			        cin>>contact[i];
			        cout<<"Address of student : ";
			        cin>>address[i];
			        cout<<endl;
			        loc=i;
			    } 
		    }
		    if(loc==-1){
			        cout<<"::: Student not exist :::"<<endl;
		    }
	    }
   }
// press 5 to delete the record
	else if(choice==5){
		cout<<"=Press 1 to delete all record : "<<endl;
	    cout<<"=Press 2 to delete one student record : "<<endl;
	    cin>>choice2;
	    if(choice2==1){
        size=0;
        check=0;
        total=1;
        cloc=-1;
	    	for(i=0;i<size;i++){
	    		roll[i]=0;
	    		name[i]="";
	    		contact[i]="";
	    		address[i]="";
			}
	    	cout<<" ::: All data deleted :::"<<endl;
		}
		else if(choice2==2){
			
		    cout<<"Enter the roll number of student which you want to delete : ";
		    cin>>search;
		    for(i=0;i<size;i++){
			   if(roll[i]==search){
			     	for(int j=i;j<size;j++){
					     roll[j]=roll[j+1];
					     name[j]=name[j+1];
					     contact[j]=contact[j+1];
					     address[j]=address[j+1];
					     cloc=i;
				         size--;
				         total--;
				    }
				cout<<"::: Record of required student is deleted ::: "<<endl; 
			   }
		    }
		    if(cloc==-1){
		    	cout<<"::: Student Not exist :::"<<endl;
			}
	    }
	    else{
	    	cout<<"Invalid choice.Please enter 1 or 2 to perform tasks successfully"<<endl;
		}
	}
	else{
		cout<<"Invalid choice.Please enter 1 , 2 , 3 or 4 to perform tasks successfully"<<endl;
	}
	
}
	return 0;
}



















