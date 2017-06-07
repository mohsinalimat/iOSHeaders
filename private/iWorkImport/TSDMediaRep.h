//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDStyledRep.h>

@class CALayer, CAShapeLayer, TSDFrameRep, TSDMediaInfo, TSDMediaLayout;

__attribute__((visibility("hidden")))
@interface TSDMediaRep : TSDStyledRep
{
    _Bool mIsZooming;
    CALayer *mTapToReplaceLayer;
    CAShapeLayer *mMaskLayer;
    CAShapeLayer *mStrokeLayer;
    CALayer *mFrameMaskLayer;
    TSDFrameRep *mFrameRep;
    struct CGRect mLastPictureFrameLayerRect;
}

- (_Bool)isPlaceholder;
@property(readonly, nonatomic) TSDMediaLayout *mediaLayout;
@property(readonly, nonatomic) TSDMediaInfo *mediaInfo;
- (void)dealloc;
- (_Bool)i_shouldRenderStroke:(id)arg1;
- (void)i_updateFrameRep;

@end
