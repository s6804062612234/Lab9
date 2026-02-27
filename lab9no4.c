#include <stdio.h>
#include <string.h>
int checkLogin(char *login, char *passwd);
int checkValidPass(char *ps);   
int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
	if (checkValidPass(password)){
		//if Password is valid
		printf("Accepted\n");
    }
	else {
		printf("Reject\n");
	}
}
int checkValidPass(char *ps) {
    int ok = 0, i, j, n = strlen(ps);

    // 4.1) Length 5 and 1+ digits
    /*
    int d = 0;
    for (i = 0; i < n; i++) if (ps[i] >= '0' && ps[i] <= '9') d++;
    if (n == 5 && d >= 1) ok = 1;
    */

    // 4.2) Length 5-8, 1st not digit, 2+ Upper, 2+ digits
    /*
    int up = 0, dg = 0, fChar = (ps[0] < '0' || ps[0] > '9');
    for (i = 0; i < n; i++) {
        if (ps[i] >= 'A' && ps[i] <= 'Z') up++;
        if (ps[i] >= '0' && ps[i] <= '9') dg++;
    }
    if (n >= 5 && n <= 8 && fChar && up >= 2 && dg >= 2) ok = 1;
    */

    // 4.3) Length 5-8, 2+ Upper (no repeat), 2+ digits
    int up = 0, dg = 0, rep = 0;
    char tmp[n];
    for (i = 0; i < n; i++) {
        if (ps[i] >= 'A' && ps[i] <= 'Z') {
            for (j = 0; j < up; j++) if (tmp[j] == ps[i]) rep = 1;
            tmp[up++] = ps[i];
        }
        if (ps[i] >= '0' && ps[i] <= '9') dg++;
    }
    if (n >= 5 && n <= 8 && up >= 2 && dg >= 2 && !rep) ok = 1;

    return ok;
}

int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "mypass"))
		return 1;
	else
		return 0;
}
