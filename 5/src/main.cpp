#include "iostream"

struct line {
    struct line* next;
    char a;
    char b;
    char not_a;
    char not_b;
    char a_and_b;
    // ...
};

struct line* init_line(char _a, char _b) {
    struct line* out = (struct line*) malloc(sizeof(struct line));
    out->a = _a;
    out->b = _b;
    out->not_a = ~out->a;
    out->not_b = ~out->b;
    out->a_and_b = out->a & out->b;
}

void print_line(struct line* in) {
    printf("%c %c %c %c %c\n", in->a, in->b, in->not_a, in->not_b, in->a_and_b);
}

int main() {
    struct line *it = init_line('h', 'j');
    struct line *ot = init_line('a', '1');
    it->next = ot;
    print_line(it);
    print_line(it->next);
}