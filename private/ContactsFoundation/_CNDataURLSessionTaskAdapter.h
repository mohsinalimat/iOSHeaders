//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/NSURLSessionDataDelegate-Protocol.h>

@class NSString;

@interface _CNDataURLSessionTaskAdapter : NSObject <NSURLSessionDataDelegate>
{
    CDUnknownBlockType _onDataReceived;
    CDUnknownBlockType _onCompletion;
}

@property(copy) CDUnknownBlockType onCompletion; // @synthesize onCompletion=_onCompletion;
@property(copy) CDUnknownBlockType onDataReceived; // @synthesize onDataReceived=_onDataReceived;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

