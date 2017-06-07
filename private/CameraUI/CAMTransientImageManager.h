//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/PUTransientImageManager-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CAMTransientImageManager : NSObject <PUTransientImageManager>
{
    NSMutableDictionary *__pairedVideosByPairedUUID;
    NSMutableDictionary *__activeRequestsByPairedUUID;
}

@property(readonly, nonatomic) NSMutableDictionary *_activeRequestsByPairedUUID; // @synthesize _activeRequestsByPairedUUID=__activeRequestsByPairedUUID;
@property(readonly, nonatomic) NSMutableDictionary *_pairedVideosByPairedUUID; // @synthesize _pairedVideosByPairedUUID=__pairedVideosByPairedUUID;
- (void).cxx_destruct;
- (void)_handleRequestTimeout:(id)arg1;
- (void)requestPairedVideoURLForUUID:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)removePairedVideoForUUID:(id)arg1;
- (id)insertPairedVideoWithConvertible:(id)arg1 filterType:(long long)arg2;
- (id)existingPairedVideoForUUID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

