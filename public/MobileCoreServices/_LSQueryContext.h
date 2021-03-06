//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol _LSQueryResolving;

@interface _LSQueryContext : NSObject
{
    id _resolver;
}

+ (id)defaultContext;
+ (void)setSimulateLimitedMappingForXCTests:(_Bool)arg1;
+ (_Bool)simulateLimitedMappingForXCTests;
- (id)debugDescription;
- (void)clearCaches;
- (void)dealloc;
- (id)init;
- (id)resolveQueries:(id)arg1 cachingStrategy:(long long)arg2 error:(id *)arg3;
- (void)enumerateResolvedResultsOfQuery:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
@property(readonly) id <_LSQueryResolving> _resolver; // @dynamic _resolver;
- (id)_init;
- (id)_resolveQueries:(id)arg1 cachingStrategy:(long long)arg2 XPCConnection:(id)arg3 error:(id *)arg4;

@end

