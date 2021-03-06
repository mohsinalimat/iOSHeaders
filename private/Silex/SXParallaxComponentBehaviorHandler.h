//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentBehaviorHandler.h>

@interface SXParallaxComponentBehaviorHandler : SXComponentBehaviorHandler
{
    _Bool _isRotating;
    _Bool _inFirstViewport;
    _Bool _inLastViewport;
    int _direction;
    double _factor;
    struct CGRect _absoluteContentViewFrame;
}

@property(readonly, nonatomic) double factor; // @synthesize factor=_factor;
@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(nonatomic) struct CGRect absoluteContentViewFrame; // @synthesize absoluteContentViewFrame=_absoluteContentViewFrame;
@property(nonatomic) _Bool inLastViewport; // @synthesize inLastViewport=_inLastViewport;
@property(nonatomic) _Bool inFirstViewport; // @synthesize inFirstViewport=_inFirstViewport;
@property(readonly, nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
- (void)destroyWithBehaviorController:(id)arg1;
- (void)updateWithBehaviorController:(id)arg1;
- (void)setupWithBehaviorController:(id)arg1;
- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;

@end

