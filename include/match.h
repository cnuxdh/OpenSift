
#ifndef OPEN_SIFT_MATCH_H
#define OPEN_SIFT_MATCH_H

//#include <vector>
//using namespace std;

#ifdef __cplusplus
extern "C" {
#endif


#include "imgfeatures.h"



 _declspec(dllexport) int OpenSiftMatch( int featDim,   //feature dimension 
				          struct kd_node* kd_root,		//kd_node for one image 	
				          unsigned char* keys, int num, //key feature for another image
				          double ratio,
						  int** index1, int** index2, int* matchNum //match output
						  );
						  

#ifdef __cplusplus
}
#endif




#endif
