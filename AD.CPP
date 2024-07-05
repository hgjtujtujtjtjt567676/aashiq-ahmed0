#include<iostream>
using namespace std;
class shop
{
    int item_name[50];
    int cost[50];
    int count;
    public:
    void cnt(){count=0;}
    void add()
    {
        cout << "--------------------------------------------------------------" << endl;
        cout << "|                       Add An Element                       |" << endl;
        cout << "--------------------------------------------------------------" << endl;
        cout << "Enter item code: ";
        cin >> item_name[count];
        cout << "Enter item cost: ";
        cin >> cost[count];
        count++;
        cout << "Item added successfully." << endl;
        
        
    }
    void tr(){
        for(int i=0;i<count;i++)
        {
            for(int j=i+1;j<count;j++)
            {
                if(item_name[i]==item_name[j])
                {
                    cout<<"ALREADY Exits"<<endl;
                }
            }
        }

    }
    void sum()
    {
        cout << "--------------------------------------------------------------" << endl;
        cout << "|                   Total Cost Of Elements                   |" << endl;
        cout << "--------------------------------------------------------------" << endl;
        int total = 0;
        for (int i = 0; i < count; i++) {
            total += cost[i];
        }
        cout << "Total cost: " << total << endl;
        
    }
    void remove(int b)
    {
        for (int i = 0; i < count; i++) {
            if (item_name[i] == b) {
                item_name[i] = 0;
                cost[i] = 0;
                cout << "Item '" << b << "' removed." << endl;
                return;  
                
            }
        }
        cout << "Item '" << b << "' not found." << endl;
    }
    void display()
    {
        cout << "--------------------------------------------------------------" << endl;
        cout << "|                      Shop Inventory                       |" << endl;
        cout << "--------------------------------------------------------------" << endl;
        if(count==0)

        {
            cout << "--------------------------------------------------------------" << endl;
        cout << "|                      NO ITEMS ADDED....                       |" << endl;
        cout << "--------------------------------------------------------------" << endl;
        }
        else{
        for(int i=0;i<count;i++)
        {
            cout<<"Code Of The Item: "<<item_name[i]<<endl;
            cout<<"Cost Of The Item: "<<cost[i]<<endl;
        }
    }}



};
int main()
{

    shop h;
    h.cnt();
    int n;
    
    do
    {
    cout<<"Input your Need"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
        {
        h.add();
        h.tr();
        }
        case 2:
        {
            h.sum();
        }
        case 3:
        {
         cout<<"Enter The Item To Remove"<<endl;
        int a;
        scanf("%c",&a);
        h.remove(a);
        }
        case 4:
        {
            h.display();
        }
    }
    
    }
    while(n!=5);

}