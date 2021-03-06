//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DLens.h>

__attribute__((visibility("hidden")))
@interface TSCH3DRectangleLens : TSCH3DLens
{
    float mLeft;
    float mRight;
    float mBottom;
    float mTop;
}

@property(nonatomic) float top; // @synthesize top=mTop;
@property(nonatomic) float bottom; // @synthesize bottom=mBottom;
@property(nonatomic) float right; // @synthesize right=mRight;
@property(nonatomic) float left; // @synthesize left=mLeft;
- (id)shiftedByPercentage:(tvec2_84d5962d *)arg1;
- (id)shiftByPercentage:(tvec2_84d5962d *)arg1;
- (id)narrowedByNormalizedBounds:(box_80622335 *)arg1;
- (id)narrowByNormalizedBounds:(box_80622335 *)arg1;
@property(readonly, nonatomic) float height;
@property(readonly, nonatomic) float width;
- (void)setPerPixelSize:(tvec2_3b141483 *)arg1;
- (void)setPerPixel:(box_0260e9b3 *)arg1;
- (void)deviceNormalize;
- (void)normalize;
- (struct FrustumRect)frustumRect;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

