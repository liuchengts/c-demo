#include <stdio.h>
#include <time.h>

int main() {
    printf("Hello, World!\n");
    time_t tmpcal_ptr;
    struct tm *tmp_ptr = NULL;

    time(&tmpcal_ptr);
    printf("tmpcal_ptr=%d\n", tmpcal_ptr);
    tmp_ptr = gmtime(&tmpcal_ptr);
    printf("after gmtime, the time is:%d:%d:%d\n", tmp_ptr->tm_hour, tmp_ptr->tm_min, tmp_ptr->tm_sec);

    tmp_ptr = localtime(&tmpcal_ptr);
    printf ("after localtime, the time is:%d.%d.%d ", (1900+tmp_ptr->tm_year), (1+tmp_ptr->tm_mon), tmp_ptr->tm_mday);
    printf("%d:%d:%d\n", tmp_ptr->tm_hour, tmp_ptr->tm_min, tmp_ptr->tm_sec);

    return 0;
}