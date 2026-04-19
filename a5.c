#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int i, j, r, c, choice;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix A:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter matrix B:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);

        printf("\n--- MENU ---\n");
        printf("1. Addition\n");
        printf("2. Saddle Point\n");
        printf("3. Inverse (2x2 only)\n");
        printf("4. Magic Square Check\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice) {
        case 1: 
            for(i=0;i<r;i++) {
                for(j=0;j<c;j++) {
                    sum[i][j] = a[i][j] + b[i][j];
                    printf("%d ", sum[i][j]);
                }
                printf("\n");
            }
            break;

        case 2: 
            for(i=0;i<r;i++) {
                int min = a[i][0], col = 0;
                for(j=1;j<c;j++) {
                    if(a[i][j] < min) {
                        min = a[i][j];
                        col = j;
                    }
                }

                int k, flag = 1;
                for(k=0;k<r;k++) {
                    if(a[k][col] > min) {
                        flag = 0;
                        break;
                    }
                }

                if(flag)
                    printf("Saddle point: %d\n", min);
            }
            break;

        case 3: // Inverse (2x2 only)
            if(r==2 && c==2) {
                int det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

                if(det == 0) {
                    printf("Inverse not possible\n");
                } else {
                    printf("Inverse matrix:\n");
                    printf("%f %f\n", (float)a[1][1]/det, (float)-a[0][1]/det);
                    printf("%f %f\n", (float)-a[1][0]/det, (float)a[0][0]/det);
                }
            } else {
                printf("Only for 2x2 matrix\n");
            }
            break;

        case 4: 
            if(r != c) {
                printf("Not a square matrix\n");
                break;
            }

            int s = 0, magic = 1;

            for(j=0;j<c;j++)
                s += a[0][j];

            for(i=1;i<r;i++) {
                int rowSum = 0;
                for(j=0;j<c;j++)
                    rowSum += a[i][j];
                if(rowSum != s)
                    magic = 0;
            }

            for(j=0;j<c;j++) {
                int colSum = 0;
                for(i=0;i<r;i++)
                    colSum += a[i][j];
                if(colSum != s)
                    magic = 0;
            }

            int d1=0, d2=0;
            for(i=0;i<r;i++) {
                d1 += a[i][i];
                d2 += a[i][r-i-1];
            }

            if(d1!=s || d2!=s)
                magic = 0;

            if(magic)
                printf("Magic Square\n");
            else
                printf("Not Magic Square\n");

            break;

        default:
            printf("Invalid choice\n");
        }

    return 0;
}