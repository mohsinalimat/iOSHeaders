//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleBackdropCALayer : FigBaseCALayer
{
    struct OpaqueFigSubtitleBackdropCALayerInternal *bdLayerInternal;
}

- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3;
- (void)updateHDRContentState:(_Bool)arg1;
- (void)updateWindowOpacity:(double)arg1;
- (void)updateBackdropLayer;
- (_Bool)shouldEnableBackdropLayer;
- (void)setNeedsLayout;
- (void)setNeedsDisplay;
- (void)setContents:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;

@end

