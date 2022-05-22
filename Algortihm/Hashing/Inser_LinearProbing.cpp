//Implementation of hash table with linear Probing
//Algo
/*
1. inti the hash table with -1.
2. Find the key using data % size.
3. if hash table[key] is available i.e. -1 insert the data.
4. else there is a collision . so increment the key value by 
   1 cont key=(key+1)%size unitl finding the next avail index
5.if the index avail , insert the data.
6. In the process , if we again reach the starting point, we can understood that we have traversed the
   whole hash table and couldn't find the avail index.
*/
#define size 5
int arr[size];
void init()
{
    int i;
    for(int i=0;i<size;i++)
        arr[i]=-1;
}
int insert(int value)
{
    int key =value % size;
    int index =key;
    while(arr[index]!=1)
    {
        index=(index+1)%size;
        if(index==key)
        {
            cout<<"Hash Table Full"<<endl;
            return 0;
        }
    }
    arr[index]=value;
    return 1;
}