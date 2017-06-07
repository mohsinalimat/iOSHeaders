//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AXVKImageAnalyzer : NSObject
{
    NSObject<OS_dispatch_queue> *_analyzeQueue;
    NSObject<OS_dispatch_queue> *_requestsQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestsQueue; // @synthesize requestsQueue=_requestsQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *analyzeQueue; // @synthesize analyzeQueue=_analyzeQueue;
- (id)resultsFromRequests:(id)arg1;
- (void)analyzeImage:(struct CGImage *)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)requestNamesWithOptions;
- (void)dealloc;
- (id)init;

@end

