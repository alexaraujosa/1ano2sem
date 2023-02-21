float Max(float x, float y, float w)
{
    if(x>y)
    {
        if(x>w)
            return x;
        else
            return w;
    }
    else if (y>w)
        return y;
    else
        return w;
}

int main()
{
    return 0;
}