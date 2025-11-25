#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s1[100];
   
    fgets(s1, 100, stdin);
    s1[strcspn(s1, "\n")] = '\0';

    

    int n1=strlen(s1) ;
    

    int freq1[26]={0};
   
    
    

    for (int i = 0; i < n1; ++i) 
    {
        s1[i]=tolower(s1[i]);
        freq1[s1[i]-'a']=1;
        
    }
    for(int j=0;j<n1;j++)
    {    
        if(s1[j]==' ')
        {
        continue;
        }
        else if(freq1[j]==0)
        {
            printf("Not Pangram");
            return 0;
        }
    }
    printf("Pangram");
    return 0;
    

    // printf("Not Pangram");
    // return 0;
}