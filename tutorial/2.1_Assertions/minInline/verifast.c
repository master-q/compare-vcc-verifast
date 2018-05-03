int main()
    //@ requires true;
    //@ ensures true;
{
    int x,y,z;
    if (x <= y)
        z = x;
    else z = y;
    //@ assert z <= x;
    return 0;
}
