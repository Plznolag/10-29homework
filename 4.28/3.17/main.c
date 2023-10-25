#include <stdio.h>

int main() {
	int paycode;
	double weeklyPay = 0;

	while (1) {
		printf("Enter employee's pay code (1 for manager, 2 for hourly worker, 3 for commission worker, 4 for pieceworker, 0 to exit): ");
		scanf("%d", &paycode);

		if (paycode == 0) {
			break; // Exit the program if the user enters 0.
		}

		switch (paycode) {
		case 1: // Manager
			printf("Enter manager's fixed weekly salary: $");
			scanf("%lf", &weeklyPay);
			break;

		case 2: // Hourly Worker
			double hourlyWage;
			int hoursWorked;
			printf("Enter hourly wage: $");
			scanf("%lf", &hourlyWage);
			printf("Enter hours worked: ");
			scanf("%d", &hoursWorked);

			if (hoursWorked <= 40) {
				weeklyPay = hourlyWage * hoursWorked;
			}
			else {
				weeklyPay = (40 * hourlyWage) + ((hoursWorked - 40) * 1.5 * hourlyWage);
			}
			break;

		case 3: // Commission Worker
			double grossSales;
			printf("Enter gross weekly sales: $");
			scanf("%lf", &grossSales);
			weeklyPay = 250 + (0.057 * grossSales);
			break;

		case 4: // Pieceworker
			int piecesProduced;
			double pieceRate;
			printf("Enter number of pieces produced: ");
			scanf("%d", &piecesProduced);
			printf("Enter piece rate: $");
			scanf("%lf", &pieceRate);
			weeklyPay = piecesProduced * pieceRate;
			break;

		default:
			printf("Invalid pay code. Please enter a valid pay code.\n");
			break;
		}

		printf("Weekly pay: $%.2lf\n", weeklyPay);
	}

	return 0;
}