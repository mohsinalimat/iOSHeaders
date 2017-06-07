//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/NSObject-Protocol.h>

@class NSError;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskManager;

@protocol CoreDAVSubmittable <NSObject>
@property(nonatomic) double timeoutInterval;
@property(readonly, nonatomic) NSError *error;
@property(nonatomic) id <CoreDAVAccountInfoProvider> accountInfoProvider;
@property(nonatomic) id <CoreDAVTaskManager> taskManager;
@property(copy, nonatomic) CDUnknownBlockType completionBlock;
- (void)finishEarlyWithError:(NSError *)arg1;
- (void)submitWithTaskManager:(id <CoreDAVTaskManager>)arg1;
@end

