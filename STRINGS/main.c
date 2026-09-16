#include "stdio.h"


int string_length(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;

    }
    printf("%d\n",count);

    return 0;
}
//string comapre
int string_compare(char str1[],char str2[])
{
    int i=0;
    while(str1[i]!='\n'&&str2[i]!='\n')
    {
        if(str1[i]!=str2[i])
        {
            return 1; //her not eqal

        }
        i++;
        

    }
     if (str1[i] == str2[i])
    {
        return 0;// equal
    }

    return 1;
}


//03
int string_concat(char str1[],char str2[])
{
    int i=0,j=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    //now copy
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;

    }
    str1[i]!='\0';
}
//4
void string_reverse(char str[])
{
    int start = 0;
    int end = 0;
    char temp;

    /* Find last character */
    while (str[end] != '\0')
    {
        end++;
    }

    end--;

    /* Swap characters */
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

void string_copy(char destination[], char source[])
{
    int i = 0;

    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}




int main(){

    char str1[100] = "Palati";
    char str2[100] = "Rohit";
    char copy[100];


    int length;
    int result;
    length=string_length(str1);
    result = string_compare(str1, str2);

if (result == 0)
    printf("Equal\n");
else
    printf("Not Equal\n");

string_concat(str1,str2);
string_reverse(str1);

printf("After Reverse: %s\n", str1);
string_copy(copy, str1);

printf("Copied String: %s\n", copy);


return 0;
}