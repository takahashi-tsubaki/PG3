#include <stdio.h>

int RecursiveSalary(int hour) {
    if (hour <= 1) {
        return (100);
    }

    return (RecursiveSalary(hour - 1) * 2 - 50);
}

void Result(int hour) {
    int rec = 0;
    int flat = 0;

    flat = 1072 * hour;

    for (int i = 0; i < hour; i++) {
        rec += RecursiveSalary(i + 1);
    }

    printf("�ċA�I�̒��� : %d�~  ", rec);
    printf("��ʂ̒��� : %d�~\n\n",flat);

    if (rec > flat) {
        printf("�ċA�I�������������u�� = %d����\n",hour);
    }

}



int main() {
    int hour = 8;
    Result(hour);

    return 0;
}