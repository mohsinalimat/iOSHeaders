//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADCanonicalRequest : NSObject
{
    _Bool _didSignRequest;
    NSObject<OS_dispatch_queue> *_signingQueue;
    NSObject<OS_dispatch_group> *_signingGroup;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool didSignRequest; // @synthesize didSignRequest=_didSignRequest;
@property(nonatomic) NSObject<OS_dispatch_group> *signingGroup; // @synthesize signingGroup=_signingGroup;
@property(nonatomic) NSObject<OS_dispatch_queue> *signingQueue; // @synthesize signingQueue=_signingQueue;
- (id)canonicalRequestForRequest:(id)arg1;
- (id)init;

@end

