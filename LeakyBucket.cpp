#include<iostream>

using namespace std;

 int main(int argv, const char* argc[]) 
 	{	
 		int bsize,dsize,orate,c,bfilled=0;	
 		cout<<"Enter the Buffer Size - ";
 		cin>>bsize;
 		
 		cout<<"Enter the Output rate - ";
 		cin>>orate;
 		
 		while(true)
		{
			cout<<"Enter the Choice - ";
 			cin>>c;
 			
 			if(c==1)
 			{
 				cout<<"Enter the Data Size - ";
 				cin>>dsize;
 				if(dsize>bsize-bfilled)
 					cout<<"\nPacket rejected\n";
 				else
 				{
 					cout<<"\nPacket Added\n ";
 					bfilled+=dsize;
				 }
			 }
			 
			 
			if(bfilled!=0)
				{
					if(bfilled>orate)
						{
						cout<<"Output Rate : "<<orate<<"\n";
						bfilled-=orate;
					}
					else
					{
						cout<<"Output Rate : "<<bfilled<<"\n";
						bfilled=0;
					}
				}
 			else 
 				cout<<"No Data\n";
 				
		}
	
 				
 		return 0;	
 		
	 }
