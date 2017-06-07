//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

#import <VideoSubscriberAccountUI/VSIdentityProviderFetchAllResult-Protocol.h>

@class NSOperationQueue, NSString, VSOptional;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderFetchAllOperation : VSAsyncOperation <VSIdentityProviderFetchAllResult>
{
    VSOptional *_result;
    NSOperationQueue *_subqueue;
}

@property(retain, nonatomic) NSOperationQueue *subqueue; // @synthesize subqueue=_subqueue;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

