#include <stdio.h>

int main() {
  
//   printf("---------\n");
//   printf("|\t |\n");
//   printf("R\t |\n");
//   printf("N\t |\n");
//   printf("w\t |\n");
//   printf("|\t |\n");
//   printf("---------\n");


// printf(" *\n **\n ***\n **\n *\n");

// for (int i = 5; i >= 1; i--)
// {
//     printf("hello world\n");
// }

// printf("%d \n", 4>3 || 3>5);

// int a=2;
// int b=4;
// int c=2;
// a+=b+c;
// printf("%d",a);

// int x;
// printf("enter nub: ");
// scanf("%d",&x);

// if (x % 2 == 0)
// {
//     printf("%d is even nub\n",x);
// }

// else{
//     printf("%d is odd nub\n",x);
// }


// int mark;
// printf("enter the mark: ");
// scanf("%d",&mark);

// if(mark >= 100)
// {
//     printf(" A pass\n",mark);
// }

// else if (mark >= 50)
// {
//     printf("B pass\n");
// }

// else
// {
//  printf(" F fail\n",mark);
// }



//   int marks;
//   char grade;

//   printf("Enter the marks: ");
//   scanf("%d", &marks);

//   if (marks >= 90) {
//     grade = 'A';
//   } else if (marks >= 80) {
//     grade = 'B';
//   } else if (marks >= 70) {
//     grade = 'C';
//   } else if (marks >= 60) {
//     grade = 'D';
//   } else {
//     grade = 'F';
//   }

//   printf("The grade is %c\n", grade);

 
  int marks;

  printf("Enter your marks: ");
  scanf("%d", &marks);

  if (marks < 0 && marks > 100) {
    printf("Invalid marks.\n");
    return 1;
  }

  if (marks >= 50) {
    printf("You passed!\n");
  } else {
    printf("You failed.\n");
  }

  

}