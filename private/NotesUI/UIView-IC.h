//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (IC)
+ (void)ic_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)ic_animateWithDuration:(double)arg1 timingFunction:(id)arg2 animations:(CDUnknownBlockType)arg3;
- (id)ic_animator;
- (id)ic_renderImageView;
- (id)ic_renderImage;
- (void)ic_addConstraintsToFillSuperview;
- (void)ic_removeAllConstraintsForSubview:(id)arg1;
- (id)ic_imageViewRenderedFromViewHierarchy;
- (id)ic_imageViewRenderedFromLayer;
- (id)ic_imageRenderedFromViewHierarchy;
- (id)ic_imageRenderedFromLayer;
- (void)ic_crashIfWindowIsSecure;
- (_Bool)ic_isInSecureWindow;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets ic_directionalSafeAreaInsets;
@property(readonly, nonatomic) _Bool ic_isRTL;
@end

