#include <stdio.h>
int main() {
    int n;
    printf("nhap so phan tu ma mang chua: ");
    scanf("%d",&n);
    int a[n];
    printf("nhap phan tu: ");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("cac mang co tong so bang 0 la :\n");
for (int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
        sum+=a[j];
        if (sum ==0){
            printf("{");
            for(int q=i;q<=j;q++){
                printf("%d",a[q]);
                if (q < j) printf(", ");
            }
            printf("}\n");
        }
    }
}
return 0;
}