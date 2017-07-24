//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/FPXRequestHandlingProxyCreating-Protocol.h>

@class FPFileProviderService, FPXExtensionContext, NSString;

__attribute__((visibility("hidden")))
@interface FPXRequestHandlingProxyFactory : NSObject <FPXRequestHandlingProxyCreating>
{
    FPFileProviderService *_service;
    FPXExtensionContext *_context;
}

- (void).cxx_destruct;
- (void)fetchProxyForItemIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithService:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

