//Task is to find out passed as well as failed students.
//Given the score of 'N' students in the class, write a program to compute the maximum score. Use array to store the marks of the students and assume that the maximum number of students
// in a class is 50. Assume that -1 is used to indicate a student who is absent for the exam. Assume that a student should secure a minimum of 50 marks to pass the exam.

int main()
{
  	int scores[50]; // assume max number of students in class is 50
    int i, n, max_score;

    // Input the scores
    printf("Enter the number of students in the class (up to 50): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter the score of student %d: ", i);
        scanf("%d", &scores[i]);
    }

    // Compute the maximum score
    max_score = scores[1];
    for (i = 1; i <n; i++) {
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
    }
    printf("The maximum score in the class is: %d\n", max_score);

    // Determine which students have passed and which have failed
    printf("The following students have passed:\n");
    for (i = 1; i <= n; i++) {
        if (scores[i] >= 50 && scores[i] != -1) {
            printf("Student %d\n", i);
        }
 }
    printf("The following students have failed:\n");
    for (i = 1; i <= n; i++) {
        if (scores[i] < 50 && scores[i] != -1) {
            printf("Student %d\n", i);
        }
    }
  printf("the following students wre absent:\n");
  for(i=1;i<=n;i++)
  {
   if(scores[i]==-1){
   	printf("student %d\n",i);
   }
  }
  return 0;
}
