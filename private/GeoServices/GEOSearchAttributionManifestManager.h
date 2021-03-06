//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GEOSearchAttributionServerProxy;

@interface GEOSearchAttributionManifestManager : NSObject
{
    id <GEOSearchAttributionServerProxy> _serverProxy;
}

+ (id)sharedManager;
+ (void)setUseLocalProxy:(_Bool)arg1;
+ (void)useRemoteProxy;
+ (void)useLocalProxy;
+ (void)useProxy:(Class)arg1;
@property(readonly, nonatomic) id <GEOSearchAttributionServerProxy> serverProxy; // @synthesize serverProxy=_serverProxy;
- (void).cxx_destruct;
- (void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

