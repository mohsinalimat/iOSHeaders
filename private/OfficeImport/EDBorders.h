//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDBorders : NSObject <NSCopying>
{
    EDResources *mResources;
    unsigned long long mLeftBorderIndex;
    unsigned long long mRightBorderIndex;
    unsigned long long mTopBorderIndex;
    unsigned long long mBottomBorderIndex;
    unsigned long long mDiagonalBorderIndex;
    unsigned long long mVerticalBorderIndex;
    unsigned long long mHorizontalBorderIndex;
}

+ (id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 vertical:(id)arg6 horizontal:(id)arg7 resources:(id)arg8;
+ (id)bordersWithLeft:(id)arg1 right:(id)arg2 top:(id)arg3 bottom:(id)arg4 diagonal:(id)arg5 resources:(id)arg6;
+ (id)bordersWithResources:(id)arg1;
- (id)description;
- (id)horizontalBorder;
- (id)verticalBorder;
- (id)diagonalBorder;
- (id)bottomBorder;
- (id)topBorder;
- (id)rightBorder;
- (id)leftBorder;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToBorders:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResources:(id)arg1;
- (void)setHorizontalBorder:(id)arg1;
- (void)setVerticalBorder:(id)arg1;
- (void)setDiagonalBorder:(id)arg1;
- (void)setBottomBorder:(id)arg1;
- (void)setTopBorder:(id)arg1;
- (void)setRightBorder:(id)arg1;
- (void)setLeftBorder:(id)arg1;

@end

