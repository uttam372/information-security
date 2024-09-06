#include <iostream>
#include <vector>
#include <string>
using namespace std;

void incription_call(string plain_text, int key, int size)
{
     vector<char> temp(size);
   
   cout<<"the incrypted form of the above text will be "<<endl;
   
   for (int i = 0; i < size; i++) 
   {
       temp[i] = (plain_text[i]-'A'  + key ) % 26 + 'A'; 
       cout << temp[i];                    
   }
}

void dicription_call(string hyper_text, int key, int size)
{
    vector<char> temp(size);
    
    cout<<"after decrimenting the text "<<endl;
    
    for(int i=0;i<size;i++)
    {
        if(hyper_text[i]-'A'-key<0)
         temp[i]=(hyper_text[i]-'A'-key)+26+'A';
         else
         temp[i]=(hyper_text[i]-'A'-key)+'A';
         
         cout<<temp[i];
    }
}
int main() 
{  
  int choice;
  cout<<"enter your choice want to incript or decript 1 OR 2 in "<<endl;
  cin>>choice;
  if(choice==1)
  {
   string plain_text;
   cout << "Enter plain text: in capital ";
   cin >> plain_text;             // taking input of plain text;
   
   int key;
   cout << "Enter key: ";       // teking input of key
   cin >> key;
   
   int size = plain_text.size();
  
   
  incription_call(plain_text,key,size);
  }
  else{
      
       string hyper_text;
   cout << "cypher text: in capital ";
   cin >> hyper_text;             // taking input of plain text;
   
   int key;
   cout << "Enter key: ";       // teking input of key
   cin >> key;
   
   int size = hyper_text.size();
   
  
   
     dicription_call(hyper_text,key,size); 
  }
  
   
   return 0;
}
