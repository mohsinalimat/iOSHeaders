//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOServiceRequester.h>

#import <GeoServices/_GEOETARequesterServerProxy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOETARequesterServerLocalProxy : GEOServiceRequester <_GEOETARequesterServerProxy>
{
}

- (void)cancelSimpleETARequest:(id)arg1;
- (void)startSimpleETARequest:(id)arg1 auditToken:(id)arg2 requestMode:(int)arg3 finished:(CDUnknownBlockType)arg4 networkActivity:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

