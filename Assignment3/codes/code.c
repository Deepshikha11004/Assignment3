/*
Name : Deepshikha
Roll no:CS21BTECH11016
Assignment 3:
Example 10:5 people were asked about the time in a week they spend in doing
social work in their community. They said 10, 7, 13, 20 and 15 hours, respectively.
Find the mean (or average) time in a week devoted by them for social work
*/
#include <stdio.h>
int main() {
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}
