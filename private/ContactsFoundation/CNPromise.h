//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/CNPromise-Protocol.h>

@class CNFuture, NSString;

@interface CNPromise : NSObject <CNPromise>
{
    CNFuture *_future;
}

@property(readonly) CNFuture *future; // @synthesize future=_future;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (CDUnknownBlockType)boolErrorCompletionHandlerAdapter;
- (CDUnknownBlockType)completionHandlerAdapterWithDefaultValue:(id)arg1;
- (CDUnknownBlockType)completionHandlerAdapter;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)finishWithError:(id)arg1;
- (_Bool)finishWithResult:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

