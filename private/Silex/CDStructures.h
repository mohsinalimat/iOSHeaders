//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CLLocationCoordinate2D {
    double _field1;
    double _field2;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _SXConvertibleValue {
    double value;
    unsigned long long unit;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long rowIndex;
    unsigned long long columnIndex;
} CDStruct_2fea82da;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    struct {
        double x;
        double y;
    } origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;

typedef struct {
    struct CLLocationCoordinate2D _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
} CDStruct_2b0c6e0b;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
} CDStruct_b7523c42;

