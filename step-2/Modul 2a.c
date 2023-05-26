#include <stdio.h>
#include <string.h>

char uname[50], pass[50];

int main()
{
    printf("Username : ");
    scanf("%s", uname);
    printf("Password : ");
    scanf("%s", pass);

    if (strcmp(uname, "afan") == 0 && strcmp(pass, "aljafar") == 0)
    {
        printf("Login Sukses \n");
        printf("Silahkan Lanjutkan\n");
    }
    else
        printf("INVALID USERNAME or PASSWORD\n");
    return 0;
}
