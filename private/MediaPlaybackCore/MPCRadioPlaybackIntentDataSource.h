//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackIntentDataSource-Protocol.h>

@class NSString;

@interface MPCRadioPlaybackIntentDataSource : NSObject <MPCPlaybackIntentDataSource>
{
}

- (id)_legacyAlternativeRepresentationForPlaybackIntent:(id)arg1 player:(id)arg2;
- (void)populateRepresentationsForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)populateContainer:(id)arg1 forPlaybackIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)configureContainer:(id)arg1 forPlaybackIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

