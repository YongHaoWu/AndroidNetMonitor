/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jnetpcap_winpcap_WinPcap */

#ifndef _Included_org_jnetpcap_winpcap_WinPcap
#define _Included_org_jnetpcap_winpcap_WinPcap
#ifdef __cplusplus
extern "C" {
#endif
#undef org_jnetpcap_winpcap_WinPcap_DEFAULT_JPACKET_BUFFER_SIZE
#define org_jnetpcap_winpcap_WinPcap_DEFAULT_JPACKET_BUFFER_SIZE 1048576L
#undef org_jnetpcap_winpcap_WinPcap_DEFAULT_PROMISC
#define org_jnetpcap_winpcap_WinPcap_DEFAULT_PROMISC 1L
#undef org_jnetpcap_winpcap_WinPcap_DEFAULT_SNAPLEN
#define org_jnetpcap_winpcap_WinPcap_DEFAULT_SNAPLEN 65536L
#undef org_jnetpcap_winpcap_WinPcap_DEFAULT_TIMEOUT
#define org_jnetpcap_winpcap_WinPcap_DEFAULT_TIMEOUT 0L
#undef org_jnetpcap_winpcap_WinPcap_DISPATCH_BUFFER_FULL
#define org_jnetpcap_winpcap_WinPcap_DISPATCH_BUFFER_FULL -1L
#undef org_jnetpcap_winpcap_WinPcap_ERROR
#define org_jnetpcap_winpcap_WinPcap_ERROR -1L
#undef org_jnetpcap_winpcap_WinPcap_ERROR_ACTIVATED
#define org_jnetpcap_winpcap_WinPcap_ERROR_ACTIVATED -4L
#undef org_jnetpcap_winpcap_WinPcap_ERROR_BREAK
#define org_jnetpcap_winpcap_WinPcap_ERROR_BREAK -2L
#undef org_jnetpcap_winpcap_WinPcap_ERROR_IFACE_NOT_UP
#define org_jnetpcap_winpcap_WinPcap_ERROR_IFACE_NOT_UP -9L
#undef org_jnetpcap_winpcap_WinPcap_ERROR_NO_SUCH_DEVICE
#define org_jnetpcap_winpcap_WinPcap_ERROR_NO_SUCH_DEVICE -5L
#undef org_jnetpcap_winpcap_WinPcap_ERROR_NOT_ACTIVATED
#define org_jnetpcap_winpcap_WinPcap_ERROR_NOT_ACTIVATED -3L
#undef org_jnetpcap_winpcap_WinPcap_ERROR_NOT_RFMON
#define org_jnetpcap_winpcap_WinPcap_ERROR_NOT_RFMON -7L
#undef org_jnetpcap_winpcap_WinPcap_ERROR_PERM_DENIED
#define org_jnetpcap_winpcap_WinPcap_ERROR_PERM_DENIED -8L
#undef org_jnetpcap_winpcap_WinPcap_ERROR_RFMON_NOTSUP
#define org_jnetpcap_winpcap_WinPcap_ERROR_RFMON_NOTSUP -6L
#undef org_jnetpcap_winpcap_WinPcap_IN
#define org_jnetpcap_winpcap_WinPcap_IN 1L
#undef org_jnetpcap_winpcap_WinPcap_INOUT
#define org_jnetpcap_winpcap_WinPcap_INOUT 0L
#undef org_jnetpcap_winpcap_WinPcap_LOOP_INFINATE
#define org_jnetpcap_winpcap_WinPcap_LOOP_INFINATE -1L
#undef org_jnetpcap_winpcap_WinPcap_LOOP_INFINITE
#define org_jnetpcap_winpcap_WinPcap_LOOP_INFINITE -1L
#undef org_jnetpcap_winpcap_WinPcap_LOOP_INTERRUPTED
#define org_jnetpcap_winpcap_WinPcap_LOOP_INTERRUPTED -2L
#undef org_jnetpcap_winpcap_WinPcap_MODE_BLOCKING
#define org_jnetpcap_winpcap_WinPcap_MODE_BLOCKING 0L
#undef org_jnetpcap_winpcap_WinPcap_MODE_NON_BLOCKING
#define org_jnetpcap_winpcap_WinPcap_MODE_NON_BLOCKING 1L
#undef org_jnetpcap_winpcap_WinPcap_MODE_NON_PROMISCUOUS
#define org_jnetpcap_winpcap_WinPcap_MODE_NON_PROMISCUOUS 0L
#undef org_jnetpcap_winpcap_WinPcap_MODE_PROMISCUOUS
#define org_jnetpcap_winpcap_WinPcap_MODE_PROMISCUOUS 1L
#undef org_jnetpcap_winpcap_WinPcap_NEXT_EX_EOF
#define org_jnetpcap_winpcap_WinPcap_NEXT_EX_EOF -2L
#undef org_jnetpcap_winpcap_WinPcap_NEXT_EX_NOT_OK
#define org_jnetpcap_winpcap_WinPcap_NEXT_EX_NOT_OK -1L
#undef org_jnetpcap_winpcap_WinPcap_NEXT_EX_OK
#define org_jnetpcap_winpcap_WinPcap_NEXT_EX_OK 1L
#undef org_jnetpcap_winpcap_WinPcap_NEXT_EX_TIMEDOUT
#define org_jnetpcap_winpcap_WinPcap_NEXT_EX_TIMEDOUT 0L
#undef org_jnetpcap_winpcap_WinPcap_NOT_OK
#define org_jnetpcap_winpcap_WinPcap_NOT_OK -1L
#undef org_jnetpcap_winpcap_WinPcap_OK
#define org_jnetpcap_winpcap_WinPcap_OK 0L
#undef org_jnetpcap_winpcap_WinPcap_OUT
#define org_jnetpcap_winpcap_WinPcap_OUT 2L
#undef org_jnetpcap_winpcap_WinPcap_WARNING
#define org_jnetpcap_winpcap_WinPcap_WARNING 1L
#undef org_jnetpcap_winpcap_WinPcap_WARNING_PROMISC_NOT_SUP
#define org_jnetpcap_winpcap_WinPcap_WARNING_PROMISC_NOT_SUP 2L
#undef org_jnetpcap_winpcap_WinPcap_MODE_CAPT
#define org_jnetpcap_winpcap_WinPcap_MODE_CAPT 0L
#undef org_jnetpcap_winpcap_WinPcap_MODE_MONITOR
#define org_jnetpcap_winpcap_WinPcap_MODE_MONITOR 2L
#undef org_jnetpcap_winpcap_WinPcap_MODE_STAT
#define org_jnetpcap_winpcap_WinPcap_MODE_STAT 1L
#undef org_jnetpcap_winpcap_WinPcap_OPENFLAG_DATATX_UDP
#define org_jnetpcap_winpcap_WinPcap_OPENFLAG_DATATX_UDP 2L
#undef org_jnetpcap_winpcap_WinPcap_OPENFLAG_MAX_RESPONSIVENESS
#define org_jnetpcap_winpcap_WinPcap_OPENFLAG_MAX_RESPONSIVENESS 16L
#undef org_jnetpcap_winpcap_WinPcap_OPENFLAG_NOCAPTURE_LOCAL
#define org_jnetpcap_winpcap_WinPcap_OPENFLAG_NOCAPTURE_LOCAL 8L
#undef org_jnetpcap_winpcap_WinPcap_OPENFLAG_NOCAPTURE_RPCAP
#define org_jnetpcap_winpcap_WinPcap_OPENFLAG_NOCAPTURE_RPCAP 4L
#undef org_jnetpcap_winpcap_WinPcap_SRC_FILE
#define org_jnetpcap_winpcap_WinPcap_SRC_FILE 2L
#undef org_jnetpcap_winpcap_WinPcap_SRC_IFLOCAL
#define org_jnetpcap_winpcap_WinPcap_SRC_IFLOCAL 3L
#undef org_jnetpcap_winpcap_WinPcap_SRC_IFREMOTE
#define org_jnetpcap_winpcap_WinPcap_SRC_IFREMOTE 4L
#undef org_jnetpcap_winpcap_WinPcap_TRANSMIT_SYNCH_ASAP
#define org_jnetpcap_winpcap_WinPcap_TRANSMIT_SYNCH_ASAP 0L
#undef org_jnetpcap_winpcap_WinPcap_TRANSMIT_SYNCH_USE_TIMESTAMP
#define org_jnetpcap_winpcap_WinPcap_TRANSMIT_SYNCH_USE_TIMESTAMP 1L
/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    createSrcStr
 * Signature: (Ljava/lang/StringBuffer;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/StringBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_jnetpcap_winpcap_WinPcap_createSrcStr
  (JNIEnv *, jclass, jobject, jint, jstring, jstring, jstring, jobject);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    findAllDevsEx
 * Signature: (Ljava/lang/String;Lorg/jnetpcap/winpcap/WinPcapRmtAuth;Ljava/util/List;Ljava/lang/StringBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_jnetpcap_winpcap_WinPcap_findAllDevsEx
  (JNIEnv *, jclass, jstring, jobject, jobject, jobject);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jnetpcap_winpcap_WinPcap_initIDs
  (JNIEnv *, jclass);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    isSupported
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jnetpcap_winpcap_WinPcap_isSupported
  (JNIEnv *, jclass);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    offlineFilter
 * Signature: (Lorg/jnetpcap/PcapBpfProgram;IILjava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_jnetpcap_winpcap_WinPcap_offlineFilter__Lorg_jnetpcap_PcapBpfProgram_2IILjava_nio_ByteBuffer_2
  (JNIEnv *, jclass, jobject, jint, jint, jobject);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    offlineFilter
 * Signature: (Lorg/jnetpcap/PcapBpfProgram;Lorg/jnetpcap/PcapHeader;Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_jnetpcap_winpcap_WinPcap_offlineFilter__Lorg_jnetpcap_PcapBpfProgram_2Lorg_jnetpcap_PcapHeader_2Ljava_nio_ByteBuffer_2
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    offlineFilter
 * Signature: (Lorg/jnetpcap/PcapBpfProgram;Lorg/jnetpcap/PcapHeader;Lorg/jnetpcap/nio/JBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_jnetpcap_winpcap_WinPcap_offlineFilter__Lorg_jnetpcap_PcapBpfProgram_2Lorg_jnetpcap_PcapHeader_2Lorg_jnetpcap_nio_JBuffer_2
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    offlineFilter
 * Signature: (Lorg/jnetpcap/PcapBpfProgram;Lorg/jnetpcap/PcapPktHdr;Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_org_jnetpcap_winpcap_WinPcap_offlineFilter__Lorg_jnetpcap_PcapBpfProgram_2Lorg_jnetpcap_PcapPktHdr_2Ljava_nio_ByteBuffer_2
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    open
 * Signature: (Ljava/lang/String;IIILorg/jnetpcap/winpcap/WinPcapRmtAuth;Ljava/lang/StringBuffer;)Lorg/jnetpcap/winpcap/WinPcap;
 */
JNIEXPORT jobject JNICALL Java_org_jnetpcap_winpcap_WinPcap_open
  (JNIEnv *, jclass, jstring, jint, jint, jint, jobject, jobject);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    openDead
 * Signature: (II)Lorg/jnetpcap/winpcap/WinPcap;
 */
JNIEXPORT jobject JNICALL Java_org_jnetpcap_winpcap_WinPcap_openDead
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    openLive
 * Signature: (Ljava/lang/String;IIILjava/lang/StringBuffer;)Lorg/jnetpcap/winpcap/WinPcap;
 */
JNIEXPORT jobject JNICALL Java_org_jnetpcap_winpcap_WinPcap_openLive
  (JNIEnv *, jclass, jstring, jint, jint, jint, jobject);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    openOffline
 * Signature: (Ljava/lang/String;Ljava/lang/StringBuffer;)Lorg/jnetpcap/winpcap/WinPcap;
 */
JNIEXPORT jobject JNICALL Java_org_jnetpcap_winpcap_WinPcap_openOffline
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    liveDump
 * Signature: (Ljava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_org_jnetpcap_winpcap_WinPcap_liveDump
  (JNIEnv *, jobject, jstring, jint, jint);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    liveDumpEnded
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_jnetpcap_winpcap_WinPcap_liveDumpEnded
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    sendQueueTransmit
 * Signature: (Lorg/jnetpcap/winpcap/WinPcapSendQueue;I)I
 */
JNIEXPORT jint JNICALL Java_org_jnetpcap_winpcap_WinPcap_sendQueueTransmit
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    setBuff
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_jnetpcap_winpcap_WinPcap_setBuff
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    setMinToCopy
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_jnetpcap_winpcap_WinPcap_setMinToCopy
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    setMode
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_jnetpcap_winpcap_WinPcap_setMode
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    setSampling
 * Signature: ()Lorg/jnetpcap/winpcap/WinPcapSamp;
 */
JNIEXPORT jobject JNICALL Java_org_jnetpcap_winpcap_WinPcap_setSampling
  (JNIEnv *, jobject);

/*
 * Class:     org_jnetpcap_winpcap_WinPcap
 * Method:    statsEx
 * Signature: ()Lorg/jnetpcap/winpcap/WinPcapStat;
 */
JNIEXPORT jobject JNICALL Java_org_jnetpcap_winpcap_WinPcap_statsEx
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif