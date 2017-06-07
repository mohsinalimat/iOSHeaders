//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSSet, NSString, NSUUID;
@protocol OS_dispatch_source;

@interface _HDAuthorizationRequestGroup : NSObject
{
    NSMutableSet *_typesToWrite;
    NSMutableSet *_typesToRead;
    _Bool _inTransaction;
    NSString *_bundleIdentifier;
    NSUUID *_promptSessionIdentifier;
    CDUnknownBlockType _promptHandler;
    NSMutableArray *_requests;
    NSMutableArray *_completions;
    NSObject<OS_dispatch_source> *_sessionTimeoutSource;
}

@property(nonatomic, getter=isInTransaction) _Bool inTransaction; // @synthesize inTransaction=_inTransaction;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *sessionTimeoutSource; // @synthesize sessionTimeoutSource=_sessionTimeoutSource;
@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(copy, nonatomic) CDUnknownBlockType promptHandler; // @synthesize promptHandler=_promptHandler;
@property(readonly, nonatomic) NSUUID *promptSessionIdentifier; // @synthesize promptSessionIdentifier=_promptSessionIdentifier;
@property(readonly, copy, nonatomic) NSSet *typesToRead; // @synthesize typesToRead=_typesToRead;
@property(readonly, copy, nonatomic) NSSet *typesToWrite; // @synthesize typesToWrite=_typesToWrite;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)_cancelTimeoutSource;
- (void)beginTransaction;
- (void)finishRequestsWithError:(id)arg1;
- (_Bool)promptIfNecessaryWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelRequestsWithIdentifiers:(id)arg1 error:(id)arg2;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)addRequest:(id)arg1;
@property(readonly, nonatomic) unsigned long long requestCount;
- (id)initWithBundleIdentifier:(id)arg1;

@end

