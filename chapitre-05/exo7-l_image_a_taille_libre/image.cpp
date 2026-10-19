#include<cstdio>

char* creerImage(int l, int h){
    char* img = new char[l * h];
    for(int i = 0; i < l * h; i++){
        img[i] = ' ';
    }
    return img;
}

void detruireImage(char* img){
    delete[] img;
}

void afficher(const char* img, int l, int h){
    for(int y = 0; y < h; y++){
        for(int x = 0; x < l; x++){
            printf("%c", img[y * l + x]);
        }
        printf("\n");
    }
}

void point(char* img, int l, int h, int x, int y, char c){
    if( x < 0 || x >= l || y < 0 || y >= h){
        return;
    }
    img[y * l + x] = c;
}

void dessinerCercle(char* img, int l, int h){
    int r = (h - 1) / 2;
    int cx = l / 2; 
    int cy = (h - 1) / 2;
    for(int y = 0; y < h; y++){
        for(int x = 0; x < l; x++){
            int dx = x - cx;
            int dy = y - cy;
            if(dx * dx + dy * dy <= r * r){
                point(img, l, h, x, y, '#');
            }
        }
    }
}

int main(){
    int l1 = 30, h1 = 10;
    char* img1 = creerImage(l1, h1);
    dessinerCercle(img1, l1, h1);
    afficher(img1, l1, h1);
    detruireImage(img1);

    int l2 = 80, h2 = 24;
    char* img2 = creerImage(l2, h2);
    dessinerCercle(img2, l2, h2);
    afficher(img2, l2, h2);
    detruireImage(img2);

    return 0;
} 
