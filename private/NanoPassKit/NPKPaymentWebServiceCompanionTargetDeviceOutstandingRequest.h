//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface NPKPaymentWebServiceCompanionTargetDeviceOutstandingRequest : NSObject
{
    NSString *_messageIdentifier;
    id _completionHandler;
    CDUnknownBlockType _errorHandler;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
- (void).cxx_destruct;

@end

