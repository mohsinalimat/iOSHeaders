//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

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

struct PXSimpleIndexPath {
    unsigned long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
};

struct PXTileGeometry {
    struct CGRect _field1;
    struct CGPoint _field2;
    struct CGSize _field3;
    struct CGAffineTransform _field4;
    double _field5;
    double _field6;
    _Bool _field7;
    struct CGSize _field8;
    struct CGRect _field9;
    void *_field10;
};

struct PXTileIdentifier {
    unsigned long long _field1;
    unsigned long long _field2[10];
};

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

