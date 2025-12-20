#include <stdio.h>
int main() {
int n, i;
int arrival_time[10], burst_time[10], waiting_time[10], turn_around_time[10];
int total_wt = 0, total_tat = 0;
printf("Enter the number of processes: ");
scanf("%d", &n);

for (i = 0; i < n; i++) {
printf("Enter arrival time and burst time for process %d: ", i + 1);
scanf("%d %d", &arrival_time[i], &burst_time[i]);
}

waiting_time[0] = 0;

for (i = 1; i < n; i++) {
waiting_time[i] = waiting_time[i - 1] + burst_time[i - 1];
}

for (i = 0; i < n; i++) {
turn_around_time[i] = burst_time[i] + waiting_time[i];
total_wt += waiting_time[i];
total_tat += turn_around_time[i];
}

printf("\nProcess\tArrival\tBurst\tWaiting\tTurn Around\n");
for (i = 0; i < n; i++) {
printf("%d\t%d\t%d\t%d\t%d\n", i + 1, arrival_time[i], burst_time[i], waiting_time[i],
turn_around_time[i]);
}
printf("\nAverage waiting time = %.2f", (float)total_wt / n);
printf("\nAverage turn around time = %.2f", (float)total_tat / n);
return 0;
}