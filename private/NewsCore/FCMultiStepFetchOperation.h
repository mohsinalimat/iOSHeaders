//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCFetchOperation.h>

@class FCMutexLock, NSMutableArray;

@interface FCMultiStepFetchOperation : FCFetchOperation
{
    NSMutableArray *_steps;
    NSMutableArray *_stepResults;
    FCMutexLock *_accessLock;
}

@property(retain, nonatomic) FCMutexLock *accessLock; // @synthesize accessLock=_accessLock;
@property(retain, nonatomic) NSMutableArray *stepResults; // @synthesize stepResults=_stepResults;
@property(retain, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
- (void).cxx_destruct;
- (void)_performNextStep;
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;
- (id)completeFetchOperation;
- (void)addNonCriticalFetchStep:(SEL)arg1;
- (void)addFetchStep:(SEL)arg1;
- (void)performOperation;
- (id)init;

@end

