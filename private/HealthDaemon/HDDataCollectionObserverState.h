//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDDataCollectionObserverState : NSObject <NSCopying>
{
    _Bool _isInBackground;
    _Bool _hasRunningWorkout;
}

+ (id)dataCollectionObserverStateInBackground:(_Bool)arg1 hasRunningWorkout:(_Bool)arg2;
@property(readonly, nonatomic) _Bool hasRunningWorkout; // @synthesize hasRunningWorkout=_hasRunningWorkout;
@property(readonly, nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

