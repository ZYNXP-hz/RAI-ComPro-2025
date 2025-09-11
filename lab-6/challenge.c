#include <stdio.h>
int main()
{
    struct Grade
    {
        int MathGrade;
        int EngGrade;
        int SciGrade;
        int HistoryGrade;
    };
    struct profile
    {
        char name[100];
        int ID;
        struct Grade score;
    }s[3];

    for(int i=0;i<3;i++)
    {
        printf("Enter name, ID, and 4 grades for student %d:\n",i+1);
        scanf(" %s %d %d %d %d %d",s[i].name,
                                        &s[i].ID,
                                        &s[i].score.MathGrade,
                                        &s[i].score.EngGrade,
                                        &s[i].score.SciGrade,
                                        &s[i].score.HistoryGrade);
        printf("\n");
    }
    float studentAvg[3];
    int topIndex = 0;
    printf("\nStudent Average:\n");
    for(int i=0;i<3;i++)
    {  
        int Total =s[i].score.MathGrade + 
                   s[i].score.EngGrade  + 
                   s[i].score.SciGrade  +
                   s[i].score.HistoryGrade;
        float Avg = Total/4.0;
        printf("%s (ID: %d):%.2f\n",s[i].name,s[i].ID,Avg);
        studentAvg[i] = Total / 4.0;
        if (studentAvg[i] > studentAvg[topIndex])
            topIndex = i;
    }
    printf("\nTop Student: %s with %.2f\n",s[topIndex].name, studentAvg[topIndex]);
float avgMath = 0, avgEng = 0, avgSci = 0, avgHist = 0;

    for (int i = 0; i < 3; i++)
    {
        avgMath += s[i].score.MathGrade;
        avgEng  += s[i].score.EngGrade;
        avgSci  += s[i].score.SciGrade;
        avgHist += s[i].score.HistoryGrade;
    }

    avgMath /= 3.0;
    avgEng  /= 3.0;
    avgSci  /= 3.0;
    avgHist /= 3.0;

    printf("\nSubject Averages:\n");
    printf("Math: %.2f\n", avgMath);
    printf("English: %.2f\n", avgEng);
    printf("Science: %.2f\n", avgSci);
    printf("History: %.2f\n", avgHist);

    float subjectAvgs[4] = {avgMath, avgEng, avgSci, avgHist};
    char *subjectNames[4] = {"Math", "English", "Science", "History"};

    int topSubjectIndex = 0;
    for (int i = 1; i < 4; i++)
    {
        if (subjectAvgs[i] > subjectAvgs[topSubjectIndex])
            topSubjectIndex = i;
    }

    printf("\nTop Subject: %s with average %.2f\n",
           subjectNames[topSubjectIndex], subjectAvgs[topSubjectIndex]);
    return 0; 
}
    