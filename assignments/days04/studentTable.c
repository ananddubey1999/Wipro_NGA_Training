#include <stdio.h>
# define MAX_SUBJECTS 4
# define MAX_NAME_LENGTH 50
# define MAX_PHONE_LENGTH 15
# define MAX_ADDRESS_LENGTH 50


float calculateAvg(int marks[]){
    int totalMarks = 0;
    for (int i = 0; i < MAX_SUBJECTS; i++)
    {
        totalMarks += marks[i];
    }
    return (float)totalMarks/MAX_SUBJECTS;
}


float calPercentile(float avg, float classAvgs[]){
    float totalClassAvg = 0;
    for (int i = 0; i < MAX_SUBJECTS; i++)
    {
        totalClassAvg += classAvgs[i];
    }
    float classAvg = totalClassAvg/MAX_SUBJECTS;

    return (avg/classAvg)*100;
}



int main(){
    int rollNo;
    char name[MAX_NAME_LENGTH];
    char gender;
    char phoneNo[MAX_PHONE_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
    int marks[MAX_SUBJECTS];
    float average, percentile;
    float classAverage[MAX_SUBJECTS];

    printf("Enter Your Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Your Name: ");
    scanf("%s", &name);

    printf("Enter Your Geneder: ");
    scanf("%c", &gender);

    printf("Enter Your Phone Number: ");
    scanf("%s", &phoneNo);

    printf("Enter Your Address: ");
    scanf("%s", &address);

    printf("Enter Your Marks for Subjects M1, M2, M3, M4: ");
    for (int i = 0; i < MAX_SUBJECTS; i++)
    {
        scanf("%d", &marks[i]);
    }
    
    average = calculateAvg(marks);

    for(int i=0; i<MAX_SUBJECTS; i++){
        classAverage[i] = 75.0;
    }

    percentile = calPercentile(average, classAverage);

    printf("\nStudent Details:\n");
    printf("\nRoll Number\tName\tGender\tMobile Number\tAddress\tM1\tM2\tM3\tM4\tAvg\tPercentile\n");

    printf("--------\t---------\t---------\t----------\t-----\t-----\t-----\t-----\t---------\t----------\t\n");
    printf("%d\t%s\t%c\t%s\t%s\t%i\t%i\t%i\t%i\t%.2f\t%.2f%%\n", rollNo,name,gender,phoneNo,address,marks[0], marks[1],marks[2],marks[3], average, percentile);
}