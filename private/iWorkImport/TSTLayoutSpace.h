//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSTCoordinateArray, TSTLayout, TSTLayoutSpaceBezierPathCache, TSTLayoutSpaceBundle, TSTMasterLayout;

__attribute__((visibility("hidden")))
@interface TSTLayoutSpace : NSObject
{
    TSTLayoutSpaceBundle *mBundle;
    int mLayoutSpaceType;
    _Bool mInvalidTableOffset;
    unsigned char mInvalidColumnIndex;
    unsigned short mInvalidRowIndex;
    CDStruct_58eae27c mGridRange;
    _Bool mHeaderColumnsRepeat;
    _Bool mHeaderRowsRepeat;
    double mViewScale;
    struct CGAffineTransform mTransformToCanvas;
    struct CGAffineTransform mTransformFromCanvas;
    struct CGAffineTransform mTransformToDevice;
    struct CGAffineTransform mTransformFromDevice;
    _Bool mDrawBlackAndWhite;
    _Bool mDrawPreventAntialias;
    struct CGPoint mTableOffset;
    TSTCoordinateArray *mHeaderRowColumnCoordinates;
    TSTCoordinateArray *mBodyColumnCoordinates;
    TSTCoordinateArray *mHeaderColumnRowCoordinates;
    TSTCoordinateArray *mBodyRowCoordinates;
    struct CGRect mCachedFrame;
    struct CGRect mCachedAlignedFrame;
    struct CGRect mCachedStrokeFrame;
    struct CGRect mCachedAlignedStrokeFrame;
    TSTLayoutSpaceBezierPathCache *mBezierPathCache;
    _Bool mLayoutDirectionIsLeftToRight;
    struct _opaque_pthread_rwlock_t mLock;
}

@property(nonatomic) struct CGPoint tableOffset; // @synthesize tableOffset=mTableOffset;
@property(nonatomic) _Bool drawPreventAntialias; // @synthesize drawPreventAntialias=mDrawPreventAntialias;
@property(nonatomic) _Bool drawBlackAndWhite; // @synthesize drawBlackAndWhite=mDrawBlackAndWhite;
@property(nonatomic) struct CGAffineTransform transformFromDevice; // @synthesize transformFromDevice=mTransformFromDevice;
@property(nonatomic) struct CGAffineTransform transformToDevice; // @synthesize transformToDevice=mTransformToDevice;
@property(nonatomic) struct CGAffineTransform transformFromCanvas; // @synthesize transformFromCanvas=mTransformFromCanvas;
@property(nonatomic) struct CGAffineTransform transformToCanvas; // @synthesize transformToCanvas=mTransformToCanvas;
@property(nonatomic) double viewScale; // @synthesize viewScale=mViewScale;
@property(nonatomic) _Bool headerRowsRepeat; // @synthesize headerRowsRepeat=mHeaderRowsRepeat;
@property(nonatomic) _Bool headerColumnsRepeat; // @synthesize headerColumnsRepeat=mHeaderColumnsRepeat;
@property(readonly, nonatomic) TSTLayoutSpaceBezierPathCache *bezierPathCache; // @synthesize bezierPathCache=mBezierPathCache;
@property(readonly, nonatomic) _Bool layoutDirectionIsLeftToRight; // @synthesize layoutDirectionIsLeftToRight=mLayoutDirectionIsLeftToRight;
@property(readonly, nonatomic) int layoutSpaceType; // @synthesize layoutSpaceType=mLayoutSpaceType;
@property(readonly, nonatomic) TSTLayoutSpaceBundle *bundle; // @synthesize bundle=mBundle;
- (int)validateCoordinateCache:(id)arg1;
- (void)validateCachedFrames;
- (void)drawStrokesInGridRange:(CDStruct_58eae27c)arg1 clearStrokes:(_Bool)arg2 context:(struct CGContext *)arg3;
- (void)p_drawStrokeForGridRow:(unsigned int)arg1 strokeRect:(CDStruct_58eae27c)arg2 clearStroke:(_Bool)arg3 shadowType:(int)arg4 context:(struct CGContext *)arg5;
- (void)p_drawStrokeForGridColumn:(unsigned int)arg1 strokeRect:(CDStruct_58eae27c)arg2 clearStroke:(_Bool)arg3 shadowType:(int)arg4 context:(struct CGContext *)arg5;
- (int)validateTableOffset:(id)arg1;
- (int)validate:(id)arg1;
- (void)invalidateTableOffset;
- (void)invalidateCoordinatesAfterRow:(unsigned short)arg1;
- (void)invalidateCoordinatesAfterColumn:(unsigned char)arg1;
- (void)invalidateCoordinates;
- (void)unlock;
- (void)lockForWrite;
- (void)lockForRead;
- (id)description;
- (void)dealloc;
- (id)initWithLayoutSpaceBundle:(id)arg1 type:(int)arg2;
@property(readonly, nonatomic) _Bool isCorner;
@property(readonly, nonatomic) _Bool isRows;
@property(readonly, nonatomic) _Bool isColumns;
@property(readonly, nonatomic) _Bool isRepeat;
@property(readonly, nonatomic) _Bool isFrozen;
@property(readonly, nonatomic) _Bool isMain;
- (_Bool)p_getLayoutDirectionLeftToRight;
@property(readonly, nonatomic) TSTMasterLayout *masterLayout;
@property(readonly, nonatomic) TSTLayout *layout;

@end

