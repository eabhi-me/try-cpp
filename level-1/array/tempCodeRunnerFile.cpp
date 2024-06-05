void el3lar(int array[], int n ){
    for(int i=0; i<n; i++){
        if(array[i]>f1){
            f3=f2;
            f2=f1;
            f1=array[i];
        }
        else if(array[i]<f1 && array[i]>f2){
            f3=f2;
            f2=array[i];
        }
        else if(array[i]<f1 && array[i]<f2 && array[i]>f3){
            f3=array[i];
        }
    }
}