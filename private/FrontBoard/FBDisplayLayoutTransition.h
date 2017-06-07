//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBDisplayLayoutTransition : NSObject
{
    NSString *_name;
    NSString *_transitionReason;
    unsigned long long _displayType;
    _Bool _transitioning;
    long long _interfaceOrientation;
    long long _backlightLevel;
}

+ (void)flushLayoutForDisplayType:(unsigned long long)arg1;
+ (id)layoutForDisplayType:(unsigned long long)arg1;
+ (_Bool)isTransitioningForDisplayType:(unsigned long long)arg1;
@property(nonatomic) long long backlightLevel; // @synthesize backlightLevel=_backlightLevel;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(copy, nonatomic) NSString *transitionReason; // @synthesize transitionReason=_transitionReason;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
- (void)endTransition;
- (void)beginTransition;
- (id)description;
- (void)dealloc;
- (id)initWithDisplayType:(unsigned long long)arg1 name:(id)arg2;

@end

