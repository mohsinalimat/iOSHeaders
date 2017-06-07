//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CacheDelete/NSXPCListenerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSXPCListener, Protocol;

@interface CacheDeleteListener : NSObject <NSXPCListenerDelegate>
{
    id _xObj;
    NSMutableSet *_requiredEntitlements;
    Protocol *_protocol;
    NSXPCListener *_listener;
}

+ (id)daemonListenerWithExportedObject:(id)arg1;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSMutableSet *requiredEntitlements; // @synthesize requiredEntitlements=_requiredEntitlements;
@property(retain, nonatomic) id xObj; // @synthesize xObj=_xObj;
- (void).cxx_destruct;
- (void)resume;
- (void)addRequiredEntitlement:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithName:(id)arg1 listener:(id)arg2 protocol:(id)arg3 exportedObj:(id)arg4 isExtension:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

