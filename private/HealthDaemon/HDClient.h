//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSUUID, NSXPCConnection, _HKEntitlements;

@interface HDClient : NSObject
{
    NSString *_entitlementsApplicationIdentifier;
    _Bool _isExtension;
    NSXPCConnection *_connection;
    _HKEntitlements *_entitlements;
    NSString *_name;
    NSString *_processBundleIdentifier;
    NSString *_containerAppBundleIdentifier;
    NSString *_sourceBundleIdentifier;
    NSUUID *_UUID;
    NSMutableSet *_droppedEntitlements;
}

+ (id)clientWithConnection:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSMutableSet *droppedEntitlements; // @synthesize droppedEntitlements=_droppedEntitlements;
@property(readonly) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(readonly) NSString *containerAppBundleIdentifier; // @synthesize containerAppBundleIdentifier=_containerAppBundleIdentifier;
@property(readonly) NSString *processBundleIdentifier; // @synthesize processBundleIdentifier=_processBundleIdentifier;
@property(readonly) _Bool isExtension; // @synthesize isExtension=_isExtension;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) _HKEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)restoreEntitlement:(id)arg1;
- (void)dropEntitlement:(id)arg1;
- (id)valueForEntitlement:(id)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (_Bool)hasRequiredEntitlement:(id)arg1 error:(id *)arg2;
@property(readonly) int processIdentifier;
@property(readonly) NSString *applicationIdentifier;
- (id)_initWithConnection:(id)arg1 entitlements:(id)arg2;
- (id)initWithEntitlements:(id)arg1;
- (id)initWithConnection:(id)arg1 entitlements:(id)arg2;
- (id)baseDataEntityEncodingOptions;
- (id)filterWithQueryFilter:(id)arg1 profile:(id)arg2;

@end

