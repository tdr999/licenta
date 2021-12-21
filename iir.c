//iir filter
//order 4, eliptic, cutoff at 2.6k, sampling of 8k
//therefore 2.6 / 4 at 0.65, 0.5db passband ripple
//20db stopband ripple
#include <stdio.h>
#define bufferLength 5
short buffer[bufferLength], indiceBuffer = 0, 	
coeffA[] = {0, 0, 0, 0, 0},
coeffB[] = {0, 0, 0, 0, 0};


short append(short a){
	buffer[ indiceBuffer % bufferLength ] = a;
	indiceBuffer++;
}

short dequeue(){ // in teorie nici nu ar mai trebui facut if in filter
	return buffer[indiceBuffer % bufferLength];
}



short filter(short x){
	indiceBuffer %= bufferLength;
	//append inmultire buffer cu parametrii a + x
	//return inmultire buffer +x cu parametrii b
}



int main(){
	short x;
	FILE *input, *output;
	input = fopen("intrare.dat", "r");
	output = fopen("iesire.dat", "w");
	
	//citire
	while ( fread(input, "%hd ", &x) != EOF ){
		fwrite(output, "%hd ", filtru(x));
	}

	fclose(input);
	fclose(output);





}



