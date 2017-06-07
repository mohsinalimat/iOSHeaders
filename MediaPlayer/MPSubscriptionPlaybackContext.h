//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPPlaybackContext.h>

@class MPStoreUserEnvironment, NSArray;

@interface MPSubscriptionPlaybackContext : MPPlaybackContext
{
    MPStoreUserEnvironment *_environment;
    NSArray *_storeIDs;
}

+ (Class)queueFeederClass;
@property(readonly, copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
@property(copy, nonatomic) MPStoreUserEnvironment *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)descriptionComponents;
- (id)initWithStoreIDs:(id)arg1;

@end
