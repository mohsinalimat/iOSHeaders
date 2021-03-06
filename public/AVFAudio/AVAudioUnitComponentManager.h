//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface AVAudioUnitComponentManager : NSObject
{
    void *_impl;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)privateAllocInitSingleton;
+ (id)sharedAudioUnitComponentManager;
- (id)componentsMatchingDescription:(struct AudioComponentDescription)arg1;
- (id)componentsPassingTest:(CDUnknownBlockType)arg1;
- (id)componentsMatchingPredicate:(id)arg1;
@property(readonly, nonatomic) NSArray *standardLocalizedTagNames;
@property(readonly, nonatomic) NSArray *tagNames;
- (void)localeChanged:(id)arg1;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

