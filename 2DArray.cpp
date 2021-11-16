#include <iostream>
using namespace std;

class arr1
{
  public:
    int array1[2][2];
    void insert(int a=0,int b=0,int c=0,int d=0)
    {
      array1[0][0]=a;
      array1[0][1]=b;
      array1[1][0]=c;
      array1[1][1]=d;

    }

    void display()
    {
        for (int i=0;i<2;i++)
        {
            for (int j=0;j<2;j++)
            {
                cout<<array1[i][j]<<"->";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    void del(int a)
    {
        for (int i=0;i<2;i++)
        {
            for (int j=0;j<2;j++)
            {
                if(array1[i][j]==a)
                {
                    array1[i][j]=0;
                }
                else
                {
                    continue;
                }
            }
        }
    }
};

int main()
{
    arr1 obj;
    obj.insert(5,4,3);
    obj.display();
    obj.del(4);
    obj.display();

    return 0;
}
