#include <stdio.h>
struct sigrecord {
    int signum;
    char signame[20];
    char sigdesc[100];
} sigline, *sigline_p = &sigline;

int main() {
    struct sigrecord siggy = {1, "testing", "asc"};
    sigline.signum = 8;
    siggy.signum = 5;
    printf("%d\n", siggy.signum);
    printf("%zu\n", sizeof(siggy));
    printf("%d\n", sigline.signum);
    sigline_p->signum = 10;
    printf("%d\n", sigline_p->signum);
}
