#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


struct start_menu_data
{
    int pil_start;
    char user_name[20];
    int pass_word;
    char user_name_login[20];
    int pass_word_login;
};


int main()
{
    struct start_menu_data s1;
    int cekhasil;
    system ("cls");
    start_menu();
    return 0;
}

void start_menu()
{
    printf("==================================================================================================\n");
    printf("\t\t\t\t        Selamat Datang\n");
    printf("\t\t\t\t Persewaan Kaset Game dan Film\n");
    printf("\t\t\t\t      Delta Game and Film\n");
    printf("\t\t\t    Siap melayani anda dengan sepenuh hati\n");
    printf("==================================================================================================\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t\t Silahkan Login atau Register akun anda \n");
    printf("\t\t\t\t 1. Login \n");
    printf("\t\t\t\t 2. Register \n");
    return 0;
}


