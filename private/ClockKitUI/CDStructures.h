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

struct CLKUIGLUniforms {
    int rotation;
    int sampleRadius;
    int sampleCenter;
    int primaryTexture;
    int secondaryTexture;
};

struct CLKUITextureBackingStructure {
    void *bytes;
    unsigned int length;
    unsigned int width;
    unsigned int height;
    unsigned int planes;
    unsigned int planeLength;
    unsigned int bytesPerPixel;
    unsigned char format;
    unsigned char filter;
    unsigned char wrap;
};

struct NSNumber {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

#pragma mark Typedef'd Structures

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

