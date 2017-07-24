//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ConversionInfoPtrs_s {
    struct StageData_s *stages;
    int *data;
    float *fData;
    id *texLUTs;
    id *trcLUTs;
    id *dummyLUTs;
    id devFloatData;
};

struct ConversionInfo_s {
    float bgColor[4];
    unsigned int nData;
    unsigned int nFData;
    int nStages;
    int nMatrices;
    int nLuts;
    int nTRCs;
    int nCHIn;
    int nCHOut;
    int containsATableTRC;
};

struct MPSDeviceSpecificInfo {
    struct MPSKernelInfo *_field1;
    CDUnknownFunctionPointerType _field2;
    unsigned long long _field3;
};

struct MPSKernelInfo;

struct MPSLibraryInfo {
    int _field1;
    unsigned int _field2;
    char *_field3;
    struct MPSDeviceSpecificInfo _field4;
    struct MPSDeviceSpecificInfo _field5;
    struct MPSDeviceSpecificInfo _field6;
    struct MPSDeviceSpecificInfo _field7;
    struct MPSDeviceSpecificInfo _field8;
    struct MPSDeviceSpecificInfo _field9;
    struct MPSDeviceSpecificInfo _field10;
    struct MPSDeviceSpecificInfo _field11;
    struct MPSDeviceSpecificInfo _field12;
    struct MPSDeviceSpecificInfo _field13;
    struct MPSDeviceSpecificInfo _field14;
    struct MPSDeviceSpecificInfo _field15;
};

struct MPSOrigin {
    double _field1;
    double _field2;
    double _field3;
};

struct MPSRegion {
    struct MPSOrigin _field1;
    struct MPSSize _field2;
};

struct MPSScaleTransform {
    double scaleX;
    double scaleY;
    double translateX;
    double translateY;
};

struct MPSSize {
    double _field1;
    double _field2;
    double _field3;
};

struct RLERow {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
};

struct StageData_s;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    _Bool _field2;
} CDStruct_5577c19c;

typedef struct {
    unsigned long long maximumKeypoints;
    float minimumThresholdValue;
} CDStruct_5a9dc70e;

typedef struct {
    float threshold_value;
    float max_value;
    float matrix[3];
} CDStruct_ce7c4229;

typedef struct {
    long long x;
    long long y;
    long long z;
} CDStruct_d6af7fc0;

typedef struct {
    CDStruct_67e7699a origin;
    CDStruct_da2e99ad size;
} CDStruct_1e3be3a8;

// Ambiguous groups
typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long width;
    unsigned long long height;
    unsigned long long depth;
} CDStruct_da2e99ad;

typedef struct {
    unsigned long long x;
    unsigned long long y;
    unsigned long long z;
} CDStruct_67e7699a;

