#include <stdio.h>

int main()
{
	int frame[10], page[30], num_page, num_frame;
	int i, j, front = 0;
	int page_fault = 0;
	int found;

	printf("Enter the number of frames: ");
	scanf("%d", &num_frame);

	printf("Enter the number of pages: ");
	scanf("%d", &num_page);

	printf("Enter the reference string:\n");
	for (i = 0; i < num_page; i++) {
		scanf("%d", &page[i]);
	}

	for (i = 0; i < num_frame; i++) {
		frame[i] = -1;
	}


	for (i = 0; i < num_page; i++) {
		found = 0;

		for (j = 0; j < num_frame; j++) {
			if (frame[j] == page[i]) {
				found = 1;
				break;
			}
		}

		if (!found) {
			frame[front] = page[i];
			front = (front + 1) % num_frame;
			page_fault++;
		}

		printf("Frames after accessing %d: ", page[i]);
		for (j = 0; j < num_frame; j++) {
			if (frame[j] == -1)
				printf("-- ");
			else
				printf("%d ", frame[j]);
		}
		printf("\n");
	}

	printf("\nTotal page faults: %d\n", page_fault);

	return 0;
}
