#include <stdio.h>

struct info
{
    char sub[10];
    float credit;
    int marks;
    float grade;
};

float calcGrade(int marks)
{
    if (marks >= 80) return 4.0;
    else if (marks >= 75) return 3.75;
    else if (marks >= 70) return 3.5;
    else if (marks >= 65) return 3.25;
    else if (marks >= 60) return 3.0;
    else if (marks >= 55) return 2.75;
    else if (marks >= 50) return 2.5;
    else if (marks >= 45) return 2.25;
    else if (marks >= 40) return 2.0;
    else return 0.0;
}

int main()
{
    struct info m[9];
    float totalPoints = 0, totalCredits = 0;


    m[0].credit = 3.00;
    m[1].credit = 3.00;
    m[2].credit = 3.00;
    m[3].credit = 3.00;
    m[4].credit = 3.00;
    m[5].credit = 1.50;
    m[6].credit = 0.75;
    m[7].credit = 0.75;
    m[8].credit = 1.50;

    printf(" Course code   Course Title                                          Credit");
    printf("\n  AVE  4201    Electrical Circuits Analysis II                        %.2f", m[0].credit);
    printf("\n  CSE  4201    Computer Programming & Application                     %.2f", m[1].credit);
    printf("\n  HUM  4203    Bangladesh Studies                                     %.2f", m[2].credit);
    printf("\n  MAT  4203    Ordinary and Partial Differential Equation             %.2f", m[3].credit);
    printf("\n  CHM  4201    Chemistry                                              %.2f", m[4].credit);
    printf("\n  CSE  4202    Computer Programming & Application sessional           %.2f", m[5].credit);
    printf("\n  AVE  4202    Electrical Circuits Analysis II sessional              %.2f", m[6].credit);
    printf("\n  CHM  4202    Chemistry sessional                                    %.2f", m[7].credit);
    printf("\n  ASE  4202    Workshop Technology Sessional                          %.2f", m[8].credit);
    printf("\n-----------------------------------------------------------------------------\n");



    printf("\nEnter score for AVE 4201: ");
    scanf("%d", &m[0].marks);

    printf("Enter score for CSE 4201: ");
    scanf("%d", &m[1].marks);

    printf("Enter score for HUM 4203: ");
    scanf("%d", &m[2].marks);

    printf("Enter score for MAT 4203: ");
    scanf("%d", &m[3].marks);

    printf("Enter score for CHM 4201: ");
    scanf("%d", &m[4].marks);

    printf("Enter score for CSE 4202: ");
    scanf("%d", &m[5].marks);

    printf("Enter score for AVE 4202: ");
    scanf("%d", &m[6].marks);

    printf("Enter score for CHM 4202: ");
    scanf("%d", &m[7].marks);

    printf("Enter score for ASE 4202: ");
    scanf("%d", &m[8].marks);


    for (int i = 0; i < 9; i++)
    {
        m[i].grade = calcGrade(m[i].marks);
        totalPoints += m[i].grade * m[i].credit;
        totalCredits += m[i].credit;
    }

    float cgpa = totalPoints / totalCredits;
    printf("\nTotal Credits: 19.50");
    printf("\nTotal Grade Points Earned: %.2f", totalPoints);
    printf("\nSemester GPA: %.2f\n", cgpa);

    return 0;
}
