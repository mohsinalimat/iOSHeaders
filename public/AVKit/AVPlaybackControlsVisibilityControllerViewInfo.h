//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AVPlaybackControlsVisibilityControllerViewInfo : NSObject
{
    _Bool _initiallyHidden;
    NSArray *_controls;
    long long _visibilityBehaviorOptions;
}

@property(nonatomic, getter=isInitiallyHidden) _Bool initiallyHidden; // @synthesize initiallyHidden=_initiallyHidden;
@property(nonatomic) long long visibilityBehaviorOptions; // @synthesize visibilityBehaviorOptions=_visibilityBehaviorOptions;
@property(retain, nonatomic) NSArray *controls; // @synthesize controls=_controls;
- (void).cxx_destruct;

@end

