int main(){
    int num = 10 , pos = 2;
    // printf("Enter a number : ");
    // scanf("%d" , &num);
    // printf("Enter a bit(0 to 31) : ");
    // scanf("%d" , &pos);
    int result = num ^ (1 << pos);
    printf("After toggling %d bit on %d , result is %d" , pos , num , result);
    return 0;
}
