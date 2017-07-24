//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/HDCloudSyncServerInterface-Protocol.h>

@class NSString;

@interface HDCloudSyncServer : HDSubserver <HDCloudSyncServerInterface>
{
}

- (void)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchCloudSyncStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchCloudDescriptionWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_forceCloudResetWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_createCloudShareWithRecipient:(id)arg1 sampleTypes:(id)arg2 maxSampleAge:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

