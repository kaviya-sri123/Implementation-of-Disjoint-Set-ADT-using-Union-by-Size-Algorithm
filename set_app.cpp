#include "set_header.h"
int main()
{
    int ch,ele;
    Set s;
    s.createSet();
    int root1,root2;
    do
    {
        cout<<"\t============MENU============\n";
    	cout<<"\t\t1.Set Union\n";
    	cout<<"\t\t2.Find Parent\n";
    	cout<<"\t\t3.Display\n";
        cout<<"\t\t4.Exit\n";
    	cout<<"\t============================\n";
    	cout<<"\nEnter your choice : ";
    	cin>>ch;
        switch(ch)
        {
            case 1:
                int x,y;
                cout<<"Enter vertex 1 (between 1 to 8) : ";
                cin>>x;
                cout<<"Enter vertex 2 (between 1 to 8) : ";
                cin>>y;
                root1 = s.find(s.set,x);
                root2 = s.find(s.set,y);
                s.setUnion(s.set,root1,root2);
                break;
            case 2:
                cout<<"Enter an element to find parent : ";
                cin>>ele;
                if(s.set[ele] < 0)
                    cout<<"\nIt is a root node.\n\n";
                else
                    cout<<"Parent of "<<ele<<" : "<<s.set[ele]<<"\n\n";
                break;
            case 3:
                s.display();
                break;
            case 4:
                break;
            default:
                cout<<"\nEnter a valid choice.\n\n";
                break;
        }
    }while(ch!=4);
}