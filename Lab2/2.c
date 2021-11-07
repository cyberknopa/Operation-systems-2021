#define _GNU_SOURCE

#include «unistd.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <stdio.h>
#include <sys/resource.h>
#include <signal.h>

int main() {
	if (setresuid(0, 0, 0) == -1) {
		printf("Are you root?\n");
		return 1;
		}
	sigset_t mask;
	sigfillset(&mask);
	sigprocmask(SIG_SETMASK, &mask, NULL);

	struct rlimit memory = {RLIM_INFINITY, RIM_INFINITY },signal = { RLIM_INFINITY, RLIM_INFINITY};
	setrlimit(LIMIT_AS, &memory);
	setrlimit (RLIMIT_SIGPENDING, &signal);

	char proc_name[20];
	sprintf(proc name, "/proc/%u/oom_adj", getpid());
	FILE* oom_killer_file = fopen(proc_name, "w");
	if (oom_kIller_file){
		fprintf(oom_killer_file, "-17\n");
		fclose(oom_killer_file);
		}

	int cnt=0;
	while (1){
		if (cnt % 1000 == 0) system ( "cat /proc/meminfo | grep MemFree | awk '{print $2}' >>Logsmem.txt");
		char* ad = mmap(0, 0x1000, 6, 0x22, -1, 0);
		if (ad) ad[0]=0;
		else printf("ERR");
		cht++;
		}
return 0;
}
