/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class bda_tensorflow_jni_Operation */

#ifndef _Included_bda_tensorflow_jni_Operation
#define _Included_bda_tensorflow_jni_Operation
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Variable
 * Signature: ([IILbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Variable
  (JNIEnv *, jclass, jintArray, jint, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Identity
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Identity
  (JNIEnv *, jclass, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Placeholder
 * Signature: (ILbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Placeholder
  (JNIEnv *, jclass, jint, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Transpose
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Transpose
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Conv2D
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;[ILjava/lang/String;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Conv2D
  (JNIEnv *, jclass, jobject, jobject, jintArray, jstring, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    BiasAdd
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_BiasAdd
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Relu
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Relu
  (JNIEnv *, jclass, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    MaxPool
 * Signature: (Lbda/tensorflow/run/NodeOut;[I[ILjava/lang/String;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_MaxPool
  (JNIEnv *, jclass, jobject, jintArray, jintArray, jstring, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    MatMul
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_MatMul
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Add
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Add
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Mul
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Mul
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Sub
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Sub
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    L2Loss
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_L2Loss
  (JNIEnv *, jclass, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Mean
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Mean
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    SparseSoftmaxCrossEntropyWithLogits
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_SparseSoftmaxCrossEntropyWithLogits
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Reshape
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Reshape
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Const
 * Signature: ([ILbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Const___3ILbda_tensorflow_jni_GraphDefBuilder_2Ljava_lang_String_2
  (JNIEnv *, jclass, jintArray, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Const
 * Signature: ([FLbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Const___3FLbda_tensorflow_jni_GraphDefBuilder_2Ljava_lang_String_2
  (JNIEnv *, jclass, jfloatArray, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Const
 * Signature: ([ILbda/tensorflow/jni/TensorShape;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Const___3ILbda_tensorflow_jni_TensorShape_2Lbda_tensorflow_jni_GraphDefBuilder_2Ljava_lang_String_2
  (JNIEnv *, jclass, jintArray, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Const
 * Signature: ([FLbda/tensorflow/jni/TensorShape;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Const___3FLbda_tensorflow_jni_TensorShape_2Lbda_tensorflow_jni_GraphDefBuilder_2Ljava_lang_String_2
  (JNIEnv *, jclass, jfloatArray, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Const
 * Signature: (ILbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Const__ILbda_tensorflow_jni_GraphDefBuilder_2Ljava_lang_String_2
  (JNIEnv *, jclass, jint, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Const
 * Signature: (FLbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Const__FLbda_tensorflow_jni_GraphDefBuilder_2Ljava_lang_String_2
  (JNIEnv *, jclass, jfloat, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    TruncatedNormal
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_TruncatedNormal
  (JNIEnv *, jclass, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Assign
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Assign
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    AssignSub
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_AssignSub
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    AddSymbolicGradients
 * Signature: (Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Lbda/tensorflow/jni/Graph;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_bda_tensorflow_jni_Operation_AddSymbolicGradients__Ljava_lang_String_2Ljava_lang_String_2_3Ljava_lang_String_2Lbda_tensorflow_jni_Graph_2
  (JNIEnv *, jclass, jstring, jstring, jobjectArray, jobject);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    AddSymbolicGradients
 * Signature: ([Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Lbda/tensorflow/jni/Graph;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_bda_tensorflow_jni_Operation_AddSymbolicGradients___3Ljava_lang_String_2_3Ljava_lang_String_2_3Ljava_lang_String_2Lbda_tensorflow_jni_Graph_2
  (JNIEnv *, jclass, jobjectArray, jobjectArray, jobjectArray, jobject);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    InTopK
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;ILbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_InTopK
  (JNIEnv *, jclass, jobject, jobject, jint, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Gather
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;ZLbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Gather
  (JNIEnv *, jclass, jobject, jobject, jboolean, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    ExpandDims
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_ExpandDims
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Concat
 * Signature: (Lbda/tensorflow/run/NodeOut;[Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Concat
  (JNIEnv *, jclass, jobject, jobjectArray, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Equal
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Equal
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    ArgMax
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_ArgMax
  (JNIEnv *, jclass, jobject, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Cast
 * Signature: (Lbda/tensorflow/run/NodeOut;ILbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Cast
  (JNIEnv *, jclass, jobject, jint, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Tanh
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Tanh
  (JNIEnv *, jclass, jobject, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Select
 * Signature: (Lbda/tensorflow/run/NodeOut;[Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Select
  (JNIEnv *, jclass, jobject, jobjectArray, jobject, jstring);

/*
 * Class:     bda_tensorflow_jni_Operation
 * Method:    Slice
 * Signature: (Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/run/NodeOut;Lbda/tensorflow/jni/GraphDefBuilder;Ljava/lang/String;)Lbda/tensorflow/jni/Node;
 */
JNIEXPORT jobject JNICALL Java_bda_tensorflow_jni_Operation_Slice
  (JNIEnv *, jclass, jobject, jobject, jobject, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif