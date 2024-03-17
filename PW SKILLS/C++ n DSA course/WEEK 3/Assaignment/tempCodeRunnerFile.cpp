int main(){

    for(int i = 1;i<=500;i++){
        int temp = i,arm=0;;
        while(temp>0){
            int lastdigit = temp%10;
            arm = arm + (lastdigit*lastdigit*lastdigit);
            temp = temp/10;
        }
        if(i==arm){
            cout<<i<<endl;
        }
    }
}