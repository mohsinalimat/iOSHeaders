//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class CALayer, NSString, TSDRep;

@protocol TSDRepAnimationFiltering <NSObject>
- (id)animationForRepLayer:(CALayer *)arg1 withEvent:(NSString *)arg2;

@optional
- (id)animationForChildRep:(TSDRep *)arg1 layer:(CALayer *)arg2 withEvent:(NSString *)arg3;
@end
