#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    double output = 1;

    for(int i1=0;i1<n/2;i1++){
        for(int i2=0;i2<i1/2;i2++){
            for(int i3=0;i3<i2/2;i3++){
                for(int i4=0;i4<i3/2;i4++){
                    for(int i5=0;i5<i4/2;i5++){
                        for(int i6=0;i6<i5/2;i6++){
                            for(int i7=0;i7<i6/2;i7++){
                                for(int i8=0;i8<i7/2;i8++){
                                    for(int i9=0;i9<i8/2;i9++){
                                        for(int i10=0;i10<i9/2;i10++){
                                            output++;
                                        }
                                        output++;
                                    }
                                    output++;
                                }
                                output++;
                            }
                            output++;
                        }
                        output++;
                    }
                    output++;
                }
                output++;
            }
            output++;
        }
        output++;
    }

    cout << output;

    return 0;

}