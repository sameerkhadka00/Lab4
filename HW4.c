//Answer of 1
#include<stdio.h>

int isPrime(int n)
{
    int i;
    if (n <= 1) 
        return 0;
    for (i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (isPrime(n))
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
    return 0;
}
//Answer of 2
#include<stdio.h>

int main()
{
    int num1, num2;
    int result;

    printf("Read the integers from keyboard: ");
    scanf("%d%d", &num1, &num2);

    result = num1 & num2;

    printf("The binary representation of %d is %d\n", num1, num1);
    printf("The binary representation of %d is %d\n", num2, num2);
    printf("The binary representation of %d & %d is %d\n", num1, num2, result);
    printf("The Answer after ANDing is: %d\n", result);

    return 0;
}
//Answer of 3
#include<stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return;
    printf("%d, %d", a, b);
    for (i = 2; i < n; i++)
    {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    printf("Read the integers from keyboard: ");
    scanf("%d", &n);
    fibonacci(n);
    printf("\n");
    return 0;
}
//Answer of 4
#include<stdio.h>

int main()
{
    int n, i;
    float sum = 0;
    printf("Read the integers from keyboard: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (float)1/i;
    }
    printf("Sum of reciprocal of n: (1 + 1/2 + 1/3 + ... + 1/%d) = %.2f\n", n, sum);
    return 0;
}
//Answer of 5
#include <stdio.h>
 
int findMaximum(int arr[], int low, int high)
{
 
   /* Base Case: Only one element is present in arr[low..high]*/
   if (low == high)
     return arr[low];
 
   /* If there are two elements and first is greater then
      the first element is maximum */
   if ((high == low + 1) && arr[low] >= arr[high])
      return arr[low];
 
   /* If there are two elements and second is greater then
      the second element is maximum */
   if ((high == low + 1) && arr[low] < arr[high])
      return arr[high];
 
   int mid = (low + high)/2;   /*low + (high - low)/2;*/
 
   /* If we reach a point where arr[mid] is greater than both of
     its adjacent elements arr[mid-1] and arr[mid+1], then arr[mid]
     is the maximum element*/
   if ( arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
      return arr[mid];
 
   /* If arr[mid] is greater than the next element and smaller than the previous
    element then maximum lies on left side of mid */
   if (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1])
     return findMaximum(arr, low, mid-1);
   else // when arr[mid] is greater than arr[mid-1] and smaller than arr[mid+1]
     return findMaximum(arr, mid + 1, high);
}
 
/* Driver program to check above functions */
int main()
{
   int arr[] = {1, 3, 50, 10, 9, 7, 6};
   int n = sizeof(arr)/sizeof(arr[0]);
   printf("The maximum element is %d", findMaximum(arr, 0, n-1));
   getchar();
   return 0;return 0;
}
//Answer of 6
#include<stdio.h>
#define ROW 3
#define COL 2

void input_matrix(int mat[ROW][COL]);
void add_matrix(int mat1[ROW][COL], int mat2[ROW][COL], int result[ROW][COL]);
void display_matrix(int mat[ROW][COL]);

int main()
{
    int mat1[ROW][COL], mat2[ROW][COL], result[ROW][COL];

    printf("Enter value for 1 matrix: ");
    input_matrix(mat1);

    printf("Enter value for 2 matrix: ");
    input_matrix(mat2);

    add_matrix(mat1, mat2, result);

    printf("Sum of matrix is\n");
    display_matrix(result);

    return 0;
}

void input_matrix(int mat[ROW][COL])
{
    int i, j;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void add_matrix(int mat1[ROW][COL], int mat2[ROW][COL], int result[ROW][COL])
{
    int i, j;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void display_matrix(int mat[ROW][COL])
{
    int i, j;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
}
//Answer of 7
#include<stdio.h>

int main()
{
    int n, i;
    int arr[100], sum = 0;

    printf("Enter length of array: ");
    scanf("%d", &n);

    printf("Enter the elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The average value in the array: %d", sum / n);

    return 0;
}
