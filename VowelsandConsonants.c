#include <stdio.h>
int main() {
    int vol=0,con=0,i=0;
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0' && str[i]!='\n') {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || 
           str[i]=='u' || str[i]=='A' || str[i]=='E' || 
           str[i]=='I' || str[i]=='O' || str[i]=='U') {
            vol++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
            con++;
        } 
        i++;
    }
    printf("Vowels = %d\n",vol);
    printf("Consonants = %d\n",con);
}
