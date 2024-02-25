void insert(a, n, value)
{
    n=n+1;
    a[n]=value;
    int i=n;
    while(i>0)
    {
        p=i/2;
        if(a[p]<a[i])
        {
            swap(a,p,i)
            i=p;
        }
        else
        {
            return;
        }
    }
}
void delete(a[], n)
{
    a[1]=n;
    n=n-1;
    i=1;
    while()
    {
        int left = a[2*i];
        int right = a[2*i+1];
        int large = left > right ? 2*i : 2*i+1;
        if(a[i]<a[large])
        {
            swap(a,i,large);
            i=large;
        }
        else
        {
            return;
        }
    }
}
