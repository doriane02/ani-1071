#include<cstdio>

void tracerSegment(int x0, int y0, int x1, int y1){
    int dx = (x1 > x0) ? (x1 - x0) : (x0 - x1);
    int dy = (y1 > y0) ? (y0 - y1) : (y1 - y0);
    int sx = (x0 < x1) ? 1 : -1;
    int sy = (y0 < y1) ? 1 : -1;
    int erreur = dx + dy;

    while(true){
        printf("%d %d\n", x0, y0);
        if(x0 == x1 && y0 == y1){
            break;
        }
        int e2 = 2 * erreur;
        if(e2 >= dy){
            erreur += dy;
            x0 += sx;
        }
        if(e2 <= dx) {
            erreur += dx;
            y0 += sy;
        }
    }
}
 int main(){
    int x0, y0, x1, y1;
    scanf("%d %d %d %d", &x0, &y0, &x1, &y1);
    tracerSegment(x0, y0, x1, y1);

    return 0;
 }
 