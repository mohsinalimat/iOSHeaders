//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/_INImageServiceResponder-Protocol.h>

@class NSString;
@protocol _INImageServiceResponder;

@interface _INImageServiceForwarder : NSObject <_INImageServiceResponder>
{
    id <_INImageServiceResponder> _destinationResponder;
}

+ (id)sharedForwarder;
@property(nonatomic) __weak id <_INImageServiceResponder> destinationResponder; // @synthesize destinationResponder=_destinationResponder;
- (void).cxx_destruct;
- (void)fetchSizeForINImage:(id)arg1 reply:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

