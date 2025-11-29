// // #include <stdio.h>
// // int main()
// // {
// //     int n, rem, arm = 0, c;
// //     printf("Enter the number: ");
// //     scanf("%d", &n);

// //     c = n; // store original number

// //     while (n > 0)
// //     {
// //         rem = n % 10;          // last digit
// //         arm = (rem * rem * rem) + arm;   // cube of digit added
// //         n = n / 10;            // remove last digit
// //     }

// //     if (c == arm)
// //     {
// //         printf("Armstrong number");
// //     }
// //     else
// //     {
// //         printf("Not Armstrong Number");
// //     }

// //     return 0;
// // }

// #include <stdio.h>
// int main()
// {

//     int n, c,rem, arm=0;
//     printf("Enter the Number:");
//     scanf("%d", &n);

//     c = n;

//     while (n > 0)
//     {
//         rem = n % 10;
//         arm = (rem * rem * rem) + arm;
//         n = n / 10;
//     }
//     if (c == arm)
//     {
//         printf("This Is %d Armstrong Number.", arm);
//     }
//     else
//     {
//         printf("Not %d Armstrong Number.", arm);
//     }
//     return 0;
// }