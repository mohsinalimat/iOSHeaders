//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKTransition.h>

@interface OKTransitionParallaxPush : OKTransition
{
    unsigned long long _direction;
    double _parallaxAmount;
    double _fadeFromAlpha;
    double _fadeToAlpha;
}

+ (id)supportedSettings;
@property(nonatomic) double fadeToAlpha; // @synthesize fadeToAlpha=_fadeToAlpha;
@property(nonatomic) double fadeFromAlpha; // @synthesize fadeFromAlpha=_fadeFromAlpha;
@property(nonatomic) double parallaxAmount; // @synthesize parallaxAmount=_parallaxAmount;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (void)makeCurrentTransitionInteractiveWithContext:(id)arg1 andProgress:(double)arg2;
- (void)updateInteractiveTransitionWithContext:(id)arg1 andProgress:(double)arg2;
- (void)startInteractiveTransitionWithContext:(id)arg1;
- (_Bool)tracksWithFinger;
- (void)_transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 wasInteractive:(_Bool)arg4 duration:(double)arg5 doEaseIn:(_Bool)arg6 doEaseOut:(_Bool)arg7 isCompleting:(_Bool)arg8 wasCancelled:(_Bool)arg9 fromProgress:(double)arg10 completionHandler:(CDUnknownBlockType)arg11;
- (void)setSettingFadeToAlpha:(double)arg1;
- (void)setSettingFadeFromAlpha:(double)arg1;
- (void)setSettingParallaxAmount:(double)arg1;
- (void)setSettingDirection:(unsigned long long)arg1;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end

