char* decipher(char s[])
{
    int i;
    for(i=0;i<sterlen(s);i++)
    {
        if(isalpha(s[i]))
        
        s[i]=toascii(s[i])-1;
    }
    return s;
    
}
