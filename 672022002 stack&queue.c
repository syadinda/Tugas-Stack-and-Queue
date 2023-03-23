#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 5

int top = -1, inp_array[SIZE];
int que_arr[SIZE];
int Rear = - 1;
int Front = - 1;
void enqueue();
void dequeue();
void showQueue();
void delQueue();
void queue();
void pushStack();
void popStack();
void showStack();
void delStack();
void stack();
void menu();
void pStack();
void pQueue();



int main()
{
    menu();
}

void menu()
{
    int pilih;
    while (1)
    {
        system("cls");
        printf("===========================");
        printf("\nTugas Quiz Stack and Queue");
        printf("\n===========================");
        printf("\n1. Stack String");
        printf("\n2. Queue Integer");
        printf("\n3. Penjelasan Stack");
        printf("\n4. Penjelasan Queue");
        printf("\n5. Exit Program");
        printf("\n===========================");
        printf("\nPilihan Anda : ");
        scanf("%d", &pilih);

            switch (pilih)
            {
            case 1:
                stack();
                break;
            case 2:
                queue();
                break;
            case 3:
                pStack();
                break;
            case 4:
                pQueue();
            case 5:
                exit(0);

            default:
                printf("\nInvalid choice!!");
            }
    }
}


void stack()
{
	int choice;

    while (1)
    {
        system("cls");
        printf("\nMenu Stack:");
        printf("\n1.Push Stack\n2.Pop Stack\n3.Print Stack\n4.Delete Stack\n5.Return Main Menu");
        printf("\n\nPilihan Anda: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            pushStack();
            break;
        case 2:
            popStack();
            break;
        case 3:
            showStack();
            break;
        case 4:
            delStack();
        case 5:
            menu();

        default:
            printf("\nInvalid choice!!");
        }
    }
}
void pushStack()
{
    int x;

    if (top == SIZE - 1)
    {
        printf("\nStack Penuh!");
        getch();
        stack();
    }
    else
    {
        printf("\nData yang ingin diinput: ");
        scanf(" %c", &x);
        top = top + 1;
        inp_array[top] = x;
        getch();
        stack();
    }
}
void popStack()
{
    if (top == -1)
    {
        printf("\nStack Masih Kosong");
        getch();
        stack();
    }
    else
    {
        printf("\nData yang diambil: %c", inp_array[top]);
        top = top - 1;
        getch();
        stack();
    }
}

void showStack()
{
    if (top == -1)
    {
        printf("\nStack Masih Kosong");
        getch();
        stack();
    }
    else
    {
        printf("\nData pada stack : \n");
        for (int i = top; i >= 0; --i)
            printf("%c ", inp_array[i]);
        getch();
        stack();
    }
}

void delStack()
{
	top = -1;
	printf("\nData telah dihapus!");
	getch();
	stack();
}

void queue()
{
    int ch;
    while (1)
    {
        system("cls");
        printf("\n1.Enqueue Int\n2.Dequeue Int\n3.Print Queue\n4.Delete Queue\n5.Return Main Menu");
        printf("\nPilihan Anda : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                enqueue();
            case 2:
                dequeue();
            case 3:
                showQueue();
            case 4:
                delQueue();
            case 5:
                menu();
            default:
            printf("Incorrect choice \n");
        }
    }
}
void enqueue()
{
    int insert_item;
    if (Rear == SIZE - 1)
    {
       printf("Queue penuh tolong dequeue! \n");
       getch();
       queue();
    }
    else
    {
        if (Front == - 1)
        Front = 0;
        printf("Data : ");
        scanf("%d", &insert_item);
        Rear = Rear + 1;
        que_arr[Rear] = insert_item;
        getch();
        queue();
    }
}

void dequeue()
{
    if (Front == - 1)
    {
        printf("Queue Kosong! \n");
        getch();
        queue();
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", que_arr[Front]);
        Front = Front + 1;
        getch();
        queue();
    }
}

void showQueue()
{

    if (Front == - 1 || Front > Rear)
    {
        printf("Queue Kosong \n");
        getch();
        queue();
    }
    else
    {
        printf("Queue: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", que_arr[i]);
        printf("\n");
        getch();
        queue();
    }
}

void delQueue()
{
    Front = -1;
    Rear = -1;
    printf("\nData telah dihapus!");
	getch();
	queue();
}

void pStack()
{
    system("cls");
    printf("Stack, atau tumpukan adalah salah satu proses penyimpanan dan pengambilan data\n");
    printf("yang menggunakan sistem penyimpanan LIFO, atau Last In First Out\n");
    printf("atau dalam bahasa diartikan sebagai Terakhir Masuk, Pertama Keluar\n");
    printf("Yang berarti data yang masuk/disimpan terakhir, akan dikeluarkan pertama\n");
    printf("Stack adalah sebuah kumpulan data dimana data diletakkan di atas data yang lain \n");
    printf("Function Push: Untuk menambahkan elemen ke dalam stack\n");
    printf("Function Pop: Untuk menghapus elemen dari urutan terakhir / bagian atas stack\n");
    printf("IsEmpty: Memeriksa apakah stack kosong, sedangkan \n");
    printf("IsFull: Memeriksa apakah stack penuh");
	getch();
	menu();
}

void pQueue()
{
    system("cls");
    printf("Queue, atau antrian adalah salah satu proses penyimpanan dan pengambilan data\n");
    printf("yang menggunakan sistem penyimpanan FIFO, atau First In First Out\n");
    printf("atau dalam bahasa diartikan sebagai Pertama Masuk, Pertama Keluar\n");
    printf("Yang berarti data yang masuk/disimpan pertama, akan dikeluarkan pertama\n");
    printf("Function Enqueue: Berfungsi untuk menambah elemen ke akhir antrian\n");
    printf("Function Dequeue: Berfungsi untuk menghapus elemen dari depan antrian\n");
    printf("IsEmpty: Memeriksa apakah antrian kosong, sedangkan \n");
    printf("IsFull: Memeriksa apakah antrian penuh");
	getch();
	menu();
}

