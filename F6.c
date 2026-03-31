// Number Pattern PrintinG PrOgram =|

// case 1 -

#include <stdio.h>

int main() {
    int n;
    printf("Enter Rows: ");
    scanf("%d", &n);
    for(int i = 1;i <= n; i++) {
        for(int j = 1;j <=i; j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

// case 2 -

int main() {
    int n;

    printf("Enter Rows: ");
    scanf("%d",&n);

    for(int i=n;i>=1;i--) {
        for(int j = 1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// case 3 -

int main() {
    int n;

    printf("Enter Rows: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {

        for(int j= 1;j<=n-i;j++) {
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");

    }
    return 0;
}

// case 4 -

int main() {
    int n;

    printf("Enter Rows: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;

}

// case 5 -

int main() {
    int n,num = 1;
    printf("Enter Rows: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        for(int j= 1;j<=i;j++) {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

// case 6 -

int main()
{

    int n;

    printf("Enter rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
            printf(" ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--)
    {

        for (int j = 1; j <= n - i; j++)
            printf(" ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}

// case 7 --

int main() {
    int n;

    printf("Enter Size: ");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==1||i==n||j==1||j==n)  {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}