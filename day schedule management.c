#include <stdio.h>

int main() {
	int teacher, day;

	printf("----- Teacher Day Schedule System -----\n\n");

	printf("Select Teacher:\n");
	printf("1. Mrs.Neha  Sharma\n");
	printf("2. Mr.sandip Patil\n");
	printf("3. Ms. vaishnavi pujari\n");
	printf("4. Mrs.Ashwini Deshpande \n");
	printf("5. Mrs.Anjali Sakurkar\n");
	printf("Enter teacher number:\n ");
	scanf("%d", &teacher);

	printf("\nSelect Day:\n");
	printf("1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6. Saturday\n");
	printf("Enter day number: ");
	scanf("%d", &day);

	printf("\n-----------------------------\n");

	switch(teacher) {

	case 1: 
		printf("Teacher: Mr. Sharma\n");
		switch(day) {
		case 1:
			printf("Monday:\n");
			printf("9-10 : Mathematics\n10-11 : Physics\n11-12 : Free\n12-1 : Computer\n");
			break;
		case 2:
			printf("Tuesday:\n");
			printf("9-10 : Mathematics\n10-11 : Free\n11-12 : Physics\n12-1 : Lab\n");
			break;
		case 3:
			printf("Wednesday:\n");
			printf("9-11 : Computer Lab\n11-12 : Mathematics\n");
			break;
		default:
			printf("No schedule available.\n");
		}
		break;

	case 2: 
		printf("Teacher: Ms. Patel\n");
		switch(day) {
		case 1:
			printf("Monday:\n");
			printf("9-10 : English\n10-11 : Free\n11-12 : Communication Skills\n");
			break;
		case 4:
			printf("Thursday:\n");
			printf("9-10 : English\n10-11 : English\n11-12 : Free\n");
			break;
		default:
			printf("No schedule available.\n");
		}
		break;

	case 3: 
		printf("Teacher: Mr. Khan\n");
		switch(day) {
		case 2:
			printf("Tuesday:\n");
			printf("9-10 : Chemistry\n10-11 : Lab\n11-12 : Lab\n");
			break;
		case 5:
			printf("Friday:\n");
			printf("9-10 : Chemistry\n10-11 : Free\n11-12 : Seminar\n");
			break;
		default:
			printf("No schedule available.\n");
		}
		break;

	case 4: 
		printf("Teacher: Ms. Rao\n");
		switch(day) {
		case 3:
			printf("Wednesday:\n");
			printf("9-10 : Biology\n10-11 : Biology\n11-12 : Free\n");
			break;
		case 6:
			printf("Saturday:\n");
			printf("9-11 : Workshop\n");
			break;
		default:
			printf("No schedule available.\n");
		}
		break;

	case 5: 
		printf("Teacher: Mr. Das\n");
		switch(day) {
		case 1:
			printf("Monday:\n");
			printf("9-10 : History\n10-11 : Geography\n11-12 : Free\n");
			break;
		case 5:
			printf("Friday:\n");
			printf("9-10 : History\n10-11 : Seminar\n");
			break;
		default:
			printf("No schedule available.\n");
		}
		break;

	default:
		printf("Invalid teacher selection!\n");
	}

	return 0;
}
