#include <stdio.h>

int main()
{
    int a, b, c, arr[100][100], tich = 1, temp;
    do
    {
        printf("Menu\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("4. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("5. In ra cac phan tu nam tren duong cheo phu\n");
        printf("6. Sap xep duong cheo chinh theo thu tu tang dan\n");
        printf("7. Tim kiem mot phan tu va in ra vi tri cua phan tu do trong mang\n");
        printf("8. Thoat\n");
        printf("Moi ban chon: ");
        scanf("%d", &a);

        switch (a)
        {
        case 1:
            printf("Moi ban nhap so hang: ");
            scanf("%d", &b);
            printf("Moi ban nhap so cot: ");
            scanf("%d", &c);
            for (int i = 0; i < b; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    printf("Moi ban nhap gia tri [%d][%d]: ", i + 1, j + 1);
                    scanf("%d", &arr[i][j]);
                }
            }
            printf("\n");
            break;
        case 2:
            for (int i = 0; i < b; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    printf("%d", arr[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            for (int i = 0; i < c; i++)
            {
                printf("%d", arr[0][i]);
                tich *= arr[0][i];
            }
            for (int i = 1; i < c; i++)
            {
                printf("%d", arr[b - 1][i]);
                tich *= arr[b - 1][i];
            }
            for (int i = 1; i < b - 1; i++)
            {
                printf("%d", arr[i][0]);
                tich *= arr[i][0];
            }
            for (int i = 1; i < b; i++)
            {
                printf("%d", arr[i][c - 1]);
                tich *= arr[i][c - 1];
            }
            printf("\nTich cua cac phan tu tren duong bien: %d\n", tich);
            break;
        case 4:
            if (b == c)
            {
                for (int i = 0; i < b; i++)
                {
                    printf("%d", arr[i][i]);
                }
                printf("\n");
            }
            else
            {
                printf("Khong hop le\n");
            }
            break;
        case 5:
            if (b == c)
            {
                for (int i = 0; i < b; i++)
                {
                    printf("%d", arr[i][b - i - 1]);
                }
                printf("\n");
            }
            else
            {
                printf("Khong hop le\n");
            }
            break;
        case 6:
            if (b == c)
            {
                for (int i = 0; i < b - 1; i++)
                {
                    for (int j = i + 1; j < b; j++)
                    {
                        if (arr[i][i] > arr[j][j])
                        {
                            temp = arr[i][i];
                            arr[i][i] = arr[j][j];
                            arr[j][j] = temp;
                        }
                    }
                }
                printf("Duong cheo chinh sau khi sap xep tang dan: ");
                for (int i = 0; i < b; i++)
                {
                    printf("%d", arr[i][i]);
                }
                printf("\n");
            }
            else
            {
                printf("Khong hop le\n");
            }
            break;
        case 7:
            printf("Nhap gia tri can tim: ");
            scanf("%d", &temp);
            for (int i = 0; i < b; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if (arr[i][j] == temp)
                    {
                        printf("Gia tri %d xuat hien tai vi tri [%d][%d]\n", temp, i + 1, j + 1);
                    }
                }
            }
            break;
        case 8:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (a != 8);

    return 0;
}

